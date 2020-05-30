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
	//if (LoginType == 1) //主动Fire
	//{
	//	str = "Fire Login  start at" + curtimestr + "!";
	//}
	//else if (LoginType == 2) //在集合竞价阶段登录只能获取一个数据，之后需要再次Login  8:55-8:59
	//{
	//	str = "Fire Login  at" + curtimestr + "Again!";
	//}
	//else //收到ConDisconnet 尝试重新登录
	//{
	//	str = "ConDisconnect so,Fire Login  at" + curtimestr + "!";
	//}

	//ShowMessageToDlg(str);

	int nLoginResult = pSpi->ReqUserLogin();
	if (!nLoginResult)
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //主动Fire
		//{
		//	str = "Fire Login  start at" + curtimestr + " Successful!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire Login  at" + curtimestr + " Again! Successful!";
		//}
		//else //收到ConDisconnet
		//{
		//	str = "ConDisconnect so,Fire Login  at" + curtimestr + "  Successful!";
		//}

		//ShowMessageToDlg(str);
	}
	else
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //主动Fire
		//{
		//	str = "Fire Login Subscribe start at" + curtimestr + " Failed!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire Login Subscribe at" + curtimestr + " Again! Failed!";

		//}
		//else //收到ConDisconnet
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
	//if (LoginType == 1) //主动Fire
	//{
	//	str = "Fire  Subscribe start at" + curtimestr + "!";
	//}
	//else if (LoginType == 2) //在集合竞价阶段登录只能获取一个数据，之后需要再次Login  8:55-8:59
	//{
	//	str = "Fire  Subscribe at" + curtimestr + "Again!";
	//}
	//else //收到ConDisconnet 尝试重新登录
	//{
	//	str = "ConDisconnect so,Fire  Subscribe at" + curtimestr + "!";
	//}

	//ShowMessageToDlg(str);

	int nLoginResult = pSpi->SubscribeMarketData();
	if (!nLoginResult)
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //主动Fire
		//{
		//	str = "Fire  Subscribe start at" + curtimestr + " Successful!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire  Subscribe at" + curtimestr + " Again! Successful!";
		//}
		//else //收到ConDisconnet
		//{
		//	str = "ConDisconnect so,Fire  Subscribe at" + curtimestr + "  Successful!";
		//}

		//ShowMessageToDlg(str);
	}
	else
	{
		//string curtimestr = asctime(localtime(&currtime));
		//string str = "";

		//if (LoginType == 1) //主动Fire
		//{
		//	str = "Fire  Subscribe start at" + curtimestr + " Failed!";
		//}
		//else if (LoginType == 2)
		//{
		//	str = "Fire  Subscribe at" + curtimestr + " Again! Failed!";

		//}
		//else //收到ConDisconnet
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
	//while (WaitForSingleObject(CloseSignalReady, 0) != WAIT_OBJECT_0)//设置CloseSignalReady信号，线程退出
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
	//			//在交易期间收到Con Disconnect消息， 尝试重连
	//			if (mt->tm_hour == 9|| (mt->tm_hour == 10 && mt->tm_min<16)//9:00-10:15
	//				|| (mt->tm_hour==10 && mt->tm_min >29) ||(mt->tm_hour==11 && mt->tm_min<30) //10:30-11:30 
	//				||(mt->tm_hour == 13 && mt->tm_min >29) ||(mt->tm_hour == 14) //13:30-15:00
	//				||(mt->tm_hour>20)||(mt->tm_hour<23)) //夜盘
	//			{

	//				LoginActionPostMessage(3, 0,pSpi);
	//				WaitForSingleObject(SubscribeSignalReady, INFINITE);
	//				SubscribeActionPostMessage(3, 0,pSpi);

	//			}//在交易时间内

	//		}//nConDisconect 是否连接断开
	//	}//非主动FireLoginSubscribe
	//}//循环，时间Timer，在开盘前几分钟主动Login Subscribe，防止丢数据.
}

unsigned int __stdcall fetchMDThreadProc(void * data)
{	
	
	string g_chFrontMdaddr = getConfig("config", "FrontMdAddr");
	pUserMdApi = new CVolumeIndicatorMDApi;		
	pUserMdApi->CreateFtdcMdApi(".\\liu\\",true,true);


	CVolumeIndicatorMDSpi ash(pUserMdApi);
	pUserMdApi->RegisterSpi(&ash);
	pUserMdApi->RegisterFront(const_cast<char *>(g_chFrontMdaddr.c_str()));

	

	if (::WaitForSingleObject(hMDThreadToStartSignalReady, 1000 * 60*10) == WAIT_TIMEOUT)//超时一分钟，针对服务器没有开的情况
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
		nowtime = time(NULL); //获取日历时间  		
		struct tm local;
		localtime_s(&local, &nowtime);  //获取当前系统时间  	


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
		outFile.open(m_chMdcsvFileName, std::ios::_Noreplace); // 新开文件

		if (outFile.is_open())
		{
			map<string, string>::iterator itor;
			itor = g_mapSHFEInstrument.find(g_vcInstrumentIDFilterStr[i]);
			if (itor != g_mapSHFEInstrument.end())//SHFE 上海合约 5档行情
			{
				outFile
					<< "合约代码" << ","
					//<<"交易日"<<","
					//<< "上次结算价" << ","
					//<< "昨持仓量" << ","
					//<< "涨停板价" << ","
					//<< "跌停板价" << ","
					//<< "今开盘" << ","
					//<< "最高价" << ","
					//<< "最低价" << ","
					<< "最后修改时间" << ","
					<< "最后修改毫秒" << ","
					<< "最新价" << ","
					<< "数量" << ","
					//<< "成交金额" << ","
					<< "持仓量" << ","
					//<< "今收盘" << ","
					//<< "本次结算价" << ","
					<< "申买价一" << ","
					<< "申买量一" << ","
					<< "申卖价一" << ","
					<< "申卖量一" << ","
					//<< "现手" << ","
					//<< "增仓" << ","
					//<< "方向"
					<< "申买价二" << ","
					<< "申买量二" << ","
					<< "申卖价二" << ","
					<< "申卖量二" << ","

					<< "申买价三" << ","
					<< "申买量三" << ","
					<< "申卖价三" << ","
					<< "申卖量三" << ","


					<< "申买价四" << ","
					<< "申买量四" << ","
					<< "申卖价四" << ","
					<< "申卖量四" << ","

					<< "申买价五" << ","
					<< "申买量五" << ","
					<< "申卖价五" << ","
					<< "申卖量五" << std::endl;
			}
			else
			{
				outFile
					<< "合约代码" << ","
					//<<"交易日"<<","
					//<< "上次结算价" << ","
					//<< "昨持仓量" << ","
					//<< "涨停板价" << ","
					//<< "跌停板价" << ","
					//<< "今开盘" << ","
					//<< "最高价" << ","
					//<< "最低价" << ","
					<< "最后修改时间" << ","
					<< "最后修改毫秒" << ","
					<< "最新价" << ","
					<< "数量" << ","
					//<< "成交金额" << ","
					<< "持仓量" << ","
					//<< "今收盘" << ","
					//<< "本次结算价" << ","
					<< "申买价一" << ","
					<< "申买量一" << ","
					<< "申卖价一" << ","
					<< "申卖量一" //<< ","
							  //<< "现手" << ","
							  //<< "增仓" << ","
							  //<< "方向"
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
	outPankouFile.open(m_chMdPankouFileName, std::ios::app); // 文件追加写入 

	list<struct CMDPankoudata>::iterator it;

	for (it = listPankou.begin(); it != listPankou.end(); it++)
	{
		outPankouFile
			<< (*it).dwPreSettlementPrice << "," //上次结算价
			<< (*it).dwPreOpenInterest << ","  //昨持仓量
			<< (*it).dwUpperLimitPrice << "," //涨停板价
			<< (*it).dwLowerLimitPrice << "," //跌停板价
			<< (*it).dwOpenPrice << ","  //今开盘
			<< (*it).dwHighestPrice << "," //最高价
			<< (*it).dwLowestPrice//最低价
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
	while (WaitForSingleObject(CloseSignalReady, 0) != WAIT_OBJECT_0)//设置CloseSignalReady信号，线程退出
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
					outFile.open(itor->second.c_str(), std::ios::app); // 文件追加写入 

					if (outFile.is_open())
					{
						outFile << structTickData.cInstrumentID << ","
							<< structTickData.cUpdatetime << ","     //最后修改时间
							<< structTickData.iMilitime << ","  //毫秒
							<< structTickData.dwLastPrice << ","   //最新价
							<< structTickData.iVolume << ","  //数量
							<< structTickData.dwOpenInterest << ","  //持仓量
							<< structTickData.dwBidPrice1 << ","    //买一价
							<< structTickData.iBidVolume1 << ","   //买一量
							<< structTickData.dwAskPrice1 << ","   //卖一价
							<< structTickData.iAskVolume1 << ","     //卖一量

							<< structTickData.dwBidPrice2 << ","    //买二价
							<< structTickData.iBidVolume2 << ","   //买二量
							<< structTickData.dwAskPrice2 << ","   //卖二价
							<< structTickData.iAskVolume2 << ","     //卖二量

							<< structTickData.dwBidPrice3 << ","    //买三价
							<< structTickData.iBidVolume3 << ","   //买三量
							<< structTickData.dwAskPrice3 << ","   //卖三价
							<< structTickData.iAskVolume3 << ","     //卖三量

							<< structTickData.dwBidPrice4 << ","    //买四价
							<< structTickData.iBidVolume4 << ","   //买四量
							<< structTickData.dwAskPrice4 << ","   //卖四价
							<< structTickData.iAskVolume4 << ","     //卖四量

							<< structTickData.dwBidPrice5 << ","    //买五价
							<< structTickData.iBidVolume5 << ","   //买五量
							<< structTickData.dwAskPrice5 << ","   //卖五价
							<< structTickData.iAskVolume5       //卖五量
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
					outFile.open(itor->second.c_str(), std::ios::app); // 文件追加写入 


					if (outFile.is_open())
					{
						outFile << structTickData.cInstrumentID << ","
							<< structTickData.cUpdatetime << ","     //最后修改时间
							<< structTickData.iMilitime << ","  //毫秒
							<< structTickData.dwLastPrice << ","   //最新价
							<< structTickData.iVolume << ","  //数量
							<< structTickData.dwOpenInterest << ","  //持仓量
							<< structTickData.dwBidPrice1 << ","    //买一价
							<< structTickData.iBidVolume1 << ","   //买一量
							<< structTickData.dwAskPrice1 << ","   //卖一价
							<< structTickData.iAskVolume1       //卖一量
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
			outFile.open(m_chMdcsvFileName, std::ios::app); // 文件追加写入 	
			//for ( (it == preit)? it : it=preit; it != listTickData.end(); it++)
			{
					//<< pDepthMarketData->InstrumentID << "," //合约代码
					//<< pDepthMarketData->TradingDay << ","  //交易日
					//<< pDepthMarketData->PreSettlementPrice << "," //上次结算价
					//<< pDepthMarketData->PreOpenInterest << ","  //昨持仓量
					//<< pDepthMarketData->UpperLimitPrice << "," //涨停板价
					//<< pDepthMarketData->LowerLimitPrice << "," //跌停板价
					//<< pDepthMarketData->OpenPrice << ","  //今开盘
					//<< pDepthMarketData->HighestPrice << "," //最高价
					//<< pDepthMarketData->LowestPrice << ","  //最低价

				outFile << structTickData.cUpdatetime << ","     //最后修改时间
					<< structTickData.iMilitime<< ","  //毫秒
																//<< pDepthMarketData->ExchangeID << ","
																//<< pDepthMarketData->ExchangeInstID << ","
					<< structTickData.dwLastPrice<< ","   //最新价
					<< structTickData.iVolume<< ","  //数量
														//<< pDepthMarketData->Turnover << "," //成交金额 
					<< structTickData.dwOpenInterest<< ","  //持仓量
															  //<< pDepthMarketData->ClosePrice << ","  //今收盘
															  //<< pDepthMarketData->SettlementPrice << "," //本次结算价
															  //<< pDepthMarketData->PreClosePrice << ","
															  //<< pDepthMarketData->PreDelta << ","
															  //<< pDepthMarketData->CurrDelta << ","
					<< structTickData.dwBidPrice1<< ","    //买一价
					<< structTickData.iBidVolume1<< ","   //买一量
					<< structTickData.dwAskPrice1<< ","   //卖一价
					<< structTickData.iAskVolume1       //卖一量
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
			// 计算两tick之间的差值
			//cout << "Volume" << pDepthMarketData->Volume << "PreVolume" << m_preDepthMarketData.Volume << endl;
			//cout << "OpenInterest" << pDepthMarketData->OpenInterest << "PreOpenInterest" << m_preDepthMarketData.OpenInterest << endl;
			double ask_price_delta = m_preDepthMarketData.AskPrice1 - pDepthMarketData->AskPrice1;
			int ask_volume_delta = m_preDepthMarketData.AskVolume1 - pDepthMarketData->AskVolume1;
			double	bid_price_delta = m_preDepthMarketData.BidPrice1 - pDepthMarketData->BidPrice1;
			int bid_volume_delta = m_preDepthMarketData.BidVolume1 - pDepthMarketData->BidVolume1;
			double last_price_delta = m_preDepthMarketData.LastPrice - pDepthMarketData->LastPrice;
			int volume_delta = pDepthMarketData->Volume - m_preDepthMarketData.Volume;
			int open_interest_delta = int(pDepthMarketData->OpenInterest - m_preDepthMarketData.OpenInterest);

			//编移量的显示字符串
			string ask_price_delta_str = get_delta_str(m_preDepthMarketData.AskPrice1, pDepthMarketData->AskPrice1);
			string	ask_volume_delta_str = get_delta_str(m_preDepthMarketData.AskVolume1, pDepthMarketData->AskVolume1);
			string bid_price_delta_str = get_delta_str(m_preDepthMarketData.BidPrice1, pDepthMarketData->BidPrice1);
			string bid_volume_delta_str = get_delta_str(m_preDepthMarketData.BidVolume1, pDepthMarketData->BidVolume1);
			string last_price_delta_str = get_delta_str(m_preDepthMarketData.LastPrice, pDepthMarketData->LastPrice);

			//如果ask或者bid价格对比上一个tick都发生了变化则不显示价格变化幅度
			if (ask_price_delta != 0)
				ask_volume_delta_str = "";
			if (bid_price_delta != 0)
				bid_volume_delta_str = "";

			//input1 计算订单是在ask范围内成交还是在bid范围内成交
			order_forward_enum	order_forward = get_order_forward(pDepthMarketData->LastPrice,
				pDepthMarketData->AskPrice1, pDepthMarketData->BidPrice1,
				m_preDepthMarketData.LastPrice, m_preDepthMarketData.AskPrice1, m_preDepthMarketData.BidPrice1);

			//input2 计算仓位变化方向
			open_interest_delta_forward_enum open_interest_delta_forward = get_open_interest_delta_forward(open_interest_delta,
				volume_delta);

			//f(input1, input2) = output1 根据成交区域和仓位变化方向计算出tick的类型
			TICK_TYPE tick_type_dict = m_tick_type_dict[open_interest_delta_forward][order_forward];

			if (open_interest_delta_forward != open_interest_delta_forward_enum::NONE)
			{	//# 输出相关变量
				//cout << "Ask\t" << pDepthMarketData->AskPrice1 << ask_price_delta_str << "\t" << pDepthMarketData->AskVolume1
				//	<< ask_volume_delta_str << "\tBid\t" << pDepthMarketData->BidPrice1 << bid_price_delta_str << "\t" <<
				//	pDepthMarketData->BidVolume1 << bid_volume_delta_str << endl;

				//cout << pDepthMarketData->UpdateTime << "." << pDepthMarketData->UpdateMillisec
				//	<< "\t" << pDepthMarketData->LastPrice << last_price_delta_str
				//	<< "\t成交 " << volume_delta
				//	<< "\t增仓 " << open_interest_delta << endl;

				//cout << m_tick_type_str_dict[tick_type_dict[tick_type_key_enum::TICKTYPE]].c_str()
				//	<< "\t" << m_color_type_str_dict[tick_type_dict[tick_type_key_enum::TICKCOLOR]].c_str() << endl;

				//cout << "--------------------------------------" << endl;
			}

			std::ofstream outFile;
			outFile.open(m_chMdcsvFileName, std::ios::app); // 文件追加写入 
			outFile
				//<< pDepthMarketData->InstrumentID << "," //合约代码
				//<< pDepthMarketData->TradingDay << ","  //交易日
				//<< pDepthMarketData->PreSettlementPrice << "," //上次结算价
				//<< pDepthMarketData->PreOpenInterest << ","  //昨持仓量
				//<< pDepthMarketData->UpperLimitPrice << "," //涨停板价
				//<< pDepthMarketData->LowerLimitPrice << "," //跌停板价
				//<< pDepthMarketData->OpenPrice << ","  //今开盘
				//<< pDepthMarketData->HighestPrice << "," //最高价
				//<< pDepthMarketData->LowestPrice << ","  //最低价
				<< pDepthMarketData->UpdateTime << ","     //最后修改时间
				<< pDepthMarketData->UpdateMillisec << ","  //毫秒
															//<< pDepthMarketData->ExchangeID << ","
															//<< pDepthMarketData->ExchangeInstID << ","
				<< pDepthMarketData->LastPrice << ","   //最新价
				<< pDepthMarketData->Volume << ","  //数量
													//<< pDepthMarketData->Turnover << "," //成交金额 
				<< pDepthMarketData->OpenInterest << ","  //持仓量
														  //<< pDepthMarketData->ClosePrice << ","  //今收盘
														  //<< pDepthMarketData->SettlementPrice << "," //本次结算价
														  //<< pDepthMarketData->PreClosePrice << ","
														  //<< pDepthMarketData->PreDelta << ","
														  //<< pDepthMarketData->CurrDelta << ","
				<< pDepthMarketData->BidPrice1 << ","    //买一价
				<< pDepthMarketData->BidVolume1 << ","   //买一量
				<< pDepthMarketData->AskPrice1 << ","   //卖一价
				<< pDepthMarketData->AskVolume1 << ","        //卖一量
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
	if (::WaitForSingleObject(writeFileNameSignalReady, 1000 * 60 * 10) == WAIT_TIMEOUT)//超时六分钟，针对服务器没有开的情况
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
	outFile.open(m_chMdcsvFileName, std::ios::app); // 文件追加写入 	
	while (true)
	{		
		Sleep(50);
		//writeTickDataCSVFile();
		struct CMDTickdata structTickData;
		while (tickWriteDataQueue.try_dequeue(structTickData))
		{
			outFile << structTickData.cUpdatetime << ","     //最后修改时间
				<< structTickData.iMilitime << ","  //毫秒
				<< structTickData.dwLastPrice << ","   //最新价
				<< structTickData.iVolume << ","  //数量
				<< structTickData.dwOpenInterest << ","  //持仓量
				<< structTickData.dwBidPrice1 << ","    //买一价
				<< structTickData.iBidVolume1 << ","   //买一量
				<< structTickData.dwAskPrice1 << ","   //卖一价
				<< structTickData.iAskVolume1       //卖一量
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

	//preStructTickData = 早上开盘读取昨天收盘的最后一条数据; 中间休息时，读取上一次的最后一条数据

	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("17 %s:  \CalculateAndAnalysisThreadProc  start\n", strCurtime.c_str());
	if (::WaitForSingleObject(ReceiveDepDataSignalReady, 1000 * 60*10) == WAIT_TIMEOUT)//超时一分钟，针对服务器没有开的情况
	{
		LOG("107  \CalculateAndAnalysisThreadProc ReceiveDepDataSignalReady WAIT_TIMEOUT\n");
		WaitForSingleObject(CloseSignalReady, INFINITE);
		_endthreadex(0);
		return 0;
	}

	//string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("18 %s:  \CalculateAndAnalysisThreadProc  start to copy queue to write queue\n", strCurtime.c_str());
	while (WaitForSingleObject(CloseSignalReady, 0)!= WAIT_OBJECT_0)//设置CloseSignalReady信号，线程退出
	{		
		MDTICKDATA	structTickData;
		while (tickDataQueue.try_dequeue(structTickData))
		{
			//<< structTickData.cUpdatetime << ","     //最后修改时间
				//<< structTickData.iMilitime << ","  //毫秒
				//<<  << ","   //最新价
				//<< structTickData.iVolume << ","  //数量
				//<< structTickData.dwOpenInterest << ","  //持仓量				
				//<< structTickData.iBidVolume1 << ","   //买一量				
				//<< structTickData.iAskVolume1       //卖一量
			
			/*
			甲方是主动方，乙方和丙方是对手方
			多开：甲方多头开仓，买入10手多单，对手方，乙方买入8手空单，丙方卖出2手多单，双边持仓增加16手
			多平：甲方多头平仓，卖出10手多单，对手方，乙方卖出8手空单，丙方买入2手多单，双边持仓减少16手
			空开：甲方空头开仓，买入10手空单，对手方，乙方买入2手多单，丙方卖出8手空单，双边持仓增加4手
			空平：甲方空头平仓，卖出10手空单，对手方，乙方卖出2手多单，丙方买入8手空单，双边持仓减少4手
			*/
			//计算每一TICK的累计多单持仓数量与空单持仓数量
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
					 if (tickorder == order_forward_enum::UP) //多开=空开+多平, 持仓量增加;
					 {
						 nLongVolumeNum += volume_delta;
						 nShortVolumeNum += open_interest_delta;
					 }
					 else if (tickorder == order_forward_enum::DOWN) //空开= 多开+空平, 持仓量增加;
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
					 if (tickorder == order_forward_enum::UP) //多平 = 空平 + 多开
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
	// 发出登陆请求
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
		if (string(pInstrument->ExchangeID) != string("CFFEX"))//没有加入中金所合约，股指期货要求50万入门，所以也先不查询
		{

			string strInstruct = string(pInstrument->InstrumentID);
			int nInstrumentLength = strInstruct.length();
			if (nInstrumentLength < 10)
			{
				string strPre = strInstruct.substr(0, 3); //前3个字符串为SPC,SPD,STD,STG， 应该为组合合约，忽略不查询
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
	///经纪公司代码
	strcpy_s(Confirm.BrokerID, g_chBrokerID);
	///投资者代码
	strcpy_s(Confirm.InvestorID, g_chUserID);
	m_pUserApi->ReqSettlementInfoConfirm(&Confirm, nRequestID++);
}


///投资者结算结果确认响应
void CSimpleHandler::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	CTraderSpi::OnRspSettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
	
}

///用户口令更新请求
void CSimpleHandler::ReqUserPasswordUpdate()
{
	string newpassword;
	//LOG("请输入新登录密码：\n");
	cin >> newpassword;
	CThostFtdcUserPasswordUpdateField a = { 0 };
	strcpy_s(a.BrokerID, g_chBrokerID);
	strcpy_s(a.UserID, g_chUserID);
	strcpy_s(a.OldPassword, g_chPassword);
	strcpy_s(a.NewPassword, newpassword.c_str());
	int b = m_pUserApi->ReqUserPasswordUpdate(&a, nRequestID++);
	
}


///用户口令更新请求响应
void CSimpleHandler::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	CTraderSpi::OnRspUserPasswordUpdate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
	
}


///资金账户口令更新请求
void CSimpleHandler::ReqTradingAccountPasswordUpdate()
{
	string newpassword;
	//LOG("请输入新资金密码：\n");
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

	if (::WaitForSingleObject(hTraderConnectSignalReady, 1000 * 60*10) == WAIT_TIMEOUT)//超时一分钟，针对服务器没有开的情况
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


