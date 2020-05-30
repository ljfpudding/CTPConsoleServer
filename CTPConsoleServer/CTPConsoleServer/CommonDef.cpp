#include "stdafx.h"
#include "CommonDef.h"





using namespace moodycamel;
using namespace std;

HANDLE LoginSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE SubscribeSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE CloseSignalReady = CreateEvent(NULL, true, false, NULL);//结束所有线程信号，为手动方式
HANDLE writeFileNameSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE ReceiveDepDataSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE writeDepDataSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE TickSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE ConDisconnetSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE MkdirSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE hCTPTimerCloseSignal = CreateEvent(NULL, false, false, NULL);


MDTICKDATA							structTickData;
ReaderWriterQueue<MDTICKDATA>		tickDataQueue;

TThostFtdcMdcsvFileName				m_chMdcsvFileName = { 0 };
TThostFtdcMdPankouFileName			m_chMdPankouFileName = { 0 };
CHInstrumentID						g_chInstrumentIDFilestr = { 0 };
vector<string>						g_vcInstrumentIDFilterStr;
char								targetpath[1024] = { 0 };




/// 会员代码
TThostFtdcBrokerIDType				g_chBrokerID;
/// 交易用户代码
TThostFtdcUserIDType				g_chUserID;
/// 交易用户密码
TThostFtdcPasswordType				g_chPassword;
/// 交易所代码
TThostFtdcExchangeIDType			g_chExchangeID;
///合约代码
TThostFtdcInstrumentIDType			g_chInstrumentID;
///投资者代码
TThostFtdcInvestorIDType			g_chInvestorID;
///预埋撤单编号
TThostFtdcParkedOrderActionIDType	g_chParkedOrderActionID1;
///预埋报单编号
TThostFtdcParkedOrderIDType			g_chParkedOrderID1;
///报单引用
TThostFtdcOrderRefType				g_chOrderRef;
///前置编号
TThostFtdcFrontIDType				g_chFrontID;
///会话编号
TThostFtdcSessionIDType				g_chSessionID;
///报单编号
TThostFtdcOrderSysIDType			g_chOrderSysID;
///止损价
TThostFtdcPriceType					g_chStopPrice;
///报价引用
TThostFtdcOrderRefType				g_chQuoteRef;

///认证码
TThostFtdcAuthCodeType				g_chAuthCode;
///App代码
TThostFtdcAppIDType					g_chAppID;

//==========
///前置编号
TThostFtdcFrontIDType				g_NewFrontID;
///会话编号
TThostFtdcSessionIDType				g_NewSessionID;


HANDLE			hFetchMD = NULL; //获取行情Handle;
HANDLE			hWriteData = NULL;//写data到文件;
HANDLE			hWaitForConDisconnect = NULL;
HANDLE			hCalAnalysis = NULL;
HANDLE			hTradeThreadProc = NULL;//交易Thread 
HANDLE			hCTPTimerThreadProc = NULL;


int									nConDisconnect = 0; //是否ConDisconnect

HANDLE hTraderAuthSignalReady		= CreateEvent(NULL, false, false, NULL);//Trader Auth Ready
HANDLE hTraderLoginSignalReady		= CreateEvent(NULL, false, false, NULL);//Trader Login Ready
HANDLE hTraderConnectSignalReady	= CreateEvent(NULL, false, false, NULL);//Trader Connect Ready
HANDLE hMDThreadToStartSignalReady	= CreateEvent(NULL, false, false, NULL);//Trader Connect Ready


CThostFtdcDepthMarketDataField		m_preDepthMarketData;
TICK_TYPE_DICT		m_tick_type_dict;
HANDICAP_DICT		m_handicap_dict;
TICK_TYPE_STR_DICT	m_tick_type_str_dict;
TICK_TYPE_STR_DICT	m_color_type_str_dict;

ReaderWriterQueue<MDTICKDATA>		tickWriteDataQueue;
vector<string>						md_InstrumentID;
map<string, string>					gmap_FilepathInstrument;

spin_mutex			sm;

map<string, queue<MDTICKDATA>>		g_mapPrice;
map<string, queue<MDTICKDATA>>::iterator selitor;
map<string, string>					g_mapSHFEInstrument;//上海合约，有五档



template <typename T>
string get_delta_str(T pre, T data)
{
	string offset_str = "";
	if (data > pre)
	{
		offset_str = "(+" + to_string(data - pre) + ")";
	}
	else if (data < pre)
	{
		offset_str = "(-" + to_string(pre - data) + ")";
	}
	return offset_str;
}

open_interest_delta_forward_enum get_open_interest_delta_forward(int open_interest_delta, int volume_delta)
{	/*根据成交量的差和持仓量的差来获取仓位变化的方向
	return : open_interest_delta_forward_enum
	*/
	open_interest_delta_forward_enum local_open_interest_delta_forward;
	if (open_interest_delta == 0 && volume_delta == 0)
		local_open_interest_delta_forward = open_interest_delta_forward_enum::NONE;
	else if (open_interest_delta == 0 && volume_delta > 0)
		local_open_interest_delta_forward = open_interest_delta_forward_enum::EXCHANGE;
	else if (open_interest_delta > 0)
	{
		if (open_interest_delta - volume_delta == 0)
			local_open_interest_delta_forward = open_interest_delta_forward_enum::OPENFWDOUBLE;
		else
			local_open_interest_delta_forward = open_interest_delta_forward_enum::OPEN;
	}
	else if (open_interest_delta < 0)
	{
		if (open_interest_delta + volume_delta == 0)
			local_open_interest_delta_forward = open_interest_delta_forward_enum::CLOSEFWDOUBLE;
		else
			local_open_interest_delta_forward = open_interest_delta_forward_enum::CLOSE;
	}
	return local_open_interest_delta_forward;
}

order_forward_enum get_order_forward(double last_price, double ask_price1, double bid_price1,
	double pre_last_price, double pre_ask_price1, double pre_bid_price1)
{
	enum order_forward_enum local_order_forward;
	//获取成交的区域，根据当前tick的成交价和上个tick的ask和bid价格进行比对
	if (last_price >= pre_ask_price1)
	{
		local_order_forward = order_forward_enum::UP;
	}
	else if (last_price <= pre_bid_price1)
	{
		local_order_forward = order_forward_enum::DOWN;
	}
	else
	{
		if (last_price >= ask_price1)
		{
			local_order_forward = order_forward_enum::UP;
		}
		else if (last_price <= bid_price1)
		{
			local_order_forward = order_forward_enum::DOWN;
		}
		else
		{
			local_order_forward = order_forward_enum::TICKMIDDLE;
		}
	}
	return local_order_forward;
}

void init_tick_type_dict()
{
	TICK_TYPE tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::NOCHANGE;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::WHITE;
	m_tick_type_dict[open_interest_delta_forward_enum::NONE][order_forward_enum::UP] = tick_type;
	m_tick_type_dict[open_interest_delta_forward_enum::NONE][order_forward_enum::DOWN] = tick_type;
	m_tick_type_dict[open_interest_delta_forward_enum::NONE][order_forward_enum::TICKMIDDLE] = tick_type;

	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::EXCHANGELONG;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::RED;
	m_tick_type_dict[open_interest_delta_forward_enum::EXCHANGE][order_forward_enum::UP] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::EXCHANGESHORT;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::GREEN;
	m_tick_type_dict[open_interest_delta_forward_enum::EXCHANGE][order_forward_enum::DOWN] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::EXCHANGEUNKOWN;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::WHITE;
	m_tick_type_dict[open_interest_delta_forward_enum::EXCHANGE][order_forward_enum::TICKMIDDLE] = tick_type;

	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::OPENDOUBLE;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::RED;
	m_tick_type_dict[open_interest_delta_forward_enum::OPENFWDOUBLE][order_forward_enum::UP] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::OPENDOUBLE;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::GREEN;
	m_tick_type_dict[open_interest_delta_forward_enum::OPENFWDOUBLE][order_forward_enum::DOWN] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::OPENDOUBLE;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::WHITE;
	m_tick_type_dict[open_interest_delta_forward_enum::OPENFWDOUBLE][order_forward_enum::TICKMIDDLE] = tick_type;

	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::OPENLONG;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::RED;
	m_tick_type_dict[open_interest_delta_forward_enum::OPEN][order_forward_enum::UP] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::OPENSHORT;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::GREEN;
	m_tick_type_dict[open_interest_delta_forward_enum::OPEN][order_forward_enum::DOWN] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::OPENUNKOWN;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::WHITE;
	m_tick_type_dict[open_interest_delta_forward_enum::OPEN][order_forward_enum::TICKMIDDLE] = tick_type;

	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::CLOSEDOUBLE;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::RED;
	m_tick_type_dict[open_interest_delta_forward_enum::CLOSEFWDOUBLE][order_forward_enum::UP] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::CLOSEDOUBLE;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::GREEN;
	m_tick_type_dict[open_interest_delta_forward_enum::CLOSEFWDOUBLE][order_forward_enum::DOWN] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::CLOSEDOUBLE;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::WHITE;
	m_tick_type_dict[open_interest_delta_forward_enum::CLOSEFWDOUBLE][order_forward_enum::TICKMIDDLE] = tick_type;

	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::CLOSESHORT;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::RED;
	m_tick_type_dict[open_interest_delta_forward_enum::CLOSE][order_forward_enum::UP] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::CLOSELONG;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::GREEN;
	m_tick_type_dict[open_interest_delta_forward_enum::CLOSE][order_forward_enum::DOWN] = tick_type;
	tick_type[tick_type_key_enum::TICKTYPE] = tick_type_enum::CLOSEUNKOWN;
	tick_type[tick_type_key_enum::TICKCOLOR] = tick_color_enum::WHITE;
	m_tick_type_dict[open_interest_delta_forward_enum::CLOSE][order_forward_enum::TICKMIDDLE] = tick_type;
}

void init_handicap_dict()
{
	m_handicap_dict[tick_type_enum::OPENLONG][opponent_key_enum::OPPOSITE] = tick_type_enum::CLOSELONG;
	m_handicap_dict[tick_type_enum::OPENLONG][opponent_key_enum::SIMILAR] = tick_type_enum::OPENSHORT;

	m_handicap_dict[tick_type_enum::OPENSHORT][opponent_key_enum::OPPOSITE] = tick_type_enum::CLOSESHORT;
	m_handicap_dict[tick_type_enum::OPENSHORT][opponent_key_enum::SIMILAR] = tick_type_enum::OPENLONG;

	m_handicap_dict[tick_type_enum::CLOSELONG][opponent_key_enum::OPPOSITE] = tick_type_enum::OPENLONG;
	m_handicap_dict[tick_type_enum::CLOSELONG][opponent_key_enum::SIMILAR] = tick_type_enum::CLOSESHORT;

	m_handicap_dict[tick_type_enum::CLOSESHORT][opponent_key_enum::OPPOSITE] = tick_type_enum::OPENSHORT;
	m_handicap_dict[tick_type_enum::CLOSESHORT][opponent_key_enum::SIMILAR] = tick_type_enum::CLOSELONG;
}

void init_tick_type_str_dict()
{
	m_tick_type_str_dict[tick_type_enum::OPENLONG] = "多开";
	m_tick_type_str_dict[tick_type_enum::OPENSHORT] = "空开";
	m_tick_type_str_dict[tick_type_enum::OPENDOUBLE] = "双开";
	m_tick_type_str_dict[tick_type_enum::CLOSELONG] = "多平";
	m_tick_type_str_dict[tick_type_enum::CLOSESHORT] = "空平";
	m_tick_type_str_dict[tick_type_enum::CLOSEDOUBLE] = "双平";
	m_tick_type_str_dict[tick_type_enum::EXCHANGELONG] = "多换";
	m_tick_type_str_dict[tick_type_enum::EXCHANGESHORT] = "空换";
	m_tick_type_str_dict[tick_type_enum::OPENUNKOWN] = "未知开仓";
	m_tick_type_str_dict[tick_type_enum::CLOSEUNKOWN] = "未知平仓";
	m_tick_type_str_dict[tick_type_enum::EXCHANGEUNKOWN] = "未知换仓";
	m_tick_type_str_dict[tick_type_enum::UNKOWN] = "未知";
	m_tick_type_str_dict[tick_type_enum::NOCHANGE] = "没有变化";
	m_color_type_str_dict[tick_color_enum::RED] = "红";
	m_color_type_str_dict[tick_color_enum::GREEN] = "绿";
	m_color_type_str_dict[tick_color_enum::WHITE] = "白";
}

void ClearCTPData()
{
	try
	{
		while (tickDataQueue.pop());
		g_vcInstrumentIDFilterStr.swap(vector<string>());
		while (tickWriteDataQueue.pop());
		md_InstrumentID.swap(vector<string>());
		map<string, string>().swap(gmap_FilepathInstrument);
		map<string, queue<MDTICKDATA>>().swap(g_mapPrice);
		map<string, string>().swap(g_mapSHFEInstrument);//上海合约，有五档	

	}
	catch (...)
	{


	}

}

void PostMessageToDlg(PARAMTOCHARTS &param)
{
	PARAMTOCHARTS *paramTrans = new PARAMTOCHARTS;
	memset(paramTrans, 0, sizeof(PARAMTOCHARTS));
	{
		paramTrans->dwprice = param.dwprice;
		paramTrans->nGap = param.nGap;
		paramTrans->strMessage = param.strMessage;
		paramTrans->nIndex = param.nIndex;
	}

}

FILE *logfile;

void GetCurTimeStr(string &strTime)
{
	time_t nowtime;
	nowtime = time(NULL); //获取日历时间  		
	struct tm local;
	localtime_s(&local, &nowtime);  //获取当前系统时间  
	char chTime[30] = { 0 };
	sprintf_s(chTime, "%02d:%02d:%02d:%02d:%2d", local.tm_mon + 1, local.tm_mday,local.tm_hour,local.tm_min,local.tm_sec);
	strTime = string(chTime);
}


