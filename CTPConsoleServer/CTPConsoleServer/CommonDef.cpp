#include "stdafx.h"
#include "CommonDef.h"





using namespace moodycamel;
using namespace std;

HANDLE LoginSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE SubscribeSignalReady = CreateEvent(NULL, false, false, NULL);
HANDLE CloseSignalReady = CreateEvent(NULL, true, false, NULL);//���������߳��źţ�Ϊ�ֶ���ʽ
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




/// ��Ա����
TThostFtdcBrokerIDType				g_chBrokerID;
/// �����û�����
TThostFtdcUserIDType				g_chUserID;
/// �����û�����
TThostFtdcPasswordType				g_chPassword;
/// ����������
TThostFtdcExchangeIDType			g_chExchangeID;
///��Լ����
TThostFtdcInstrumentIDType			g_chInstrumentID;
///Ͷ���ߴ���
TThostFtdcInvestorIDType			g_chInvestorID;
///Ԥ�񳷵����
TThostFtdcParkedOrderActionIDType	g_chParkedOrderActionID1;
///Ԥ�񱨵����
TThostFtdcParkedOrderIDType			g_chParkedOrderID1;
///��������
TThostFtdcOrderRefType				g_chOrderRef;
///ǰ�ñ��
TThostFtdcFrontIDType				g_chFrontID;
///�Ự���
TThostFtdcSessionIDType				g_chSessionID;
///�������
TThostFtdcOrderSysIDType			g_chOrderSysID;
///ֹ���
TThostFtdcPriceType					g_chStopPrice;
///��������
TThostFtdcOrderRefType				g_chQuoteRef;

///��֤��
TThostFtdcAuthCodeType				g_chAuthCode;
///App����
TThostFtdcAppIDType					g_chAppID;

//==========
///ǰ�ñ��
TThostFtdcFrontIDType				g_NewFrontID;
///�Ự���
TThostFtdcSessionIDType				g_NewSessionID;


HANDLE			hFetchMD = NULL; //��ȡ����Handle;
HANDLE			hWriteData = NULL;//дdata���ļ�;
HANDLE			hWaitForConDisconnect = NULL;
HANDLE			hCalAnalysis = NULL;
HANDLE			hTradeThreadProc = NULL;//����Thread 
HANDLE			hCTPTimerThreadProc = NULL;


int									nConDisconnect = 0; //�Ƿ�ConDisconnect

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
map<string, string>					g_mapSHFEInstrument;//�Ϻ���Լ�����嵵



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
{	/*���ݳɽ����Ĳ�ͳֲ����Ĳ�����ȡ��λ�仯�ķ���
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
	//��ȡ�ɽ������򣬸��ݵ�ǰtick�ĳɽ��ۺ��ϸ�tick��ask��bid�۸���бȶ�
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
	m_tick_type_str_dict[tick_type_enum::OPENLONG] = "�࿪";
	m_tick_type_str_dict[tick_type_enum::OPENSHORT] = "�տ�";
	m_tick_type_str_dict[tick_type_enum::OPENDOUBLE] = "˫��";
	m_tick_type_str_dict[tick_type_enum::CLOSELONG] = "��ƽ";
	m_tick_type_str_dict[tick_type_enum::CLOSESHORT] = "��ƽ";
	m_tick_type_str_dict[tick_type_enum::CLOSEDOUBLE] = "˫ƽ";
	m_tick_type_str_dict[tick_type_enum::EXCHANGELONG] = "�໻";
	m_tick_type_str_dict[tick_type_enum::EXCHANGESHORT] = "�ջ�";
	m_tick_type_str_dict[tick_type_enum::OPENUNKOWN] = "δ֪����";
	m_tick_type_str_dict[tick_type_enum::CLOSEUNKOWN] = "δ֪ƽ��";
	m_tick_type_str_dict[tick_type_enum::EXCHANGEUNKOWN] = "δ֪����";
	m_tick_type_str_dict[tick_type_enum::UNKOWN] = "δ֪";
	m_tick_type_str_dict[tick_type_enum::NOCHANGE] = "û�б仯";
	m_color_type_str_dict[tick_color_enum::RED] = "��";
	m_color_type_str_dict[tick_color_enum::GREEN] = "��";
	m_color_type_str_dict[tick_color_enum::WHITE] = "��";
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
		map<string, string>().swap(g_mapSHFEInstrument);//�Ϻ���Լ�����嵵	

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
	nowtime = time(NULL); //��ȡ����ʱ��  		
	struct tm local;
	localtime_s(&local, &nowtime);  //��ȡ��ǰϵͳʱ��  
	char chTime[30] = { 0 };
	sprintf_s(chTime, "%02d:%02d:%02d:%02d:%2d", local.tm_mon + 1, local.tm_mday,local.tm_hour,local.tm_min,local.tm_sec);
	strTime = string(chTime);
}


