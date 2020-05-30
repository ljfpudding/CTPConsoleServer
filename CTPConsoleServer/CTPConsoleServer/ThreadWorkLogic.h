#pragma once

#include "CommonDef.h"
#include "traderspi.h"
#include "VolumeIndicatorMD.h"

//============================================================================================================

//������
class CSimpleHandler : public CTraderSpi
{
public:
	CSimpleHandler(CThostFtdcTraderApi *pUserApi);
	~CSimpleHandler() {}
	virtual void OnFrontConnected();


	//�ͻ�����֤
	void ReqAuthenticate(); 


	///�ͻ�����֤��Ӧ
	virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo,	int nRequestID, bool bIsLast);


	void RegisterFensUserInfo();

	virtual void OnFrontDisconnected(int nReason);


	void ReqUserLogin();
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);



	void ReqQryInstrument();
	virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	void ReqUserLogout();

	///�ǳ�������Ӧ
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///����ȷ�Ͻ��㵥
	void ReqSettlementInfoConfirm();

	///Ͷ���߽�����ȷ����Ӧ
	virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�û������������
	void ReqUserPasswordUpdate();

	///�û��������������Ӧ
	virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///�ʽ��˻������������
	void ReqTradingAccountPasswordUpdate();

	///�ʽ��˻��������������Ӧ
	virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);






	private:
		CThostFtdcTraderApi *m_pUserApi;

};

