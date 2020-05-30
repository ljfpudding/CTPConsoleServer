#include "stdafx.h"
#include "strategy.h"
#include <list>
#include <io.h>
#include <array>

#include "ThreadWorkLogic.h"
#include "VolumeIndicatorMD.h"






/*

再深入解析一下KD指标的时间平滑算法， 首先考虑数据引用周期， N基本取值20，第一个SMA参数
是3，也就是说要引用RSV的周期为3, 包括本身的一个，那么向前移动两个，即20+2=22， 第一次
的SMA周期即K值平滑的时间周期为22。第二个SMA参数是3， 再加上2，周期为24,即22+2=24。也就是说
KD以20,3,3为参数设置的话，那么引用的周期是24天。 即依据24个交易日内的价格变动来进行运行趋势的研判。

20,3,3的话， 应该从20+2+2 开始, 24算出第一个RSV值， 第一个K值, 第一个D值
9,3,3的话， 应该从9+2+2 开始, 13算出第一个RSV值， 第一个K值, 第一个D值

RSV=(当前价-周期内最低价)/(周期内最高价-周期内最低价)*100  N为20
k:SMA(RSV, M1,1)  M1为3
D:SMA(K,M2,1) M2为3

K= 1/3当日RSV+ 2/3前一日K值   实际这是简化了，应该是  1/3当日RSV + 1/3 前一日K值 + 1/3 前前一日K值
D= 1/3当日K值+ 2/3前一日D值   实际这是简化了，应该是  1/3当日K + 1/3 前一日D值 + 1/3 前前一日D值

SMA算法(加权移动平均)
Y=[M*X+(N-M)*Y"]/N    N为3,  M为加权1    这里简化了， Y =[ M*X + Y" + Y""+Y""" + ... ]/N  Y"代表前一日X值, Y""代表前前一日X值,Y"""代表前前前一日X值, 有多少个取决于(N-M)  

*/


map<int, double>  g_mapK;
map<int, double>  g_mapD;

spin_mutex smK;
spin_mutex smD;

HANDLE hStrategy = NULL;
map<int, double>  g_mapPreDayPrice;
TThostFtdcMdcsvFileName     g_chPredayMdcsvFileName = { 0 };

//=========================================================================================================
//从前一天的文件中读取Price值list
void findPreDayPriceFile(string path, vector<string>& files, string strdsc)
{
	//string path = ".\\Data";
	//文件句柄
	intptr_t hFile = 0;
	//文件信息
	struct _finddata_t fileinfo;
	string p = "";
	if ((hFile = _findfirst(p.assign(path).append("\\*").c_str(), &fileinfo)) != -1)
	{
		do
		{
			//如果是目录,迭代之
			//如果不是,加入列表
			if ((fileinfo.attrib &  _A_SUBDIR))
			{
				if (strcmp(fileinfo.name, ".") != 0 && strcmp(fileinfo.name, "..") != 0)
					findPreDayPriceFile(p.assign(path).append("\\").append(fileinfo.name), files, strdsc);
			}
			else
			{
				string fllfilename = string(fileinfo.name);
				string::size_type idx = fllfilename.find(strdsc);
				if (idx != string::npos)
				{
					files.push_back(p.assign(path).append("\\").append(fileinfo.name));
					break;
				}
			}
		} while (_findnext(hFile, &fileinfo) == 0);
		_findclose(hFile);
	}
}

int  ReadPreDayPriceData()
{

	memset(&g_chPredayMdcsvFileName, 0, sizeof(TThostFtdcMdcsvFileName));
	char filePath[100] = { '\0' };
	time_t currtime = time(NULL);
	struct tm *mt = localtime(&currtime);
	sprintf(g_chPredayMdcsvFileName, "%s_market_data%d%02d%02d", g_chInstrumentIDFilestr/*可能为空，多线程*/, mt->tm_year + 1900, mt->tm_mon + 1, mt->tm_mday-1);
	string filepath = ".\\Data";
	vector<string> files;
	findPreDayPriceFile(filepath, files, g_chPredayMdcsvFileName);
	
	if (files.size() != 0)
	{
		string filename = files[0];
		ifstream in;

		MDTICKDATA structTickData;
		memset(&structTickData, 0, sizeof(structTickData));
		in.open(filename, std::fstream::in);
		if (!in)
		{			
			return 1;
		}

		in.seekg(0, in.end);
		int length = in.tellg();

		std::string line;
		//check '\n' from second character because the last character is '\n'
		int index = -2;
		int linenum = 0;
		int nCount = 0;
		while (length)
		{
			char c;
			in.seekg(index, in.end);
			in.get(c);
			//check '\n' from end to begin
			if (c == '\n')
			{
				//get the the last line when finding its corresponding beginning
				std::getline(in, line);
				//convet characters to int through istringstream class provided in c++
				std::istringstream iss(line);

				vector<string> results;
				while (iss.good())
				{
					string substr;
					getline(iss, substr, ',');
					results.push_back(substr);
				}


				int nLastPrice = atoi(results[2].c_str());



				iss >> structTickData.cUpdatetime >> structTickData.iMilitime >> nLastPrice >> structTickData.iVolume
					>> structTickData.dwOpenInterest >> structTickData.dwBidPrice1 >> structTickData.iBidVolume1
					>> structTickData.dwAskPrice1 >> structTickData.iAskVolume1;
				nCount++;
				g_mapPreDayPrice.insert(map<int, double>::value_type(50-nCount, nLastPrice));				
				if(nCount>= KD_PREDAY_LENGTH)
					break;
			}
			length--;
			index--;
		}
		in.close();
	}
}

//=========================================================================================================


//=================================================================================================================================


double GetPeriodLowestHighestPrice(vector<double> &vcPrice, int nNPeriod, double &max, double &min)
{
	double dwLowestPrice = 0;
	int i=0;
	max = min = vcPrice[0];


	for (i = 1; i < nNPeriod / 2; ++i) {

		if (vcPrice[i * 2] > vcPrice[i * 2 + 1]) {

			if (vcPrice[i * 2] > max)

				max = vcPrice[i * 2];

			if (vcPrice[i * 2 + 1] < min)

				min = vcPrice[i * 2 + 1];

		}
		else {

			if (vcPrice[i * 2 + 1] > max)

				max = vcPrice[i * 2 + 1];

			if (vcPrice[i * 2] < min)

				min = vcPrice[i * 2];
			
		}
	}


	if (nNPeriod % 2 != 0) {

		max = (max >= vcPrice[nNPeriod - 1]) ? max : vcPrice[nNPeriod - 1];
		min = (min <= vcPrice[nNPeriod - 1]) ? min : vcPrice[nNPeriod - 1];
	}

	return 0;
}


double CalRSV(vector<double> &vcPrice, int nNPeriod)
{
	double rsv = 0;
	double dwPrice = 0;
	double lowestPriceinPeriod = 0;
	double HighestPriceinPeriod = 0;
	dwPrice = vcPrice[nNPeriod - 1];
	GetPeriodLowestHighestPrice(vcPrice, nNPeriod, HighestPriceinPeriod, lowestPriceinPeriod);	
	rsv = ((dwPrice - lowestPriceinPeriod) / (HighestPriceinPeriod - lowestPriceinPeriod)) * 100;
	return  rsv;
}


//这个函数从vcPrice数组中，根据N,M1,M2, 计算出RSV,K,D的数组以提供后边新的计算，通过形参传递回去。  
//这个函数可以称作为初始化的函数
// N, M1, M2 为9:6:5的时候，  周期数为N+(M1-1)+(M2-1)=9+5+4=18  实际也就是vcPrice的大小 vcPrice.size()
// 需要计算的RSV个数为  nRSV = (M1-1)+(M2-1)+1 = 5+4+1 = 10个RSV
// 需要计算的nK = (M1-1) = 5
// 需要计算的nD = (M2-1) = 4
//
//
//
void InitKDArray(vector<double> &vcPrice, vector<double> &vcRSV, vector<double> &vcPreK, vector<double> &vcPreD
	, int nNPeriod, int nM1Period, int nM2Period)
{

	int nRSV = (nM1Period - 1) + (nM2Period - 1) + 1;
	int nK = (nM1Period - 1);
	int nD = (nM2Period - 1);

	for (int i = 0; i < nRSV; i++)
	{
		vcRSV.push_back(CalRSV(vcPrice, nNPeriod)); //初始化vcRSV 以便计算vcPreK
	}

	for (int i = 0; i < nK; i++)
	{
		vcPreK.push_back(vcRSV[i]);
	}
	vector<double> vcTempToD;
	for (int i = 0; i < nRSV - nK; i++)
	{
		double dwCur = 0;
		double dwK = vcRSV[nK + i];
		double sum = 0;
		for (int j = 0; j < nK; j++)
		{
			sum += vcPreK[j];
		}
		dwCur = (dwK + sum) / nM1Period;
		for (int l = 0; l < nK - 1; l++)
		{
			vcPreK[l] = vcPreK[l + 1];
		}
		vcPreK[nK - 1] = dwCur;
		vcTempToD.push_back(dwCur);

		if (i + 1 < nD)
		{
			continue;
		}
		else if (i + 1 == nD)
		{

			for (int m = 0; m < nD; m++)
			{
				vcPreD.push_back(vcTempToD[m]);
			}
		}
		else
		{
			double dwDCur = 0;
			double dwD = vcPreK[nK - 1];
			double sum = 0;
			for (int n = 0; n < nD; n++)
			{
				sum += vcPreD[n];
			}
			dwDCur = (dwD + sum) / nM2Period;
			for (int p = 0; p < nD - 1; p++)
			{
				vcPreD[p] = vcPreD[p + 1];
			}
			vcPreD[nD - 1] = dwDCur;
		}
	}
}

//这个函数提供给外部调用了, 调用之前一定要先InitKDArray，否则RSV,PreK,PreD都没有创建，没有办法计算
// vcPreK[nK-1], vcPreD[nD-1] 即为最终计算的最新的K,D值
void CalKD(vector<double> &vcPrice, vector<double> &vcRSV, vector<double> &vcPreK, vector<double> &vcPreD
	, int nNPeriod, int nM1Period, int nM2Period, double dwPrice)
{
	int nPrice = nNPeriod + (nM1Period - 1) + (nM2Period - 1);
	int nRSV = (nM1Period - 1) + (nM2Period - 1) + 1;
	int nK = (nM1Period - 1);
	int nD = (nM2Period - 1);

	for (int i = 0; i < nPrice -1; i++)
	{
		vcPrice[i] = vcPrice[i + 1];
	}
	vcPrice[nPrice - 1] = dwPrice;

	double dwRSV = CalRSV(vcPrice, nNPeriod);	
	for (int i = 0; i < nRSV - 1; i++)
	{
		vcRSV[i] = vcRSV[i + 1];
	}
	vcRSV[nRSV - 1] = dwRSV;

		
	double dwCur = 0;
	double dwK = vcRSV[nRSV-1];
	double sum = 0;
	for (int j = 0; j < nK; j++)
	{
		sum += vcPreK[j];
	}
	dwCur = (dwK + sum) / nM1Period;
	for (int l = 0; l < nK - 1; l++)
	{
		vcPreK[l] = vcPreK[l + 1];
	}
	vcPreK[nK - 1] = dwCur;


	double dwDCur = 0;
	double dwD = vcPreK[nK - 1];
	 sum = 0;
	for (int n = 0; n < nD; n++)
	{
		sum += vcPreD[n];
	}
	dwDCur = (dwD + sum) / nM2Period;
	for (int p = 0; p < nD - 1; p++)
	{
		vcPreD[p] = vcPreD[p + 1];
	}
	vcPreD[nD - 1] = dwDCur;

}


void GetKDValue(vector<double> &vcPreK, vector<double> &vcPreD, int nM1Period, int nM2Period, double &dwKValue, double &dwDValue)
{
	int nK = (nM1Period - 1);
	int nD = (nM2Period - 1);
	dwKValue = vcPreK[nK - 1];
	dwDValue = vcPreD[nD - 1];
}


unsigned int __stdcall CalculateStrategyThreadProc(void * data)
{

	double dwPreK = 0;
	double dwPreD = 0;

	ReadPreDayPriceData();

	int nCount = KD_PERIOID_N + (K_PERIOD_M1 - 1)  + (D_PERIOD_M2 - 1) ; //30:3:3  计算34周期Price

	vector<double> vcPrice;
	for (int i = 0; i < nCount; i++)
	{
		vcPrice.push_back(g_mapPreDayPrice[i]);
	}


	vector<double> vcRunningPreKValue;
	vector<double> vcRunningPreDValue;
	vector<double> vcRunningRSV;

	InitKDArray(vcPrice, vcRunningRSV, vcRunningPreKValue, vcRunningPreDValue, KD_PERIOID_N, K_PERIOD_M1, D_PERIOD_M2);
	
	for (int j = 0; j < KD_PREDAY_LENGTH - nCount; j++)
	{
		CalKD(vcPrice, vcRunningRSV, vcRunningPreKValue, vcRunningPreDValue, KD_PERIOID_N, K_PERIOD_M1, D_PERIOD_M2, g_mapPreDayPrice[nCount+j]);	
	
		double dwk = 0;
		double dwd = 0;
		GetKDValue(vcRunningPreKValue, vcRunningPreDValue, K_PERIOD_M1, D_PERIOD_M2, dwk, dwd);	

		if (dwk > dwd)
		{
			int j = 0;
		}

		//g_vcDWK.push_back(dwk);
		//g_vcDWD.push_back(dwd);
	}


	//theApp.GetMainWnd()->PostMessage(WM_READTESTDATA, 0, 0);

	WaitForSingleObject(CloseSignalReady, INFINITE);

	PARAMTOCHARTS paramTrans;
	memset(&paramTrans, 0, sizeof(PARAMTOCHARTS));
	paramTrans.strMessage = "CalculateStrategyThreadProc Thread terminate!";
	PostMessageToDlg(paramTrans);

	_endthreadex(0);
	return 0;
}
