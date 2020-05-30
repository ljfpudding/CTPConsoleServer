#include "stdafx.h"
#include "ThreadWorkLogic.h"
#include "traderapi.h"


CVolumeIndicatorMDApi  *pUserMdApi = NULL;
int nRequestID = 0;


void LoginActionPostMessage(int LoginType, int LoginCount, CVolumeIndicatorMDSpi *pSpi=NULL)
{
	//time_t currtime;
	//struct tm *mt = NULL;
	//time(&currtime);
	//mt = localtime(&currtime);
	//string curtimestr = asctime(localtime(&currtime));
	//string str = "";
	//if (LoginType == 1) //����Fire
	//{
	//	str = "Fire Login  start at" + curtimestr + "!";
	//}
	//else if (LoginType == 2) //�ڼ��Ͼ��۽׶ε�¼ֻ�ܻ�ȡһ�����ݣ�֮����Ҫ�ٴ�Login  8:55-8:59
	//{
	//	str = "Fire Login  at" + curtimestr + "Again!";
	//}
	//else //�յ�ConDisconnet �������µ�¼
	//{
	//	str = "ConDisconnect so,Fire Login  at" + curtimestr + "!";
	//}

	//ShowMessageToDlg(str);

	int nLoginResult = pSpi->ReqUserLogin();
	if (!nLoginResult)
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //����Fire
		//{
		//	str = "Fire Login  start at" + curtimestr + " Successful!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire Login  at" + curtimestr + " Again! Successful!";
		//}
		//else //�յ�ConDisconnet
		//{
		//	str = "ConDisconnect so,Fire Login  at" + curtimestr + "  Successful!";
		//}

		//ShowMessageToDlg(str);
	}
	else
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //����Fire
		//{
		//	str = "Fire Login Subscribe start at" + curtimestr + " Failed!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire Login Subscribe at" + curtimestr + " Again! Failed!";

		//}
		//else //�յ�ConDisconnet
		//{
		//	str = "ConDisconnect so,Fire Login Subscribe at" + curtimestr + " Failed!";
		//}

		//ShowMessageToDlg(str);
	}
}

void SubscribeActionPostMessage(int LoginType, int LoginCount, CVolumeIndicatorMDSpi *pSpi = NULL)
{
	//time_t currtime;
	//struct tm *mt = NULL;
	//time(&currtime);
	//mt = localtime(&currtime);
	//string curtimestr = asctime(localtime(&currtime));
	//string str = "";
	//if (LoginType == 1) //����Fire
	//{
	//	str = "Fire  Subscribe start at" + curtimestr + "!";
	//}
	//else if (LoginType == 2) //�ڼ��Ͼ��۽׶ε�¼ֻ�ܻ�ȡһ�����ݣ�֮����Ҫ�ٴ�Login  8:55-8:59
	//{
	//	str = "Fire  Subscribe at" + curtimestr + "Again!";
	//}
	//else //�յ�ConDisconnet �������µ�¼
	//{
	//	str = "ConDisconnect so,Fire  Subscribe at" + curtimestr + "!";
	//}

	//ShowMessageToDlg(str);

	int nLoginResult = pSpi->SubscribeMarketData();
	if (!nLoginResult)
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //����Fire
		//{
		//	str = "Fire  Subscribe start at" + curtimestr + " Successful!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire  Subscribe at" + curtimestr + " Again! Successful!";
		//}
		//else //�յ�ConDisconnet
		//{
		//	str = "ConDisconnect so,Fire  Subscribe at" + curtimestr + "  Successful!";
		//}

		//ShowMessageToDlg(str);
	}
	else
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //����Fire
		//{
		//	str = "Fire  Subscribe start at" + curtimestr + " Failed!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire  Subscribe at" + curtimestr + " Again! Failed!";

		//}
		//else //�յ�ConDisconnet
		//{
		//	str = "ConDisconnect so, Login Subscribe at" + curtimestr + " Failed!";
		//}

		//ShowMessageToDlg(str);
	}


}

void fireOnEightFiftyeightThirtySeconds(CVolumeIndicatorMDSpi *pSpi = NULL)
{
	time_t currtime;
	struct tm *mt = NULL;
	//while(true)
	//while (WaitForSingleObject(CloseSignalReady, 0) != WAIT_OBJECT_0)//����CloseSignalReady�źţ��߳��˳�
	//{   
	//	Sleep(1000);
	//	time(&currtime);
	//	mt= localtime(&currtime);
	//	if ((mt->tm_hour == 8) && (mt->tm_min == 59) && (mt->tm_sec > 45)
	//		|| (mt->tm_hour == 10) && (mt->tm_min == 29) && (mt->tm_sec > 45)
	//		|| (mt->tm_hour == 13) && (mt->tm_min == 29) && (mt->tm_sec > 45))
	//	//if ((mt->tm_hour == 23) && (mt->tm_min == 12) && (mt->tm_sec > 30))
	//	{
	//		LoginActionPostMessage(2, 0,pSpi);
	//		WaitForSingleObject(SubscribeSignalReady, INFINITE);
	//		SubscribeActionPostMessage(2, 0,pSpi);
	//		break;
	//	}
	//	else
	//	{
	//		if (nConDisconnect)
	//		{
	//			//�ڽ����ڼ��յ�Con Disconnect��Ϣ�� ��������
	//			if (mt->tm_hour == 9|| (mt->tm_hour == 10 && mt->tm_min<16)//9:00-10:15
	//				|| (mt->tm_hour==10 && mt->tm_min >29) ||(mt->tm_hour==11 && mt->tm_min<30) //10:30-11:30 
	//				||(mt->tm_hour == 13 && mt->tm_min >29) ||(mt->tm_hour == 14) //13:30-15:00
	//				||(mt->tm_hour>20)||(mt->tm_hour<23)) //ҹ��
	//			{

	//				LoginActionPostMessage(3, 0,pSpi);
	//				WaitForSingleObject(SubscribeSignalReady, INFINITE);
	//				SubscribeActionPostMessage(3, 0,pSpi);

	//			}//�ڽ���ʱ����

	//		}//nConDisconect �Ƿ����ӶϿ�
	//	}//������FireLoginSubscribe
	//}//ѭ����ʱ��Timer���ڿ���ǰ����������Login Subscribe����ֹ������.
}

unsigned int __stdcall fetchMDThreadProc(void * data)
{	
	
	string g_chFrontMdaddr = getConfig("config", "FrontMdAddr");
	pUserMdApi = new CVolumeIndicatorMDApi;		
	pUserMdApi->CreateFtdcMdApi(".\\liu\\",true,true);


	CVolumeIndicatorMDSpi ash(pUserMdApi);
	pUserMdApi->RegisterSpi(&ash);
	pUserMdApi->RegisterFront(const_cast<char *>(g_chFrontMdaddr.c_str()));

	

	if (::WaitForSingleObject(hMDThreadToStartSignalReady, 1000 * 60*10) == WAIT_TIMEOUT)//��ʱһ���ӣ���Է�����û�п������
	{
		string strCurtime;
		GetCurTimeStr(strCurtime);
		LOG("102 %s: \fetchMDThreadProc , hMDThreadToStartSignalReady WAIT_TIMEOUT  \n", strCurtime.c_str());

		WaitForSingleObject(CloseSignalReady, INFINITE);

		pUserMdApi->Release();
		_endthreadex(0);
		return 0;
	}


	pUserMdApi->Init();

	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("7 %s: \fetchMDThreadProc , pUserMdApi->Init()\n",strCurtime.c_str());

	WaitForSingleObject(LoginSignalReady, INFINITE);
	LoginActionPostMessage(1, 0,&ash);

	WaitForSingleObject(SubscribeSignalReady, INFINITE);
	SubscribeActionPostMessage(1, 0,&ash);

	//fireOnEightFiftyeightThirtySeconds(&ash);

	WaitForSingleObject(CloseSignalReady, INFINITE);
	pUserMdApi->Release();


	_endthreadex(0);

	return 0;

}

void writeCSVfile()
{
	string strpath = string(targetpath);
	BOOL isPath = false;	
	
	if (strpath=="")
		isPath = false;
	else
		isPath = true;

	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("12 %s:  \writeCSVfile  start\n", strCurtime.c_str());

	for (int i = 0; i < g_vcInstrumentIDFilterStr.size(); i++)
	{
		memset(&m_chMdcsvFileName, 0, sizeof(TThostFtdcMdcsvFileName));
		char filePath[100] = { '\0' };
		
		/*time_t currtime = time(NULL);
		struct tm *mt = localtime(&currtime);*/

		time_t nowtime;
		nowtime = time(NULL); //��ȡ����ʱ��  		
		struct tm local;
		localtime_s(&local, &nowtime);  //��ȡ��ǰϵͳʱ��  	


		if (g_vcInstrumentIDFilterStr[i].empty())
		{
			string strCurtime;
			GetCurTimeStr(strCurtime);
			LOG("13 %s:  \g_vcInstrumentIDFilterStr  empty\n", strCurtime.c_str());
			continue;
		}
			

		if(isPath)
			sprintf_s(m_chMdcsvFileName, "%s\%s_%d%02d%02d.csv",strpath.c_str(), g_vcInstrumentIDFilterStr[i].c_str(), local.tm_year + 1900, local.tm_mon + 1, local.tm_mday);
		else
			sprintf_s(m_chMdcsvFileName, "%s_%d%02d%02d.csv", g_vcInstrumentIDFilterStr[i].c_str(), local.tm_year + 1900, local.tm_mon + 1, local.tm_mday);
		


		std::ofstream outFile;
		outFile.open(m_chMdcsvFileName, std::ios::_Noreplace); // �¿��ļ�

		if (outFile.is_open())
		{
			map<string, string>::iterator itor;
			itor = g_mapSHFEInstrument.find(g_vcInstrumentIDFilterStr[i]);
			if (itor != g_mapSHFEInstrument.end())//SHFE �Ϻ���Լ 5������
			{
				outFile
					<< "��Լ����" << ","
					//<<"������"<<","
					//<< "�ϴν����" << ","
					//<< "��ֲ���" << ","
					//<< "��ͣ���" << ","
					//<< "��ͣ���" << ","
					//<< "����" << ","
					//<< "��߼�" << ","
					//<< "��ͼ�" << ","
					<< "����޸�ʱ��" << ","
					<< "����޸ĺ���" << ","
					<< "���¼�" << ","
					<< "����" << ","
					//<< "�ɽ����" << ","
					<< "�ֲ���" << ","
					//<< "������" << ","
					//<< "���ν����" << ","
					<< "�����һ" << ","
					<< "������һ" << ","
					<< "������һ" << ","
					<< "������һ" << ","
					//<< "����" << ","
					//<< "����" << ","
					//<< "����"
					<< "����۶�" << ","
					<< "��������" << ","
					<< "�����۶�" << ","
					<< "��������" << ","

					<< "�������" << ","
					<< "��������" << ","
					<< "��������" << ","
					<< "��������" << ","


					<< "�������" << ","
					<< "��������" << ","
					<< "��������" << ","
					<< "��������" << ","

					<< "�������" << ","
					<< "��������" << ","
					<< "��������" << ","
					<< "��������" << std::endl;
			}
			else
			{
				outFile
					<< "��Լ����" << ","
					//<<"������"<<","
					//<< "�ϴν����" << ","
					//<< "��ֲ���" << ","
					//<< "��ͣ���" << ","
					//<< "��ͣ���" << ","
					//<< "����" << ","
					//<< "��߼�" << ","
					//<< "��ͼ�" << ","
					<< "����޸�ʱ��" << ","
					<< "����޸ĺ���" << ","
					<< "���¼�" << ","
					<< "����" << ","
					//<< "�ɽ����" << ","
					<< "�ֲ���" << ","
					//<< "������" << ","
					//<< "���ν����" << ","
					<< "�����һ" << ","
					<< "������һ" << ","
					<< "������һ" << ","
					<< "������һ" //<< ","
							  //<< "����" << ","
							  //<< "����" << ","
							  //<< "����"
					<< std::endl;
			}

			outFile.close();
			
		}
		else
		{

		}

		gmap_FilepathInstrument.insert(pair<string, string>(g_vcInstrumentIDFilterStr[i], string(m_chMdcsvFileName)));

	}
//	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("14 %s: \writeCSVfile  end\n", strCurtime.c_str());
}

/*
void writePankouDatatoCSVFile()
{

	std::ofstream outPankouFile;
	outPankouFile.open(m_chMdPankouFileName, std::ios::app); // �ļ�׷��д�� 

	list<struct CMDPankoudata>::iterator it;

	for (it = listPankou.begin(); it != listPankou.end(); it++)
	{
		outPankouFile
			<< (*it).dwPreSettlementPrice << "," //�ϴν����
			<< (*it).dwPreOpenInterest << ","  //��ֲ���
			<< (*it).dwUpperLimitPrice << "," //��ͣ���
			<< (*it).dwLowerLimitPrice << "," //��ͣ���
			<< (*it).dwOpenPrice << ","  //����
			<< (*it).dwHighestPrice << "," //��߼�
			<< (*it).dwLowestPrice//��ͼ�
			<< std::endl;
	}

	outPankouFile.close();

}
*/

void writeTickDataCSVFile()
{
	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("15 %s: \writeTickDataCSVFile  start\n", strCurtime.c_str());
	while (WaitForSingleObject(CloseSignalReady, 0) != WAIT_OBJECT_0)//����CloseSignalReady�źţ��߳��˳�
	{		
		map<string, string>::iterator itor;
		struct CMDTickdata structTickData;
		while (tickWriteDataQueue.try_dequeue(structTickData))
		{
			itor = gmap_FilepathInstrument.find(string(structTickData.cInstrumentID));
			if (itor != gmap_FilepathInstrument.end())
			{

				map<string, string>::iterator itorshfe;
				itorshfe = g_mapSHFEInstrument.find(string(structTickData.cInstrumentID));
				if (itorshfe != g_mapSHFEInstrument.end())
				{
					std::ofstream outFile;
					outFile.open(itor->second.c_str(), std::ios::app); // �ļ�׷��д�� 

					if (outFile.is_open())
					{
						outFile << structTickData.cInstrumentID << ","
							<< structTickData.cUpdatetime << ","     //����޸�ʱ��
							<< structTickData.iMilitime << ","  //����
							<< structTickData.dwLastPrice << ","   //���¼�
							<< structTickData.iVolume << ","  //����
							<< structTickData.dwOpenInterest << ","  //�ֲ���
							<< structTickData.dwBidPrice1 << ","    //��һ��
							<< structTickData.iBidVolume1 << ","   //��һ��
							<< structTickData.dwAskPrice1 << ","   //��һ��
							<< structTickData.iAskVolume1 << ","     //��һ��

							<< structTickData.dwBidPrice2 << ","    //�����
							<< structTickData.iBidVolume2 << ","   //�����
							<< structTickData.dwAskPrice2 << ","   //������
							<< structTickData.iAskVolume2 << ","     //������

							<< structTickData.dwBidPrice3 << ","    //������
							<< structTickData.iBidVolume3 << ","   //������
							<< structTickData.dwAskPrice3 << ","   //������
							<< structTickData.iAskVolume3 << ","     //������

							<< structTickData.dwBidPrice4 << ","    //���ļ�
							<< structTickData.iBidVolume4 << ","   //������
							<< structTickData.dwAskPrice4 << ","   //���ļ�
							<< structTickData.iAskVolume4 << ","     //������

							<< structTickData.dwBidPrice5 << ","    //�����
							<< structTickData.iBidVolume5 << ","   //������
							<< structTickData.dwAskPrice5 << ","   //�����
							<< structTickData.iAskVolume5       //������
							<< std::endl;
						outFile.close();

					}
					else
					{


					}



				}
				else
				{
					std::ofstream outFile;
					outFile.open(itor->second.c_str(), std::ios::app); // �ļ�׷��д�� 


					if (outFile.is_open())
					{
						outFile << structTickData.cInstrumentID << ","
							<< structTickData.cUpdatetime << ","     //����޸�ʱ��
							<< structTickData.iMilitime << ","  //����
							<< structTickData.dwLastPrice << ","   //���¼�
							<< structTickData.iVolume << ","  //����
							<< structTickData.dwOpenInterest << ","  //�ֲ���
							<< structTickData.dwBidPrice1 << ","    //��һ��
							<< structTickData.iBidVolume1 << ","   //��һ��
							<< structTickData.dwAskPrice1 << ","   //��һ��
							<< structTickData.iAskVolume1       //��һ��
							<< std::endl;
						outFile.close();

					}
					else
					{



					}


				}
			}
		}
	}
	//string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("16 %s: \writeTickDataCSVFile  end\n", strCurtime.c_str());
}

void writeTickDatatoCSVFile()
{
	int flag = 0;
	int nCount = 0;
	int nMinute = 0;
	list<struct CMDTickdata>::iterator it;
	list<struct CMDTickdata>::iterator preit;
	//it = preit = listTickData.begin();
	while (!flag)
	{
		//if (nCount < 30)
		//{
		//	Sleep(1000);
		//	nCount++;
		//} 
		//else
		WaitForSingleObject(TickSignalReady, INFINITE);
		{
			std::ofstream outFile;
			outFile.open(m_chMdcsvFileName, std::ios::app); // �ļ�׷��д�� 	
			//for ( (it == preit)? it : it=preit; it != listTickData.end(); it++)
			{
					//<< pDepthMarketData->InstrumentID << "," //��Լ����
					//<< pDepthMarketData->TradingDay << ","  //������
					//<< pDepthMarketData->PreSettlementPrice << "," //�ϴν����
					//<< pDepthMarketData->PreOpenInterest << ","  //��ֲ���
					//<< pDepthMarketData->UpperLimitPrice << "," //��ͣ���
					//<< pDepthMarketData->LowerLimitPrice << "," //��ͣ���
					//<< pDepthMarketData->OpenPrice << ","  //����
					//<< pDepthMarketData->HighestPrice << "," //��߼�
					//<< pDepthMarketData->LowestPrice << ","  //��ͼ�

				outFile << structTickData.cUpdatetime << ","     //����޸�ʱ��
					<< structTickData.iMilitime<< ","  //����
																//<< pDepthMarketData->ExchangeID << ","
																//<< pDepthMarketData->ExchangeInstID << ","
					<< structTickData.dwLastPrice<< ","   //���¼�
					<< structTickData.iVolume<< ","  //����
														//<< pDepthMarketData->Turnover << "," //�ɽ���� 
					<< structTickData.dwOpenInterest<< ","  //�ֲ���
															  //<< pDepthMarketData->ClosePrice << ","  //������
															  //<< pDepthMarketData->SettlementPrice << "," //���ν����
															  //<< pDepthMarketData->PreClosePrice << ","
															  //<< pDepthMarketData->PreDelta << ","
															  //<< pDepthMarketData->CurrDelta << ","
					<< structTickData.dwBidPrice1<< ","    //��һ��
					<< structTickData.iBidVolume1<< ","   //��һ��
					<< structTickData.dwAskPrice1<< ","   //��һ��
					<< structTickData.iAskVolume1       //��һ��
																  //<< pDepthMarketData->BidPrice2 << ","
																  //<< pDepthMarketData->BidVolume2 << ","
																  //<< pDepthMarketData->AskPrice2 << ","
																  //<< pDepthMarketData->AskVolume2 << ","
																  //<< pDepthMarketData->BidPrice3 << ","
																  //<< pDepthMarketData->BidVolume3 << ","
																  //<< pDepthMarketData->AskPrice3 << ","
																  //<< pDepthMarketData->AskVolume3 << ","
																  //<< pDepthMarketData->BidPrice4 << ","
																  //<< pDepthMarketData->BidVolume4 << ","
																  //<< pDepthMarketData->AskPrice4 << ","
																  //<< pDepthMarketData->AskVolume4 << ","
																  //<< pDepthMarketData->BidPrice5 << ","
																  //<< pDepthMarketData->BidVolume5 << ","
																  //<< pDepthMarketData->AskPrice5 << ","
																  //<< pDepthMarketData->AskVolume5 << ","
																  //<< pDepthMarketData->AveragePrice << ","
																  //<< pDepthMarketData->ActionDay
					//<< volume_delta << ","
					//<< open_interest_delta << ","
					//<< m_tick_type_str_dict[tick_type_dict[tick_type_key_enum::TICKTYPE]] + m_color_type_str_dict[tick_type_dict[tick_type_key_enum::TICKCOLOR]]
					<< std::endl;
			}
			preit = it;
			nCount = 0;
			//nMinute++;
			outFile.close();
			//if (nMinute > 3)
				//break;
		}
	}

	




	{

/*


		if (pDepthMarketData && m_preDepthMarketData.LastPrice != 0)
		{
			// ������tick֮��Ĳ�ֵ
			//cout << "Volume" << pDepthMarketData->Volume << "PreVolume" << m_preDepthMarketData.Volume << endl;
			//cout << "OpenInterest" << pDepthMarketData->OpenInterest << "PreOpenInterest" << m_preDepthMarketData.OpenInterest << endl;
			double ask_price_delta = m_preDepthMarketData.AskPrice1 - pDepthMarketData->AskPrice1;
			int ask_volume_delta = m_preDepthMarketData.AskVolume1 - pDepthMarketData->AskVolume1;
			double	bid_price_delta = m_preDepthMarketData.BidPrice1 - pDepthMarketData->BidPrice1;
			int bid_volume_delta = m_preDepthMarketData.BidVolume1 - pDepthMarketData->BidVolume1;
			double last_price_delta = m_preDepthMarketData.LastPrice - pDepthMarketData->LastPrice;
			int volume_delta = pDepthMarketData->Volume - m_preDepthMarketData.Volume;
			int open_interest_delta = int(pDepthMarketData->OpenInterest - m_preDepthMarketData.OpenInterest);

			//����������ʾ�ַ���
			string ask_price_delta_str = get_delta_str(m_preDepthMarketData.AskPrice1, pDepthMarketData->AskPrice1);
			string	ask_volume_delta_str = get_delta_str(m_preDepthMarketData.AskVolume1, pDepthMarketData->AskVolume1);
			string bid_price_delta_str = get_delta_str(m_preDepthMarketData.BidPrice1, pDepthMarketData->BidPrice1);
			string bid_volume_delta_str = get_delta_str(m_preDepthMarketData.BidVolume1, pDepthMarketData->BidVolume1);
			string last_price_delta_str = get_delta_str(m_preDepthMarketData.LastPrice, pDepthMarketData->LastPrice);

			//���ask����bid�۸�Ա���һ��tick�������˱仯����ʾ�۸�仯����
			if (ask_price_delta != 0)
				ask_volume_delta_str = "";
			if (bid_price_delta != 0)
				bid_volume_delta_str = "";

			//input1 ���㶩������ask��Χ�ڳɽ�������bid��Χ�ڳɽ�
			order_forward_enum	order_forward = get_order_forward(pDepthMarketData->LastPrice,
				pDepthMarketData->AskPrice1, pDepthMarketData->BidPrice1,
				m_preDepthMarketData.LastPrice, m_preDepthMarketData.AskPrice1, m_preDepthMarketData.BidPrice1);

			//input2 �����λ�仯����
			open_interest_delta_forward_enum open_interest_delta_forward = get_open_interest_delta_forward(open_interest_delta,
				volume_delta);

			//f(input1, input2) = output1 ���ݳɽ�����Ͳ�λ�仯��������tick������
			TICK_TYPE tick_type_dict = m_tick_type_dict[open_interest_delta_forward][order_forward];

			if (open_interest_delta_forward != open_interest_delta_forward_enum::NONE)
			{	//# �����ر���
				//cout << "Ask\t" << pDepthMarketData->AskPrice1 << ask_price_delta_str << "\t" << pDepthMarketData->AskVolume1
				//	<< ask_volume_delta_str << "\tBid\t" << pDepthMarketData->BidPrice1 << bid_price_delta_str << "\t" <<
				//	pDepthMarketData->BidVolume1 << bid_volume_delta_str << endl;

				//cout << pDepthMarketData->UpdateTime << "." << pDepthMarketData->UpdateMillisec
				//	<< "\t" << pDepthMarketData->LastPrice << last_price_delta_str
				//	<< "\t�ɽ� " << volume_delta
				//	<< "\t���� " << open_interest_delta << endl;

				//cout << m_tick_type_str_dict[tick_type_dict[tick_type_key_enum::TICKTYPE]].c_str()
				//	<< "\t" << m_color_type_str_dict[tick_type_dict[tick_type_key_enum::TICKCOLOR]].c_str() << endl;

				//cout << "--------------------------------------" << endl;
			}

			std::ofstream outFile;
			outFile.open(m_chMdcsvFileName, std::ios::app); // �ļ�׷��д�� 
			outFile
				//<< pDepthMarketData->InstrumentID << "," //��Լ����
				//<< pDepthMarketData->TradingDay << ","  //������
				//<< pDepthMarketData->PreSettlementPrice << "," //�ϴν����
				//<< pDepthMarketData->PreOpenInterest << ","  //��ֲ���
				//<< pDepthMarketData->UpperLimitPrice << "," //��ͣ���
				//<< pDepthMarketData->LowerLimitPrice << "," //��ͣ���
				//<< pDepthMarketData->OpenPrice << ","  //����
				//<< pDepthMarketData->HighestPrice << "," //��߼�
				//<< pDepthMarketData->LowestPrice << ","  //��ͼ�
				<< pDepthMarketData->UpdateTime << ","     //����޸�ʱ��
				<< pDepthMarketData->UpdateMillisec << ","  //����
															//<< pDepthMarketData->ExchangeID << ","
															//<< pDepthMarketData->ExchangeInstID << ","
				<< pDepthMarketData->LastPrice << ","   //���¼�
				<< pDepthMarketData->Volume << ","  //����
													//<< pDepthMarketData->Turnover << "," //�ɽ���� 
				<< pDepthMarketData->OpenInterest << ","  //�ֲ���
														  //<< pDepthMarketData->ClosePrice << ","  //������
														  //<< pDepthMarketData->SettlementPrice << "," //���ν����
														  //<< pDepthMarketData->PreClosePrice << ","
														  //<< pDepthMarketData->PreDelta << ","
														  //<< pDepthMarketData->CurrDelta << ","
				<< pDepthMarketData->BidPrice1 << ","    //��һ��
				<< pDepthMarketData->BidVolume1 << ","   //��һ��
				<< pDepthMarketData->AskPrice1 << ","   //��һ��
				<< pDepthMarketData->AskVolume1 << ","        //��һ��
															  //<< pDepthMarketData->BidPrice2 << ","
															  //<< pDepthMarketData->BidVolume2 << ","
															  //<< pDepthMarketData->AskPrice2 << ","
															  //<< pDepthMarketData->AskVolume2 << ","
															  //<< pDepthMarketData->BidPrice3 << ","
															  //<< pDepthMarketData->BidVolume3 << ","
															  //<< pDepthMarketData->AskPrice3 << ","
															  //<< pDepthMarketData->AskVolume3 << ","
															  //<< pDepthMarketData->BidPrice4 << ","
															  //<< pDepthMarketData->BidVolume4 << ","
															  //<< pDepthMarketData->AskPrice4 << ","
															  //<< pDepthMarketData->AskVolume4 << ","
															  //<< pDepthMarketData->BidPrice5 << ","
															  //<< pDepthMarketData->BidVolume5 << ","
															  //<< pDepthMarketData->AskPrice5 << ","
															  //<< pDepthMarketData->AskVolume5 << ","
															  //<< pDepthMarketData->AveragePrice << ","
															  //<< pDepthMarketData->ActionDay
				<< volume_delta << ","
				<< open_interest_delta << ","
				<< m_tick_type_str_dict[tick_type_dict[tick_type_key_enum::TICKTYPE]] + m_color_type_str_dict[tick_type_dict[tick_type_key_enum::TICKCOLOR]]
				<< std::endl;
		



		}
		else
		{
			printf("Null depthMarketdata\n");
		}

		memcpy(&m_preDepthMarketData, pDepthMarketData, sizeof(m_preDepthMarketData));


		*/

	}




}

unsigned int __stdcall writeDataThreadProc(void * data)
{
	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("11 %s: \writeDataThreadProc  start\n",strCurtime.c_str());
	if (::WaitForSingleObject(writeFileNameSignalReady, 1000 * 60 * 10) == WAIT_TIMEOUT)//��ʱ�����ӣ���Է�����û�п������
	{
		string strCurtime;
		GetCurTimeStr(strCurtime);
		LOG("103 %s: \writeDataThreadProc writeFileNameSignalReady WAIT_TIMEOUT \n", strCurtime.c_str());

		WaitForSingleObject(CloseSignalReady, INFINITE);
		_endthreadex(0);
		return 0;
	}


	writeCSVfile();

	writeTickDataCSVFile();

	/*
	std::ofstream outFile;
	outFile.open(m_chMdcsvFileName, std::ios::app); // �ļ�׷��д�� 	
	while (true)
	{		
		Sleep(50);
		//writeTickDataCSVFile();
		struct CMDTickdata structTickData;
		while (tickWriteDataQueue.try_dequeue(structTickData))
		{
			outFile << structTickData.cUpdatetime << ","     //����޸�ʱ��
				<< structTickData.iMilitime << ","  //����
				<< structTickData.dwLastPrice << ","   //���¼�
				<< structTickData.iVolume << ","  //����
				<< structTickData.dwOpenInterest << ","  //�ֲ���
				<< structTickData.dwBidPrice1 << ","    //��һ��
				<< structTickData.iBidVolume1 << ","   //��һ��
				<< structTickData.dwAskPrice1 << ","   //��һ��
				<< structTickData.iAskVolume1       //��һ��
				<< std::endl;
		}
	}
	outFile.close();

	*/


	_endthreadex(0);
	return 0;
}

unsigned int __stdcall waitForConDisconnectThreadProc(void * data)
{
	WaitForSingleObject(CloseSignalReady, INFINITE);
		//nConDisconnect = 1;


	_endthreadex(0);
	return 0;

}





unsigned int __stdcall CalculateAndAnalysisThreadProc(void * data)
{

	//init_tick_type_dict();
	//init_tick_type_str_dict();
	//init_handicap_dict();

	MDTICKDATA preStructTickData;
	memset(&preStructTickData, 0, sizeof(preStructTickData));

	//preStructTickData = ���Ͽ��̶�ȡ�������̵����һ������; �м���Ϣʱ����ȡ��һ�ε����һ������

	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("17 %s:  \CalculateAndAnalysisThreadProc  start\n", strCurtime.c_str());
	if (::WaitForSingleObject(ReceiveDepDataSignalReady, 1000 * 60*10) == WAIT_TIMEOUT)//��ʱһ���ӣ���Է�����û�п������
	{
		LOG("107  \CalculateAndAnalysisThreadProc ReceiveDepDataSignalReady WAIT_TIMEOUT\n");
		WaitForSingleObject(CloseSignalReady, INFINITE);
		_endthreadex(0);
		return 0;
	}

	//string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("18 %s:  \CalculateAndAnalysisThreadProc  start to copy queue to write queue\n", strCurtime.c_str());
	while (WaitForSingleObject(CloseSignalReady, 0)!= WAIT_OBJECT_0)//����CloseSignalReady�źţ��߳��˳�
	{		
		MDTICKDATA	structTickData;
		while (tickDataQueue.try_dequeue(structTickData))
		{
			//<< structTickData.cUpdatetime << ","     //����޸�ʱ��
				//<< structTickData.iMilitime << ","  //����
				//<<  << ","   //���¼�
				//<< structTickData.iVolume << ","  //����
				//<< structTickData.dwOpenInterest << ","  //�ֲ���				
				//<< structTickData.iBidVolume1 << ","   //��һ��				
				//<< structTickData.iAskVolume1       //��һ��
			
			/*
			�׷������������ҷ��ͱ����Ƕ��ַ�
			�࿪���׷���ͷ���֣�����10�ֶ൥�����ַ����ҷ�����8�ֿյ�����������2�ֶ൥��˫�ֲ߳�����16��
			��ƽ���׷���ͷƽ�֣�����10�ֶ൥�����ַ����ҷ�����8�ֿյ�����������2�ֶ൥��˫�ֲּ߳���16��
			�տ����׷���ͷ���֣�����10�ֿյ������ַ����ҷ�����2�ֶ൥����������8�ֿյ���˫�ֲ߳�����4��
			��ƽ���׷���ͷƽ�֣�����10�ֿյ������ַ����ҷ�����2�ֶ൥����������8�ֿյ���˫�ֲּ߳���4��
			*/
			//����ÿһTICK���ۼƶ൥�ֲ�������յ��ֲ�����
			/*	int nLongVolumeNum = 0;
			int nShortVolumeNum = 0;
			order_forward_enum tickorder = get_order_forward(structTickData.dwLastPrice, structTickData.dwAskPrice1, structTickData.dwBidPrice1, preStructTickData.dwLastPrice, preStructTickData.dwAskPrice1, preStructTickData.dwBidPrice1);
						 int volume_delta = structTickData.iVolume - preStructTickData.iVolume;
			 int open_interest_delta = int(structTickData.dwOpenInterest - preStructTickData.dwOpenInterest);
						 open_interest_delta_forward_enum local_open_interest_delta_forward;
			 if (open_interest_delta == 0 && volume_delta == 0)
				 local_open_interest_delta_forward = open_interest_delta_forward_enum::NONE;
			 else if (open_interest_delta == 0 && volume_delta > 0)
				 local_open_interest_delta_forward = open_interest_delta_forward_enum::EXCHANGE;
			 else if (open_interest_delta > 0)
			 {
				 if (volume_delta - open_interest_delta == 0)
				 {
					 local_open_interest_delta_forward = open_interest_delta_forward_enum::OPENFWDOUBLE;
					 nLongVolumeNum += volume_delta;
					 nShortVolumeNum += volume_delta;
				 }
				 else
				 {
					 local_open_interest_delta_forward = open_interest_delta_forward_enum::OPEN;
					 if (tickorder == order_forward_enum::UP) //�࿪=�տ�+��ƽ, �ֲ�������;
					 {
						 nLongVolumeNum += volume_delta;
						 nShortVolumeNum += open_interest_delta;
					 }
					 else if (tickorder == order_forward_enum::DOWN) //�տ�= �࿪+��ƽ, �ֲ�������;
					 {
						 nShortVolumeNum += volume_delta;
						 nLongVolumeNum += open_interest_delta;
					 }
					 else if(tickorder == order_forward_enum::TICKMIDDLE)
					 {

					 }
				 }

			 }
			 else if (open_interest_delta < 0)
			 {
				 if (open_interest_delta + volume_delta == 0)
				 {
					 local_open_interest_delta_forward = open_interest_delta_forward_enum::CLOSEFWDOUBLE;
					 nLongVolumeNum -= volume_delta;
					 nShortVolumeNum -= volume_delta;
				 }
				 else
				 {
					 local_open_interest_delta_forward = open_interest_delta_forward_enum::CLOSE;
					 if (tickorder == order_forward_enum::UP) //��ƽ = ��ƽ + �࿪
					 {
						 nLongVolumeNum -= volume_delta;
						 nShortVolumeNum -= open_interest_delta;
					 }
					 else if (tickorder == order_forward_enum::DOWN) //
					 {
						 nShortVolumeNum -= volume_delta;
						 nLongVolumeNum -= open_interest_delta;
					 }
					 else if (tickorder == order_forward_enum::TICKMIDDLE)
					 {

					 }
				 }
			 }

			 if (preStructTickData.iVolume != 0)
			 {
				 PARAMTOCHARTS paramTrans;
				 memset(&paramTrans, 0, sizeof(PARAMTOCHARTS));
				 paramTrans.dwprice = structTickData.dwLastPrice;
				 paramTrans.nGap = nLongVolumeNum - nShortVolumeNum;
				 paramTrans.nIndex = structTickData.nIndex;
				 PostMessageToDlg(paramTrans);
			 }
			 memcpy(&preStructTickData, &structTickData, sizeof(MDTICKDATA)); */
			tickWriteDataQueue.enqueue(structTickData);

			std::lock_guard<spin_mutex> lock(sm);			
			map<string, queue<MDTICKDATA>>::iterator itor;
			itor = g_mapPrice.find(string(structTickData.cInstrumentID));
			if (itor != g_mapPrice.end())
			{
				itor->second.push(structTickData);
			}
			else
			{
				queue<MDTICKDATA> vcTickDataQueue;
				vcTickDataQueue.push(structTickData);
				g_mapPrice.insert(map<string, queue<MDTICKDATA>>::value_type(structTickData.cInstrumentID, vcTickDataQueue));
			}
		}
	}

//	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("19 %s: \CalculateAndAnalysisThreadProc  end\n", strCurtime.c_str());

	_endthreadex(0);
	return 0;

}


//======================================================

CSimpleHandler::CSimpleHandler(CThostFtdcTraderApi *pUserApi) :m_pUserApi(pUserApi)
{


}


void CSimpleHandler::OnFrontConnected()
{
	SetEvent(hTraderConnectSignalReady);

}

void CSimpleHandler::OnFrontDisconnected(int nReason)
{
	//LOG("\tnReason = %d\n", nReason);
	SetEvent(CloseSignalReady);
}

void CSimpleHandler::ReqAuthenticate()
{
	{
		
		strcpy_s(g_chAuthCode, getConfig("config", "AuthCode").c_str());
		strcpy_s(g_chAppID, getConfig("config", "AppID").c_str());
		strcpy_s(g_chBrokerID, getConfig("config", "BrokerID").c_str());
		strcpy_s(g_chUserID, getConfig("config", "UserID").c_str());
		strcpy_s(g_chPassword, getConfig("config", "Password").c_str());
		strcpy_s(g_chInvestorID, getConfig("config", "InvestorID").c_str());

		g_NewFrontID = 0;
		g_NewSessionID = 0;


		CThostFtdcReqAuthenticateField a = { 0 };
		strcpy_s(a.BrokerID, g_chBrokerID);
		strcpy_s(a.UserID, g_chUserID);
		strcpy_s(a.AuthCode, g_chAuthCode);
		strcpy_s(a.AppID, g_chAppID);
		int b = m_pUserApi->ReqAuthenticate(&a, 1);
		
	}

}

void CSimpleHandler::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo,
	int nRequestID, bool bIsLast)
{
	CTraderSpi::OnRspAuthenticate(pRspAuthenticateField, pRspInfo, nRequestID, bIsLast);
	SetEvent(hTraderAuthSignalReady);
	 
	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("4 %s: \CSimpleHandler OnRspAuthenticate, set hTraderAuthSignalReady \n", strCurtime.c_str());
}

void CSimpleHandler::RegisterFensUserInfo()
{
	CThostFtdcFensUserInfoField pFensUserInfo = { 0 };
	strcpy_s(pFensUserInfo.BrokerID, g_chBrokerID);
	strcpy_s(pFensUserInfo.UserID, g_chUserID);
	pFensUserInfo.LoginMode = THOST_FTDC_LM_Trade;
	m_pUserApi->RegisterFensUserInfo(&pFensUserInfo);
}

void CSimpleHandler::ReqUserLogin()
{

	CThostFtdcReqUserLoginField reqUserLogin = { 0 };
	strcpy_s(reqUserLogin.BrokerID, g_chBrokerID);
	strcpy_s(reqUserLogin.UserID, g_chUserID);
	strcpy_s(reqUserLogin.Password, g_chPassword);
	// ������½����
	m_pUserApi->ReqUserLogin(&reqUserLogin, nRequestID++);
}

void CSimpleHandler::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	//FrontID = pRspUserLogin->FrontID;
	//SessionID = pRspUserLogin->SessionID;
	CTraderSpi::OnRspUserLogin(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
	if (pRspInfo->ErrorID != 0)
	{		
		SetEvent(CloseSignalReady);
		string strCurtime;
		GetCurTimeStr(strCurtime);
		LOG("101 %s: \CSimpleHandler OnRspUserLogin,pRspInfo->ErrorID, set CloseSignalReady \n", strCurtime.c_str());
	}
	else
	{
		SetEvent(hTraderLoginSignalReady);

		string strCurtime;
		GetCurTimeStr(strCurtime);
		LOG("5 %s:  \CSimpleHandler OnRspUserLogin, set hTraderLoginSignalReady \n", strCurtime.c_str());

	}
	
}


void CSimpleHandler::ReqQryInstrument()
{
	/*SHFE, DCE, CZCE, */

	CThostFtdcQryInstrumentField a = { 0 };	
	strcpy_s(a.ExchangeID, g_chExchangeID);
	strcpy_s(a.InstrumentID, g_chInstrumentID);
	int b = m_pUserApi->ReqQryInstrument(&a, nRequestID++);
}


void CSimpleHandler::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if (pInstrument)
	{
		if (string(pInstrument->ExchangeID) != string("CFFEX"))//û�м����н�����Լ����ָ�ڻ�Ҫ��50�����ţ�����Ҳ�Ȳ���ѯ
		{

			string strInstruct = string(pInstrument->InstrumentID);
			int nInstrumentLength = strInstruct.length();
			if (nInstrumentLength < 10)
			{
				string strPre = strInstruct.substr(0, 3); //ǰ3���ַ���ΪSPC,SPD,STD,STG�� Ӧ��Ϊ��Ϻ�Լ�����Բ���ѯ
				string strPre2 = strInstruct.substr(0, 2);
				if (!(strPre == "SPC" || strPre == "SPD" 
					|| strPre == "STD" || strPre == "STG"
					|| strPre == "PRT" || strPre == "IPS"
					|| strPre2 == "SP"))
				{
					md_InstrumentID.push_back(pInstrument->InstrumentID);
					string strExchangeID = string(pInstrument->ExchangeID);
					if (strExchangeID == string("SHFE"))
					{
						g_mapSHFEInstrument.insert(pair<string, string>(strInstruct, strExchangeID));
					}					
				}
					
			}
		}			
	}

	if (bIsLast)
	{
		SetEvent(hMDThreadToStartSignalReady);

		string strCurtime;
		GetCurTimeStr(strCurtime);
		LOG("6 %s: \CSimpleHandler OnRspQryInstrument, set hMDThreadToStartSignalReady \n", strCurtime.c_str());
	}
}


void CSimpleHandler::ReqUserLogout()
{
	CThostFtdcUserLogoutField a = { 0 };
	strcpy_s(a.BrokerID, g_chBrokerID);
	strcpy_s(a.UserID, g_chUserID);
	m_pUserApi->ReqUserLogout(&a, nRequestID++);
}


void CSimpleHandler::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	//LOG("<OnRspUserLogout>\n");
	if (pUserLogout)
	{
		//LOG("\tBrokerID [%s]\n", pUserLogout->BrokerID);
		//LOG("\tUserID [%s]\n", pUserLogout->UserID);
	}
	if (pRspInfo)
	{
		//LOG("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		//LOG("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	//LOG("\tnRequestID [%d]\n", nRequestID);
	//LOG("\tbIsLast [%d]\n", bIsLast);
	//LOG("</OnRspUserLogout>\n");
	//pUserApi->Release();
	m_pUserApi->Release();
}

void CSimpleHandler::ReqSettlementInfoConfirm()
{
	CThostFtdcSettlementInfoConfirmField Confirm = { 0 };
	///���͹�˾����
	strcpy_s(Confirm.BrokerID, g_chBrokerID);
	///Ͷ���ߴ���
	strcpy_s(Confirm.InvestorID, g_chUserID);
	m_pUserApi->ReqSettlementInfoConfirm(&Confirm, nRequestID++);
}


///Ͷ���߽�����ȷ����Ӧ
void CSimpleHandler::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	CTraderSpi::OnRspSettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
	
}

///�û������������
void CSimpleHandler::ReqUserPasswordUpdate()
{
	string newpassword;
	//LOG("�������µ�¼���룺\n");
	cin >> newpassword;
	CThostFtdcUserPasswordUpdateField a = { 0 };
	strcpy_s(a.BrokerID, g_chBrokerID);
	strcpy_s(a.UserID, g_chUserID);
	strcpy_s(a.OldPassword, g_chPassword);
	strcpy_s(a.NewPassword, newpassword.c_str());
	int b = m_pUserApi->ReqUserPasswordUpdate(&a, nRequestID++);
	
}


///�û��������������Ӧ
void CSimpleHandler::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	CTraderSpi::OnRspUserPasswordUpdate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
	
}


///�ʽ��˻������������
void CSimpleHandler::ReqTradingAccountPasswordUpdate()
{
	string newpassword;
	//LOG("���������ʽ����룺\n");
	cin >> newpassword;
	CThostFtdcTradingAccountPasswordUpdateField a = { 0 };
	strcpy_s(a.BrokerID, g_chBrokerID);
	strcpy_s(a.AccountID, g_chInvestorID);
	strcpy_s(a.OldPassword, g_chPassword);
	strcpy_s(a.NewPassword, newpassword.c_str());
	strcpy_s(a.CurrencyID, "CNY");
	int b = m_pUserApi->ReqTradingAccountPasswordUpdate(&a, nRequestID++);
	
}


void CSimpleHandler::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	CTraderSpi::OnRspTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
	
}




unsigned int __stdcall TradeThreadProc(void * data)
{

	string g_chFrontaddr = getConfig("config", "FrontAddr");

	CTraderApi *pUserApi = new CTraderApi;
	pUserApi->CreateFtdcTraderApi("flow\\zl\\");
	////LOG(pUserApi->GetApiVersion());
	//cout << endl;
	CSimpleHandler sh(pUserApi);
	pUserApi->RegisterSpi(&sh);
	pUserApi->SubscribePrivateTopic(THOST_TERT_QUICK);
	pUserApi->SubscribePublicTopic(THOST_TERT_QUICK);
	pUserApi->RegisterFront(const_cast<char *>(g_chFrontaddr.c_str()));
	pUserApi->Init();

	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("3 %s:  \TradeThreadProc pUserApi->Init() \n", strCurtime.c_str());

	if (::WaitForSingleObject(hTraderConnectSignalReady, 1000 * 60*10) == WAIT_TIMEOUT)//��ʱһ���ӣ���Է�����û�п������
	{
		string strCurtime;
		GetCurTimeStr(strCurtime);
		LOG("100 %s: \TradeThreadProc hTraderConnectSignalReady WAIT_TIMEOUT \n", strCurtime.c_str());

		WaitForSingleObject(CloseSignalReady, INFINITE);

		pUserApi->Release();
		_endthreadex(0);
		return 0;
	}
	

	sh.ReqAuthenticate();
	WaitForSingleObject(hTraderAuthSignalReady, INFINITE);
	sh.ReqUserLogin();
	WaitForSingleObject(hTraderLoginSignalReady, INFINITE);

	sh.ReqQryInstrument();


	WaitForSingleObject(CloseSignalReady, INFINITE);
	pUserApi->Release();
	_endthreadex(0);
	return 0;

}


