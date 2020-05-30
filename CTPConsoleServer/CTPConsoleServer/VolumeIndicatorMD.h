#pragma once

#include "CommonDef.h"
#include "CtpAPILibrary\ThostFtdcTraderApi.h"
#include "CtpAPILibrary\ThostFtdcMdApi.h"

class CVolumeIndicatorMDSpi : public CThostFtdcMdSpi
{
public:
	// 构造函数，需要一个有效的指向CThostFtdcMduserApi实例的指针
	CVolumeIndicatorMDSpi(CThostFtdcMdApi *pUserApi);
	~CVolumeIndicatorMDSpi() {}
	virtual void OnFrontConnected();
	// 当客户端与交易托管系统通信连接断开时，该方法被调用
	virtual void OnFrontDisconnected(int nReason);
	// 当客户端发出登录请求之后，该方法会被调用，通知客户端登录是否成功
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);	
	virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);
	
	int ReqUserLogin();
	int SubscribeMarketData();

private:
	// 指向CThostFtdcMduserApi实例的指针
	CThostFtdcMdApi *m_pUserMdApi;
	bool m_bPankouData = false;
	MDTICKDATA m_preTickData;//当丢数据时候，程序自动补充一个临时数据。
	static int m_nIndex;
};

class CVolumeIndicatorMDApi : public CThostFtdcMdApi
{
   
public:
	CVolumeIndicatorMDApi() { m_pApi = NULL; }
	~CVolumeIndicatorMDApi() {}

private:
	CThostFtdcMdApi *m_pApi;

public:
	CThostFtdcMdApi *CreateFtdcMdApi(const char *pszFlowPath = "", const bool bIsUsingUdp = false, const bool bIsMulticast = false)
	{
		return m_pApi = CThostFtdcMdApi::CreateFtdcMdApi(pszFlowPath);
	 }

	///获取API的版本信息
	///@retrun 获取到的版本号
	const char *GetApiVersion()
	{
		return m_pApi->GetApiVersion();
	}
	
	///订阅行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int SubscribeMarketData(char *ppInstrumentID[], int nCount)
	{
		return m_pApi->SubscribeMarketData(ppInstrumentID, nCount);
	}

	///退订行情。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int UnSubscribeMarketData(char *ppInstrumentID[], int nCount)
	{
		return  m_pApi->UnSubscribeMarketData(ppInstrumentID, nCount);
	}

	///订阅询价。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int SubscribeForQuoteRsp(char *ppInstrumentID[], int nCount)
	{
		return m_pApi->SubscribeForQuoteRsp(ppInstrumentID, nCount);
	}

	///退订询价。
	///@param ppInstrumentID 合约ID  
	///@param nCount 要订阅/退订行情的合约个数
	///@remark 
	virtual int UnSubscribeForQuoteRsp(char *ppInstrumentID[], int nCount)
	{
		return m_pApi->UnSubscribeForQuoteRsp(ppInstrumentID, nCount);
	}

	///用户登录请求
	virtual int ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
	{
		return m_pApi->ReqUserLogin(pReqUserLoginField, nRequestID);
	}

	///登出请求
	virtual int ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID)
	{

		return m_pApi->ReqUserLogout(pUserLogout, nRequestID);
	}


	///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
	virtual void Release()
	{
		m_pApi->Release();
	}

	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
	virtual void Init()
	{
		m_pApi->Init();
	}

	///等待接口线程结束运行
	///@return 线程退出代码
	virtual int Join()
	{
		return m_pApi->Join();
	}

	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
	virtual const char *GetTradingDay()
	{
		return m_pApi->GetTradingDay();
	}

	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
	virtual void RegisterFront(char *pszFrontAddress)
	{
		m_pApi->RegisterFront(pszFrontAddress);
	}

	///注册名字服务器网络地址
	///@param pszNsAddress：名字服务器网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
	///@remark RegisterNameServer优先于RegisterFront
	virtual void RegisterNameServer(char *pszNsAddress)
	{
		m_pApi->RegisterNameServer(pszNsAddress);
	}

	///注册名字服务器用户信息
	///@param pFensUserInfo：用户信息。
	virtual void RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo)
	{
		m_pApi->RegisterFensUserInfo(pFensUserInfo);
	}

	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	virtual void RegisterSpi(CThostFtdcMdSpi *pSpi)
	{
		m_pApi->RegisterSpi(pSpi);
	}	
};
//============================================================================================

