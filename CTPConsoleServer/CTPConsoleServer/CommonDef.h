#pragma once

#include <windows.h>
#include <process.h>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <memory>
#include <io.h>
#include <direct.h>
#include <atomic>
#include <mutex>
#include <iostream>
#include <fstream>
#include <ctime>
#include <queue>
#include <malloc.h>

#include "CtpAPILibrary\ThostFtdcUserApiStruct.h"
#include "CtpAPILibrary\ThostFtdcUserApiDataType.h"
#include "getconfig.h"
#include "readerwriterqueue.h"
#include "define.h"


//
//#define WM_MYMSG			WM_USER+88
//#define WM_KDJMSG			WM_USER+89
//#define WM_HEYUEPREPARED	WM_USER+90 //合约就绪
//#define WM_READTESTDATA     WM_USER+91//读取Test Data
//#define WM_CTP_TIMER		WM_USER+92




using namespace std;
using namespace moodycamel;

extern HANDLE LoginSignalReady;
extern HANDLE SubscribeSignalReady;
extern HANDLE CloseSignalReady;
extern HANDLE writeFileNameSignalReady;
extern HANDLE ReceiveDepDataSignalReady;
extern HANDLE writeDepDataSignalReady;
extern HANDLE TickSignalReady;
extern HANDLE ConDisconnetSignalReady;
extern HANDLE hCalAnalysis;
extern HANDLE MkdirSignalReady;

extern HANDLE hCTPTimerCloseSignal;



//盘口数据结构
struct CMDPankoudata
{
	double dwPreSettlementPrice;
	double dwPreOpenInterest;
	double dwUpperLimitPrice;
	double dwLowerLimitPrice;
	double dwOpenPrice;
	double dwHighestPrice;
	double dwLowestPrice;
};

//tick数据结构
typedef struct CMDTickdata
{
	char	cInstrumentID[31];
	char	cExchangeIDType[9];//交易所代码 SHFE上交所，默认可以有五档行情，DCE等其他交易所需要交费才有五档行情
	char	cUpdatetime[9];
	int		iMilitime;
	double	dwLastPrice;
	int		iVolume;
	double  dwOpenInterest;
	double	dwBidPrice1;
	int		iBidVolume1;
	double	dwAskPrice1;
	int		iAskVolume1;
	int		iOpenDelta;
	char	cInformation[50];
	int		nIndex;//Price索引，为了计算各个指标方便。

	double	dwBidPrice2;
	int		iBidVolume2;
	double	dwAskPrice2;
	int		iAskVolume2;

	double	dwBidPrice3;
	int		iBidVolume3;
	double	dwAskPrice3;
	int		iAskVolume3;

	double	dwBidPrice4;
	int		iBidVolume4;
	double	dwAskPrice4;
	int		iAskVolume4;

	double	dwBidPrice5;
	int		iBidVolume5;
	double	dwAskPrice5;
	int		iAskVolume5;

}MDTICKDATA;



typedef char  TThostFtdcMdcsvFileName[256];  //存储行情明细的文件名
typedef char TThostFtdcMdPankouFileName[256]; //存储盘口的文件名  主要是昨结算价  涨停价  跌停价
typedef char CHInstrumentID[31];

extern char targetpath[1024];
extern vector<string>      g_vcInstrumentIDFilterStr;
extern TThostFtdcMdcsvFileName     m_chMdcsvFileName;
extern TThostFtdcMdPankouFileName  m_chMdPankouFileName;
extern CHInstrumentID              g_chInstrumentIDFilestr;

extern MDTICKDATA structTickData;
extern ReaderWriterQueue<MDTICKDATA> tickDataQueue;


/// 会员代码
extern TThostFtdcBrokerIDType g_chBrokerID;
/// 交易用户代码
extern TThostFtdcUserIDType g_chUserID;
/// 交易用户密码
extern TThostFtdcPasswordType g_chPassword;
/// 交易所代码
extern TThostFtdcExchangeIDType g_chExchangeID;
///合约代码
extern TThostFtdcInstrumentIDType	g_chInstrumentID;
///投资者代码
extern TThostFtdcInvestorIDType g_chInvestorID;
///预埋撤单编号
extern TThostFtdcParkedOrderActionIDType	g_chParkedOrderActionID1;
///预埋报单编号
extern TThostFtdcParkedOrderIDType	g_chParkedOrderID1;
///报单引用
extern TThostFtdcOrderRefType	g_chOrderRef;
///前置编号
extern TThostFtdcFrontIDType	g_chFrontID;
///会话编号
extern TThostFtdcSessionIDType	g_chSessionID;
///报单编号
extern TThostFtdcOrderSysIDType	g_chOrderSysID;
///止损价
extern TThostFtdcPriceType	g_chStopPrice;
///报价引用
extern TThostFtdcOrderRefType	g_chQuoteRef;

///认证码
extern TThostFtdcAuthCodeType	g_chAuthCode;
///App代码
extern TThostFtdcAppIDType	g_chAppID;

//==========
///前置编号
extern TThostFtdcFrontIDType	g_NewFrontID;
///会话编号
extern TThostFtdcSessionIDType	g_NewSessionID;



extern HANDLE hFetchMD; //获取行情Handle;
extern HANDLE hWriteData;//写data到文件;
extern HANDLE hWaitForConDisconnect;
extern HANDLE hTradeThreadProc;
extern HANDLE hCTPTimerThreadProc;

extern HANDLE hTraderAuthSignalReady;//Trader Auth Ready
extern HANDLE hTraderLoginSignalReady;//Trader Login Ready
extern HANDLE hTraderConnectSignalReady;//Trader Connect Ready
extern HANDLE hMDThreadToStartSignalReady;

extern unsigned int __stdcall fetchMDThreadProc(void * data);
extern unsigned int __stdcall writeDataThreadProc(void * data);
extern unsigned int __stdcall waitForConDisconnectThreadProc(void * data);
extern unsigned int __stdcall CalculateAndAnalysisThreadProc(void * data);
extern unsigned int __stdcall TradeThreadProc(void * data);
extern unsigned int __stdcall CTPTimerThreadProc(void * data);


typedef struct parameterTransToChart
{
	string strMessage; // to list box
	double dwprice; // to price chart
	int nGap; // to gap chart
	int nIndex; //x-axis index
}PARAMTOCHARTS;

extern void PostMessageToDlg(PARAMTOCHARTS &param);
extern map<string, queue<MDTICKDATA>> g_mapPrice;
extern vector<string> md_InstrumentID;

extern map<string, queue<MDTICKDATA>>::iterator selitor;
extern map<string, string> g_mapSHFEInstrument;


enum open_interest_delta_forward_enum
{
	OPEN, CLOSE, EXCHANGE, NONE, OPENFWDOUBLE, CLOSEFWDOUBLE
};
enum order_forward_enum
{
	UP, DOWN, TICKMIDDLE
};
enum tick_type_enum
{
	OPENLONG, OPENSHORT, OPENDOUBLE,
	CLOSELONG, CLOSESHORT, CLOSEDOUBLE,
	EXCHANGELONG, EXCHANGESHORT,
	OPENUNKOWN, CLOSEUNKOWN, EXCHANGEUNKOWN,
	UNKOWN, NOCHANGE
};
enum tick_color_enum
{
	RED, GREEN, WHITE
};
enum tick_type_key_enum
{
	TICKTYPE, TICKCOLOR
};
enum opponent_key_enum
{
	OPPOSITE, SIMILAR
};


typedef map<tick_type_key_enum, int> TICK_TYPE;
typedef map<open_interest_delta_forward_enum, map<order_forward_enum, TICK_TYPE>> TICK_TYPE_DICT;
typedef map<tick_type_enum, map<opponent_key_enum, int> > HANDICAP_DICT;
typedef map<int, string> TICK_TYPE_STR_DICT;


typedef struct trendTickData
{
	int openshortNum; //空开量
	int openlongNum; //多开量
	int closeshortNum; //空平量
	int closelongNum;  //多平量
	int exchangelongNum; //多换量
	int exchangeshortNum; //空换量
	int opendoubleNum;
	int closedoubleNum;

}TRENDTICKDATA;



class spin_mutex {
	std::atomic_flag flag = ATOMIC_FLAG_INIT;
public:
	spin_mutex() = default;
	spin_mutex(const spin_mutex&) = delete;
	spin_mutex& operator= (const spin_mutex&) = delete;
	void lock() {
		while (flag.test_and_set(std::memory_order_acquire))
			;
	}
	void unlock() {
		flag.clear(std::memory_order_release);
	}
};

extern map<string, string> gmap_FilepathInstrument;
extern spin_mutex sm;

extern int nConDisconnect;

extern ReaderWriterQueue<MDTICKDATA> tickWriteDataQueue;

extern void ClearCTPData();

enum CTPTimerEnum
{
	STARTWORK,STOPWORK
};

extern void GetCurTimeStr(string &strTime);

