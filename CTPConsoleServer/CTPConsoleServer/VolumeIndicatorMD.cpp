#include "stdafx.h"
#include "VolumeIndicatorMD.h"
#include "ThreadWorkLogic.h"

int CVolumeIndicatorMDSpi::m_nIndex = 0;

class CVolumeIndicatorMDApi;
CVolumeIndicatorMDSpi::CVolumeIndicatorMDSpi(CThostFtdcMdApi *pUserApi) : m_pUserMdApi(pUserApi) {

	memset(&m_preTickData, 0, sizeof(MDTICKDATA));
}


int CVolumeIndicatorMDSpi::ReqUserLogin()
{

	CThostFtdcReqUserLoginField reqUserLogin = { 0 };
	strcpy_s(reqUserLogin.BrokerID, getConfig("config", "BrokerID").c_str());
	strcpy_s(reqUserLogin.UserID, getConfig("config", "UserID").c_str());
	strcpy_s(reqUserLogin.Password, getConfig("config", "Password").c_str());
	for (int i = 0; i<3; i++)
	{
		int nResult = m_pUserMdApi->ReqUserLogin(&reqUserLogin, i);
		if (nResult != 0)
		{
			Sleep(200);
		}
		else
		{
			return 0;
		}
	}

	return 0;
	
}

int  CVolumeIndicatorMDSpi::SubscribeMarketData()
{

	int md_num = 0;

	char **ppInstrumentID = new char*[5000];
	for (int count1 = 0; count1 <= md_InstrumentID.size() / 500; count1++)
	{
		if (count1 < md_InstrumentID.size() / 500)
		{
			int a = 0;
			for (a; a < 500; a++)
			{
				ppInstrumentID[a] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
				md_num++;
			}
			int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, a);
			//LOG((result == 0) ? "订阅行情请求1......发送成功\n" : "订阅行情请求1......发送失败，错误序号=[%d]\n", result);
		}
		else if (count1 == md_InstrumentID.size() / 500)
		{
			int count2 = 0;
			for (count2; count2 < md_InstrumentID.size() % 500; count2++)
			{
				ppInstrumentID[count2] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
				md_num++;
			}
			int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, count2);
			//LOG((result == 0) ? "订阅行情请求2......发送成功\n" : "订阅行情请求2......发送失败，错误序号=[%d]\n", result);
		}
	}

	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("10 %s: \fetchMDThreadProc ,CVolumeIndicatorMDSpi SubscribeMarketData  \n", strCurtime.c_str());

/*


int md_num = 0;
//char *ppInstrumentID[] = { "ag1912" };			// 行情订阅列表
//int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, 1);
//*
char **ppInstrumentID = new char*[5000];
for (int count1 = 0; count1 <= md_InstrumentID.size() / 500; count1++)
{
if (count1 < md_InstrumentID.size() / 500)
{
int a = 0;
for (a; a < 500; a++)
{
ppInstrumentID[a] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
md_num++;
}
int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, a);
//LOG((result == 0) ? "订阅行情请求1......发送成功\n" : "订阅行情请求1......发送失败，错误序号=[%d]\n", result);
}
else if (count1 = md_InstrumentID.size() / 500)
{
int count2 = 0;
for (count2; count2 < md_InstrumentID.size() % 500; count2++)
{
ppInstrumentID[count2] = const_cast<char *>(md_InstrumentID.at(md_num).c_str());
md_num++;
}
int result = m_pUserMdApi->SubscribeMarketData(ppInstrumentID, count2);
//LOG((result == 0) ? "订阅行情请求2......发送成功\n" : "订阅行情请求2......发送失败，错误序号=[%d]\n", result);
}
}


*/

	return 0;
}


void CVolumeIndicatorMDSpi::OnFrontConnected()
{
	//ReqUserLogin();
	SetEvent(LoginSignalReady);
}


void CVolumeIndicatorMDSpi::OnFrontDisconnected(int nReason)
{	
	SetEvent(ConDisconnetSignalReady);
 }


void CVolumeIndicatorMDSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
		if (pRspInfo->ErrorID != 0) {
			exit(-1);
		}

		if (bIsLast && ( !pRspInfo->ErrorID ))
		{					
			if (_access(targetpath, 0) == -1)
			{
				_mkdir(targetpath);	
				string strCurtime;
				GetCurTimeStr(strCurtime);

				LOG("8 %s: \fetchMDThreadProc ,CVolumeIndicatorMDSpi OnRspUserLogin _mkdir(targetpath) [%s] \n", strCurtime.c_str(), targetpath);
			}
			SetEvent(SubscribeSignalReady);

			string strCurtime;
			GetCurTimeStr(strCurtime);
			LOG("9 %s: \fetchMDThreadProc ,CVolumeIndicatorMDSpi OnRspUserLogin SetEvent(SubscribeSignalReady) \n", strCurtime.c_str());
		}
}

void CVolumeIndicatorMDSpi::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	bool bResult = pRspInfo && (pRspInfo->ErrorID != 0);
	if (!bResult)
	{
		if (pSpecificInstrument != NULL)
		{
			strcpy_s(g_chInstrumentIDFilestr, pSpecificInstrument->InstrumentID);			
			g_vcInstrumentIDFilterStr.push_back(g_chInstrumentIDFilestr);
							
		}

		if (bIsLast)
		{			
			SetEvent(writeFileNameSignalReady);			
			SetEvent(ReceiveDepDataSignalReady);

			string strCurtime;
			GetCurTimeStr(strCurtime);
			LOG("10-a %s:  \fetchMDThreadProc ,CVolumeIndicatorMDSpi OnRspSubMarketData SetEvent(writeFileNameSignalReady) & SetEvent(ReceiveDepDataSignalReady); \n", strCurtime.c_str());
		}
	}
}

void CVolumeIndicatorMDSpi::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
{

	/*if (!m_bPankouData)
	{
		struct CMDPankoudata  structPankou;
		memset(&structPankou, 0, sizeof(struct CMDPankoudata));
		structPankou.dwPreSettlementPrice = pDepthMarketData->PreSettlementPrice;
		structPankou.dwPreOpenInterest = pDepthMarketData->PreOpenInterest;
		structPankou.dwUpperLimitPrice = pDepthMarketData->UpperLimitPrice;
		structPankou.dwLowerLimitPrice = pDepthMarketData->LowerLimitPrice;
		structPankou.dwOpenPrice = pDepthMarketData->OpenPrice;
		structPankou.dwHighestPrice = pDepthMarketData->HighestPrice;
		structPankou.dwLowestPrice = pDepthMarketData->LowestPrice;		
		listPankou.push_back(structPankou);
		m_bPankouData = true;

	}*/


 	if (pDepthMarketData)
	{
		/*if (pDepthMarketData->UpdateMillisec == m_preTickData.iMilitime && (m_preTickData.iVolume !=0)) //丢失数据了
		{
			if (m_preTickData.iMilitime == 0)
			{
				m_preTickData.iMilitime = 500;
			}
			else
			{
				m_preTickData.iMilitime = 0;
				strcpy_s(m_preTickData.cUpdatetime, pDepthMarketData->UpdateTime);
			}
			m_preTickData.nIndex = m_nIndex++;
			tickDataQueue.enqueue(m_preTickData);	

			PARAMTOCHARTS paramTrans;
			memset(&paramTrans, 0, sizeof(PARAMTOCHARTS));
			if(m_preTickData.iMilitime==0)
				paramTrans.strMessage = "Program Add a volume : 0";
			else
				paramTrans.strMessage = "Program Add a volume :500";			
			PostMessageToDlg(paramTrans);
		}*/

			memset(&structTickData, 0, sizeof(MDTICKDATA));
			strcpy_s(structTickData.cInstrumentID, pDepthMarketData->InstrumentID);
			strcpy_s(structTickData.cExchangeIDType, pDepthMarketData->ExchangeID);
			strcpy_s(structTickData.cUpdatetime, pDepthMarketData->UpdateTime);
			structTickData.iMilitime = pDepthMarketData->UpdateMillisec;
			structTickData.dwLastPrice = pDepthMarketData->LastPrice;
			structTickData.iVolume = pDepthMarketData->Volume;
			structTickData.dwOpenInterest = pDepthMarketData->OpenInterest;
			
			structTickData.dwBidPrice1 = pDepthMarketData->BidPrice1;
			structTickData.iBidVolume1 = pDepthMarketData->BidVolume1;
			structTickData.dwAskPrice1 = pDepthMarketData->AskPrice1;
			structTickData.iAskVolume1 = pDepthMarketData->AskVolume1;


			structTickData.dwBidPrice2 = pDepthMarketData->BidPrice2;
			structTickData.iBidVolume2 = pDepthMarketData->BidVolume2;
			structTickData.dwAskPrice2 = pDepthMarketData->AskPrice2;
			structTickData.iAskVolume2 = pDepthMarketData->AskVolume2;

			structTickData.dwBidPrice3 = pDepthMarketData->BidPrice3;
			structTickData.iBidVolume3 = pDepthMarketData->BidVolume3;
			structTickData.dwAskPrice3 = pDepthMarketData->AskPrice3;
			structTickData.iAskVolume3 = pDepthMarketData->AskVolume3;

			structTickData.dwBidPrice4 = pDepthMarketData->BidPrice4;
			structTickData.iBidVolume4 = pDepthMarketData->BidVolume4;
			structTickData.dwAskPrice4 = pDepthMarketData->AskPrice4;
			structTickData.iAskVolume4 = pDepthMarketData->AskVolume4;

			structTickData.dwBidPrice5 = pDepthMarketData->BidPrice5;
			structTickData.iBidVolume5 = pDepthMarketData->BidVolume5;
			structTickData.dwAskPrice5 = pDepthMarketData->AskPrice5;
			structTickData.iAskVolume5 = pDepthMarketData->AskVolume5;

			//structTickData.nIndex = m_nIndex++;
			tickDataQueue.enqueue(structTickData);
		//memcpy(&m_preTickData, &structTickData, sizeof(MDTICKDATA));

	
	}		
	
	/*if (pDepthMarketData->UpdateMillisec == 0)
	{

		PARAMTOCHARTS paramTrans;
		memset(&paramTrans, 0, sizeof(PARAMTOCHARTS));
		paramTrans.strMessage = "0";
		PostMessageToDlg(paramTrans);

	}
	else
	{
		PARAMTOCHARTS paramTrans;
		memset(&paramTrans, 0, sizeof(PARAMTOCHARTS));
		paramTrans.strMessage = "500";
		PostMessageToDlg(paramTrans);		
	}*/		
}








