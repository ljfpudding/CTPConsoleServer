#include "stdafx.h"
#include "traderSpi.h"
#include <stdio.h>



void CTraderSpi::OnFrontConnected()
{
	
};

void CTraderSpi::OnFrontDisconnected(int nReason)
{
	
}

void CTraderSpi::OnHeartBeatWarning(int nTimeLapse)
{
	printf("<OnHeartBeatWarning>\n");
	printf("\tnTimeLapse [%d]\n", nTimeLapse);
	printf("</OnHeartBeatWarning>\n");
}

void CTraderSpi::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{

	//string strUserLogin = "";
	//strUserLogin += "<OnRspAuthenticate>\n";

	//printf("<OnRspAuthenticate>\n");

	if (pRspAuthenticateField)
	{

		//strUserLogin += "\tBrokerID \n";
		//strUserLogin += string(pRspAuthenticateField->BrokerID);
		//printf("\tBrokerID [%s]\n", pRspAuthenticateField->BrokerID);

		//strUserLogin += "\tUserID \n";
		//strUserLogin += string(pRspAuthenticateField->UserID);
		//printf("\tUserID [%s]\n", pRspAuthenticateField->UserID);


		//strUserLogin += "\tUserProductInfo \n";
		//strUserLogin += string(pRspAuthenticateField->UserProductInfo);
		//printf("\tUserProductInfo [%s]\n", pRspAuthenticateField->UserProductInfo);
		
		
		
		//strUserLogin += "\tAppID \n";
		//strUserLogin += string(pRspAuthenticateField->AppID);
		//printf("\tAppID [%s]\n", pRspAuthenticateField->AppID);
		
		
		
		//strUserLogin += "\tAppType \n";
		//strUserLogin += string(pRspAuthenticateField->AppType);
		//printf("\tAppType [%c]\n", pRspAuthenticateField->AppType);



	}
	if (pRspInfo)
	{

		//strUserLogin += "\tErrorMsg \n";
		//strUserLogin += string(pRspInfo->ErrorMsg);

		//printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		
		
		
		//strUserLogin += "\tErrorID \n";

		//char cErrorID[30] = { 0 };
		////_itoa(pRspInfo->ErrorID, cErrorID, 10);
		//strUserLogin += string(cErrorID);

		//strUserLogin += string(pRspInfo->ErrorID);

		//printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	//printf("\tnRequestID [%d]\n", nRequestID);
	//printf("\tbIsLast [%d]\n", bIsLast);


	//strUserLogin += "</OnRspAuthenticate>\n";

	//printf("</OnRspAuthenticate>\n");

	//PARAMTOCHARTS  *pa = new PARAMTOCHARTS;
	//pa->dwprice = 0;
	//pa->nGap = 0;
	//pa->nIndex = 0;
	//pa->strMessage = strUserLogin;
	//PostMessageToDlg(*pa);

};

void CTraderSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{

	//string strUserLogin = "";
	//strUserLogin += "<OnRspUserLogin>\n";
	//printf("<OnRspUserLogin>\n");
	if (pRspUserLogin)
	{


		//strUserLogin += "\tTradingDay \n";
		//strUserLogin += string(pRspUserLogin->TradingDay);
		//printf("\tTradingDay [%s]\n", pRspUserLogin->TradingDay);

		//strUserLogin += "\tLoginTime \n";
		//strUserLogin += string(pRspUserLogin->LoginTime);
		//printf("\tLoginTime [%s]\n", pRspUserLogin->LoginTime);


		//strUserLogin += "\tBrokerID \n";
		//strUserLogin += string(pRspUserLogin->BrokerID);
		//printf("\tBrokerID [%s]\n", pRspUserLogin->BrokerID);


		//strUserLogin += "\tUserID \n";
		//strUserLogin += string(pRspUserLogin->UserID);
		//printf("\tUserID [%s]\n", pRspUserLogin->UserID);


		//strUserLogin += "\tSystemName \n";
		//strUserLogin += string(pRspUserLogin->SystemName);
		//printf("\tSystemName [%s]\n", pRspUserLogin->SystemName);


		//strUserLogin += "\tMaxOrderRef \n";
		//strUserLogin += string(pRspUserLogin->MaxOrderRef);
//		printf("\tMaxOrderRef [%s]\n", pRspUserLogin->MaxOrderRef);
	
		
		//strUserLogin += "\tSHFETime \n";
		//strUserLogin += string(pRspUserLogin->SHFETime);
		//printf("\tSHFETime [%s]\n", pRspUserLogin->SHFETime);
		
		
		//strUserLogin += "\tDCETime \n";
		//strUserLogin += string(pRspUserLogin->DCETime);
		//printf("\tDCETime [%s]\n", pRspUserLogin->DCETime);
		
		
		
		//strUserLogin += "\tCZCETime \n";
		//strUserLogin += string(pRspUserLogin->CZCETime);
		//printf("\tCZCETime [%s]\n", pRspUserLogin->CZCETime);
		
		
		
		//strUserLogin += "\tFFEXTime \n";
		//strUserLogin += string(pRspUserLogin->FFEXTime);
		//printf("\tFFEXTime [%s]\n", pRspUserLogin->FFEXTime);
		


		
		//strUserLogin += "\tINETime \n";
		//strUserLogin += string(pRspUserLogin->INETime);
		//printf("\tINETime [%s]\n", pRspUserLogin->INETime);
		
		
		
		//strUserLogin += "\tFrontID \n";
		//char cFrontID[30] = { 0 };
		//_itoa(pRspUserLogin->FrontID, cFrontID, 10);
		//strUserLogin += string(cFrontID);
		//printf("\tFrontID [%d]\n", pRspUserLogin->FrontID);
		
		
		//strUserLogin += "\tSessionID \n";
		//char cSessionID[30] = { 0 };
		//_itoa(pRspUserLogin->SessionID, cSessionID, 10);
		//strUserLogin += string(cSessionID);		
		//printf("\tSessionID [%d]\n", pRspUserLogin->SessionID);






	}
	if (pRspInfo)
	{
		//strUserLogin += "\tErrorMsg \n";
		//strUserLogin += string(pRspInfo->ErrorMsg);
		//printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		
		
		
		//strUserLogin += "\tErrorID \n";

		//char cErrorID[30] = { 0 };
		//_itoa(pRspInfo->ErrorID, cErrorID, 10);
		////strUserLogin += string(cErrorID);
	
		//printf("\tErrorID [%d]\n", pRspInfo->ErrorID);

		

	}

	//strUserLogin += "\tnRequestID \n";
	//strUserLogin += string(nRequestID);
	//printf("\tnRequestID [%d]\n", nRequestID);
	
	//strUserLogin += "\tbIsLast \n";
	//strUserLogin += string(bIsLast);
	//printf("\tbIsLast [%d]\n", bIsLast);
	
	
	//strUserLogin += "</OnRspUserLogin>\n";
	//printf("</OnRspUserLogin>\n");

	//PARAMTOCHARTS  *pa = new PARAMTOCHARTS;
	//pa->dwprice = 0;
	//pa->nGap = 0;
	//pa->nIndex = 0;
	//pa->strMessage = strUserLogin;
	//PostMessageToDlg(*pa);

};

void CTraderSpi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspUserLogout>\n");
	if (pUserLogout)
	{
		printf("\tBrokerID [%s]\n", pUserLogout->BrokerID);
		printf("\tUserID [%s]\n", pUserLogout->UserID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspUserLogout>\n");
};

void CTraderSpi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspUserPasswordUpdate>\n");
	if (pUserPasswordUpdate)
	{
		printf("\tBrokerID [%s]\n", pUserPasswordUpdate->BrokerID);
		printf("\tUserID [%s]\n", pUserPasswordUpdate->UserID);
		printf("\tOldPassword [%s]\n", pUserPasswordUpdate->OldPassword);
		printf("\tNewPassword [%s]\n", pUserPasswordUpdate->NewPassword);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspUserPasswordUpdate>\n");
};

void CTraderSpi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspTradingAccountPasswordUpdate>\n");
	if (pTradingAccountPasswordUpdate)
	{
		printf("\tBrokerID [%s]\n", pTradingAccountPasswordUpdate->BrokerID);
		printf("\tAccountID [%s]\n", pTradingAccountPasswordUpdate->AccountID);
		printf("\tOldPassword [%s]\n", pTradingAccountPasswordUpdate->OldPassword);
		printf("\tNewPassword [%s]\n", pTradingAccountPasswordUpdate->NewPassword);
		printf("\tCurrencyID [%s]\n", pTradingAccountPasswordUpdate->CurrencyID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspTradingAccountPasswordUpdate>\n");
};

void CTraderSpi::OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspUserAuthMethod>\n");
	if (pRspUserAuthMethod)
	{
		printf("\tUsableAuthMethod [%d]\n", pRspUserAuthMethod->UsableAuthMethod);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspUserAuthMethod>\n");
};

void CTraderSpi::OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspGenUserCaptcha>\n");
	if (pRspGenUserCaptcha)
	{
		printf("\tBrokerID [%s]\n", pRspGenUserCaptcha->BrokerID);
		printf("\tUserID [%s]\n", pRspGenUserCaptcha->UserID);
		printf("\tCaptchaInfo [%s]\n", pRspGenUserCaptcha->CaptchaInfo);
		printf("\tCaptchaInfoLen [%d]\n", pRspGenUserCaptcha->CaptchaInfoLen);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspGenUserCaptcha>\n");
};

void CTraderSpi::OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspGenUserText>\n");
	if (pRspGenUserText)
	{
		printf("\tUserTextSeq [%d]\n", pRspGenUserText->UserTextSeq);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspGenUserText>\n");
};

void CTraderSpi::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspOrderInsert>\n");
	if (pInputOrder)
	{
		printf("\tBrokerID [%s]\n", pInputOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pInputOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputOrder->InstrumentID);
		printf("\tOrderRef [%s]\n", pInputOrder->OrderRef);
		printf("\tUserID [%s]\n", pInputOrder->UserID);
		printf("\tCombOffsetFlag [%s]\n", pInputOrder->CombOffsetFlag);
		printf("\tCombHedgeFlag [%s]\n", pInputOrder->CombHedgeFlag);
		printf("\tGTDDate [%s]\n", pInputOrder->GTDDate);
		printf("\tBusinessUnit [%s]\n", pInputOrder->BusinessUnit);
		printf("\tExchangeID [%s]\n", pInputOrder->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pInputOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pInputOrder->CurrencyID);
		printf("\tClientID [%s]\n", pInputOrder->ClientID);
		printf("\tIPAddress [%s]\n", pInputOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pInputOrder->MacAddress);
		printf("\tVolumeTotalOriginal [%d]\n", pInputOrder->VolumeTotalOriginal);
		printf("\tMinVolume [%d]\n", pInputOrder->MinVolume);
		printf("\tIsAutoSuspend [%d]\n", pInputOrder->IsAutoSuspend);
		printf("\tRequestID [%d]\n", pInputOrder->RequestID);
		printf("\tUserForceClose [%d]\n", pInputOrder->UserForceClose);
		printf("\tIsSwapOrder [%d]\n", pInputOrder->IsSwapOrder);
		printf("\tOrderPriceType [%c]\n", pInputOrder->OrderPriceType);
		printf("\tDirection [%c]\n", pInputOrder->Direction);
		printf("\tTimeCondition [%c]\n", pInputOrder->TimeCondition);
		printf("\tVolumeCondition [%c]\n", pInputOrder->VolumeCondition);
		printf("\tContingentCondition [%c]\n", pInputOrder->ContingentCondition);
		printf("\tForceCloseReason [%c]\n", pInputOrder->ForceCloseReason);
		printf("\tLimitPrice [%.8lf]\n", pInputOrder->LimitPrice);
		printf("\tStopPrice [%.8lf]\n", pInputOrder->StopPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspOrderInsert>\n");
};

void CTraderSpi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspParkedOrderInsert>\n");
	if (pParkedOrder)
	{
		printf("\tBrokerID [%s]\n", pParkedOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pParkedOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pParkedOrder->InstrumentID);
		printf("\tOrderRef [%s]\n", pParkedOrder->OrderRef);
		printf("\tUserID [%s]\n", pParkedOrder->UserID);
		printf("\tCombOffsetFlag [%s]\n", pParkedOrder->CombOffsetFlag);
		printf("\tCombHedgeFlag [%s]\n", pParkedOrder->CombHedgeFlag);
		printf("\tGTDDate [%s]\n", pParkedOrder->GTDDate);
		printf("\tBusinessUnit [%s]\n", pParkedOrder->BusinessUnit);
		printf("\tExchangeID [%s]\n", pParkedOrder->ExchangeID);
		printf("\tParkedOrderID [%s]\n", pParkedOrder->ParkedOrderID);
		printf("\tErrorMsg [%s]\n", pParkedOrder->ErrorMsg);
		printf("\tAccountID [%s]\n", pParkedOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pParkedOrder->CurrencyID);
		printf("\tClientID [%s]\n", pParkedOrder->ClientID);
		printf("\tInvestUnitID [%s]\n", pParkedOrder->InvestUnitID);
		printf("\tIPAddress [%s]\n", pParkedOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pParkedOrder->MacAddress);
		printf("\tVolumeTotalOriginal [%d]\n", pParkedOrder->VolumeTotalOriginal);
		printf("\tMinVolume [%d]\n", pParkedOrder->MinVolume);
		printf("\tIsAutoSuspend [%d]\n", pParkedOrder->IsAutoSuspend);
		printf("\tRequestID [%d]\n", pParkedOrder->RequestID);
		printf("\tUserForceClose [%d]\n", pParkedOrder->UserForceClose);
		printf("\tErrorID [%d]\n", pParkedOrder->ErrorID);
		printf("\tIsSwapOrder [%d]\n", pParkedOrder->IsSwapOrder);
		printf("\tOrderPriceType [%c]\n", pParkedOrder->OrderPriceType);
		printf("\tDirection [%c]\n", pParkedOrder->Direction);
		printf("\tTimeCondition [%c]\n", pParkedOrder->TimeCondition);
		printf("\tVolumeCondition [%c]\n", pParkedOrder->VolumeCondition);
		printf("\tContingentCondition [%c]\n", pParkedOrder->ContingentCondition);
		printf("\tForceCloseReason [%c]\n", pParkedOrder->ForceCloseReason);
		printf("\tUserType [%c]\n", pParkedOrder->UserType);
		printf("\tStatus [%c]\n", pParkedOrder->Status);
		printf("\tLimitPrice [%.8lf]\n", pParkedOrder->LimitPrice);
		printf("\tStopPrice [%.8lf]\n", pParkedOrder->StopPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspParkedOrderInsert>\n");
};

void CTraderSpi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspParkedOrderAction>\n");
	if (pParkedOrderAction)
	{
		printf("\tBrokerID [%s]\n", pParkedOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pParkedOrderAction->InvestorID);
		printf("\tOrderRef [%s]\n", pParkedOrderAction->OrderRef);
		printf("\tExchangeID [%s]\n", pParkedOrderAction->ExchangeID);
		printf("\tOrderSysID [%s]\n", pParkedOrderAction->OrderSysID);
		printf("\tUserID [%s]\n", pParkedOrderAction->UserID);
		printf("\tInstrumentID [%s]\n", pParkedOrderAction->InstrumentID);
		printf("\tParkedOrderActionID [%s]\n", pParkedOrderAction->ParkedOrderActionID);
		printf("\tErrorMsg [%s]\n", pParkedOrderAction->ErrorMsg);
		printf("\tInvestUnitID [%s]\n", pParkedOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pParkedOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pParkedOrderAction->MacAddress);
		printf("\tOrderActionRef [%d]\n", pParkedOrderAction->OrderActionRef);
		printf("\tRequestID [%d]\n", pParkedOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pParkedOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pParkedOrderAction->SessionID);
		printf("\tVolumeChange [%d]\n", pParkedOrderAction->VolumeChange);
		printf("\tErrorID [%d]\n", pParkedOrderAction->ErrorID);
		printf("\tActionFlag [%c]\n", pParkedOrderAction->ActionFlag);
		printf("\tUserType [%c]\n", pParkedOrderAction->UserType);
		printf("\tStatus [%c]\n", pParkedOrderAction->Status);
		printf("\tLimitPrice [%.8lf]\n", pParkedOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspParkedOrderAction>\n");
};

void CTraderSpi::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspOrderAction>\n");
	if (pInputOrderAction)
	{
		printf("\tBrokerID [%s]\n", pInputOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pInputOrderAction->InvestorID);
		printf("\tOrderRef [%s]\n", pInputOrderAction->OrderRef);
		printf("\tExchangeID [%s]\n", pInputOrderAction->ExchangeID);
		printf("\tOrderSysID [%s]\n", pInputOrderAction->OrderSysID);
		printf("\tUserID [%s]\n", pInputOrderAction->UserID);
		printf("\tInstrumentID [%s]\n", pInputOrderAction->InstrumentID);
		printf("\tInvestUnitID [%s]\n", pInputOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pInputOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pInputOrderAction->MacAddress);
		printf("\tOrderActionRef [%d]\n", pInputOrderAction->OrderActionRef);
		printf("\tRequestID [%d]\n", pInputOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pInputOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pInputOrderAction->SessionID);
		printf("\tVolumeChange [%d]\n", pInputOrderAction->VolumeChange);
		printf("\tActionFlag [%c]\n", pInputOrderAction->ActionFlag);
		printf("\tLimitPrice [%.8lf]\n", pInputOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspOrderAction>\n");
};

void CTraderSpi::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQueryMaxOrderVolume>\n");
	if (pQueryMaxOrderVolume)
	{
		printf("\tBrokerID [%s]\n", pQueryMaxOrderVolume->BrokerID);
		printf("\tInvestorID [%s]\n", pQueryMaxOrderVolume->InvestorID);
		printf("\tInstrumentID [%s]\n", pQueryMaxOrderVolume->InstrumentID);
		printf("\tExchangeID [%s]\n", pQueryMaxOrderVolume->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pQueryMaxOrderVolume->InvestUnitID);
		printf("\tMaxVolume [%d]\n", pQueryMaxOrderVolume->MaxVolume);
		printf("\tDirection [%c]\n", pQueryMaxOrderVolume->Direction);
		printf("\tOffsetFlag [%c]\n", pQueryMaxOrderVolume->OffsetFlag);
		printf("\tHedgeFlag [%c]\n", pQueryMaxOrderVolume->HedgeFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQueryMaxOrderVolume>\n");
};

void CTraderSpi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspSettlementInfoConfirm>\n");
	if (pSettlementInfoConfirm)
	{
		printf("\tBrokerID [%s]\n", pSettlementInfoConfirm->BrokerID);
		printf("\tInvestorID [%s]\n", pSettlementInfoConfirm->InvestorID);
		printf("\tConfirmDate [%s]\n", pSettlementInfoConfirm->ConfirmDate);
		printf("\tConfirmTime [%s]\n", pSettlementInfoConfirm->ConfirmTime);
		printf("\tAccountID [%s]\n", pSettlementInfoConfirm->AccountID);
		printf("\tCurrencyID [%s]\n", pSettlementInfoConfirm->CurrencyID);
		printf("\tSettlementID [%d]\n", pSettlementInfoConfirm->SettlementID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspSettlementInfoConfirm>\n");
};

void CTraderSpi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspRemoveParkedOrder>\n");
	if (pRemoveParkedOrder)
	{
		printf("\tBrokerID [%s]\n", pRemoveParkedOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pRemoveParkedOrder->InvestorID);
		printf("\tParkedOrderID [%s]\n", pRemoveParkedOrder->ParkedOrderID);
		printf("\tInvestUnitID [%s]\n", pRemoveParkedOrder->InvestUnitID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspRemoveParkedOrder>\n");
};

void CTraderSpi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspRemoveParkedOrderAction>\n");
	if (pRemoveParkedOrderAction)
	{
		printf("\tBrokerID [%s]\n", pRemoveParkedOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pRemoveParkedOrderAction->InvestorID);
		printf("\tParkedOrderActionID [%s]\n", pRemoveParkedOrderAction->ParkedOrderActionID);
		printf("\tInvestUnitID [%s]\n", pRemoveParkedOrderAction->InvestUnitID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspRemoveParkedOrderAction>\n");
};

void CTraderSpi::OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspExecOrderInsert>\n");
	if (pInputExecOrder)
	{
		printf("\tBrokerID [%s]\n", pInputExecOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pInputExecOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputExecOrder->InstrumentID);
		printf("\tExecOrderRef [%s]\n", pInputExecOrder->ExecOrderRef);
		printf("\tUserID [%s]\n", pInputExecOrder->UserID);
		printf("\tBusinessUnit [%s]\n", pInputExecOrder->BusinessUnit);
		printf("\tExchangeID [%s]\n", pInputExecOrder->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputExecOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pInputExecOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pInputExecOrder->CurrencyID);
		printf("\tClientID [%s]\n", pInputExecOrder->ClientID);
		printf("\tIPAddress [%s]\n", pInputExecOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pInputExecOrder->MacAddress);
		printf("\tVolume [%d]\n", pInputExecOrder->Volume);
		printf("\tRequestID [%d]\n", pInputExecOrder->RequestID);
		printf("\tOffsetFlag [%c]\n", pInputExecOrder->OffsetFlag);
		printf("\tHedgeFlag [%c]\n", pInputExecOrder->HedgeFlag);
		printf("\tActionType [%c]\n", pInputExecOrder->ActionType);
		printf("\tPosiDirection [%c]\n", pInputExecOrder->PosiDirection);
		printf("\tReservePositionFlag [%c]\n", pInputExecOrder->ReservePositionFlag);
		printf("\tCloseFlag [%c]\n", pInputExecOrder->CloseFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspExecOrderInsert>\n");
};

void CTraderSpi::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspExecOrderAction>\n");
	if (pInputExecOrderAction)
	{
		printf("\tBrokerID [%s]\n", pInputExecOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pInputExecOrderAction->InvestorID);
		printf("\tExecOrderRef [%s]\n", pInputExecOrderAction->ExecOrderRef);
		printf("\tExchangeID [%s]\n", pInputExecOrderAction->ExchangeID);
		printf("\tExecOrderSysID [%s]\n", pInputExecOrderAction->ExecOrderSysID);
		printf("\tUserID [%s]\n", pInputExecOrderAction->UserID);
		printf("\tInstrumentID [%s]\n", pInputExecOrderAction->InstrumentID);
		printf("\tInvestUnitID [%s]\n", pInputExecOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pInputExecOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pInputExecOrderAction->MacAddress);
		printf("\tExecOrderActionRef [%d]\n", pInputExecOrderAction->ExecOrderActionRef);
		printf("\tRequestID [%d]\n", pInputExecOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pInputExecOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pInputExecOrderAction->SessionID);
		printf("\tActionFlag [%c]\n", pInputExecOrderAction->ActionFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspExecOrderAction>\n");
};

void CTraderSpi::OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspForQuoteInsert>\n");
	if (pInputForQuote)
	{
		printf("\tBrokerID [%s]\n", pInputForQuote->BrokerID);
		printf("\tInvestorID [%s]\n", pInputForQuote->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputForQuote->InstrumentID);
		printf("\tForQuoteRef [%s]\n", pInputForQuote->ForQuoteRef);
		printf("\tUserID [%s]\n", pInputForQuote->UserID);
		printf("\tExchangeID [%s]\n", pInputForQuote->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputForQuote->InvestUnitID);
		printf("\tIPAddress [%s]\n", pInputForQuote->IPAddress);
		printf("\tMacAddress [%s]\n", pInputForQuote->MacAddress);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspForQuoteInsert>\n");
};

void CTraderSpi::OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQuoteInsert>\n");
	if (pInputQuote)
	{
		printf("\tBrokerID [%s]\n", pInputQuote->BrokerID);
		printf("\tInvestorID [%s]\n", pInputQuote->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputQuote->InstrumentID);
		printf("\tQuoteRef [%s]\n", pInputQuote->QuoteRef);
		printf("\tUserID [%s]\n", pInputQuote->UserID);
		printf("\tBusinessUnit [%s]\n", pInputQuote->BusinessUnit);
		printf("\tAskOrderRef [%s]\n", pInputQuote->AskOrderRef);
		printf("\tBidOrderRef [%s]\n", pInputQuote->BidOrderRef);
		printf("\tForQuoteSysID [%s]\n", pInputQuote->ForQuoteSysID);
		printf("\tExchangeID [%s]\n", pInputQuote->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputQuote->InvestUnitID);
		printf("\tClientID [%s]\n", pInputQuote->ClientID);
		printf("\tIPAddress [%s]\n", pInputQuote->IPAddress);
		printf("\tMacAddress [%s]\n", pInputQuote->MacAddress);
		printf("\tAskVolume [%d]\n", pInputQuote->AskVolume);
		printf("\tBidVolume [%d]\n", pInputQuote->BidVolume);
		printf("\tRequestID [%d]\n", pInputQuote->RequestID);
		printf("\tAskOffsetFlag [%c]\n", pInputQuote->AskOffsetFlag);
		printf("\tBidOffsetFlag [%c]\n", pInputQuote->BidOffsetFlag);
		printf("\tAskHedgeFlag [%c]\n", pInputQuote->AskHedgeFlag);
		printf("\tBidHedgeFlag [%c]\n", pInputQuote->BidHedgeFlag);
		printf("\tAskPrice [%.8lf]\n", pInputQuote->AskPrice);
		printf("\tBidPrice [%.8lf]\n", pInputQuote->BidPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQuoteInsert>\n");
};

void CTraderSpi::OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQuoteAction>\n");
	if (pInputQuoteAction)
	{
		printf("\tBrokerID [%s]\n", pInputQuoteAction->BrokerID);
		printf("\tInvestorID [%s]\n", pInputQuoteAction->InvestorID);
		printf("\tQuoteRef [%s]\n", pInputQuoteAction->QuoteRef);
		printf("\tExchangeID [%s]\n", pInputQuoteAction->ExchangeID);
		printf("\tQuoteSysID [%s]\n", pInputQuoteAction->QuoteSysID);
		printf("\tUserID [%s]\n", pInputQuoteAction->UserID);
		printf("\tInstrumentID [%s]\n", pInputQuoteAction->InstrumentID);
		printf("\tInvestUnitID [%s]\n", pInputQuoteAction->InvestUnitID);
		printf("\tClientID [%s]\n", pInputQuoteAction->ClientID);
		printf("\tIPAddress [%s]\n", pInputQuoteAction->IPAddress);
		printf("\tMacAddress [%s]\n", pInputQuoteAction->MacAddress);
		printf("\tQuoteActionRef [%d]\n", pInputQuoteAction->QuoteActionRef);
		printf("\tRequestID [%d]\n", pInputQuoteAction->RequestID);
		printf("\tFrontID [%d]\n", pInputQuoteAction->FrontID);
		printf("\tSessionID [%d]\n", pInputQuoteAction->SessionID);
		printf("\tActionFlag [%c]\n", pInputQuoteAction->ActionFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQuoteAction>\n");
};

void CTraderSpi::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspBatchOrderAction>\n");
	if (pInputBatchOrderAction)
	{
		printf("\tBrokerID [%s]\n", pInputBatchOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pInputBatchOrderAction->InvestorID);
		printf("\tExchangeID [%s]\n", pInputBatchOrderAction->ExchangeID);
		printf("\tUserID [%s]\n", pInputBatchOrderAction->UserID);
		printf("\tInvestUnitID [%s]\n", pInputBatchOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pInputBatchOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pInputBatchOrderAction->MacAddress);
		printf("\tOrderActionRef [%d]\n", pInputBatchOrderAction->OrderActionRef);
		printf("\tRequestID [%d]\n", pInputBatchOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pInputBatchOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pInputBatchOrderAction->SessionID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspBatchOrderAction>\n");
};

void CTraderSpi::OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspOptionSelfCloseInsert>\n");
	if (pInputOptionSelfClose)
	{
		printf("\tBrokerID [%s]\n", pInputOptionSelfClose->BrokerID);
		printf("\tInvestorID [%s]\n", pInputOptionSelfClose->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputOptionSelfClose->InstrumentID);
		printf("\tOptionSelfCloseRef [%s]\n", pInputOptionSelfClose->OptionSelfCloseRef);
		printf("\tUserID [%s]\n", pInputOptionSelfClose->UserID);
		printf("\tBusinessUnit [%s]\n", pInputOptionSelfClose->BusinessUnit);
		printf("\tExchangeID [%s]\n", pInputOptionSelfClose->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputOptionSelfClose->InvestUnitID);
		printf("\tAccountID [%s]\n", pInputOptionSelfClose->AccountID);
		printf("\tCurrencyID [%s]\n", pInputOptionSelfClose->CurrencyID);
		printf("\tClientID [%s]\n", pInputOptionSelfClose->ClientID);
		printf("\tIPAddress [%s]\n", pInputOptionSelfClose->IPAddress);
		printf("\tMacAddress [%s]\n", pInputOptionSelfClose->MacAddress);
		printf("\tVolume [%d]\n", pInputOptionSelfClose->Volume);
		printf("\tRequestID [%d]\n", pInputOptionSelfClose->RequestID);
		printf("\tHedgeFlag [%c]\n", pInputOptionSelfClose->HedgeFlag);
		printf("\tOptSelfCloseFlag [%c]\n", pInputOptionSelfClose->OptSelfCloseFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspOptionSelfCloseInsert>\n");
};

void CTraderSpi::OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspOptionSelfCloseAction>\n");
	if (pInputOptionSelfCloseAction)
	{
		printf("\tBrokerID [%s]\n", pInputOptionSelfCloseAction->BrokerID);
		printf("\tInvestorID [%s]\n", pInputOptionSelfCloseAction->InvestorID);
		printf("\tOptionSelfCloseRef [%s]\n", pInputOptionSelfCloseAction->OptionSelfCloseRef);
		printf("\tExchangeID [%s]\n", pInputOptionSelfCloseAction->ExchangeID);
		printf("\tOptionSelfCloseSysID [%s]\n", pInputOptionSelfCloseAction->OptionSelfCloseSysID);
		printf("\tUserID [%s]\n", pInputOptionSelfCloseAction->UserID);
		printf("\tInstrumentID [%s]\n", pInputOptionSelfCloseAction->InstrumentID);
		printf("\tInvestUnitID [%s]\n", pInputOptionSelfCloseAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pInputOptionSelfCloseAction->IPAddress);
		printf("\tMacAddress [%s]\n", pInputOptionSelfCloseAction->MacAddress);
		printf("\tOptionSelfCloseActionRef [%d]\n", pInputOptionSelfCloseAction->OptionSelfCloseActionRef);
		printf("\tRequestID [%d]\n", pInputOptionSelfCloseAction->RequestID);
		printf("\tFrontID [%d]\n", pInputOptionSelfCloseAction->FrontID);
		printf("\tSessionID [%d]\n", pInputOptionSelfCloseAction->SessionID);
		printf("\tActionFlag [%c]\n", pInputOptionSelfCloseAction->ActionFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspOptionSelfCloseAction>\n");
};

void CTraderSpi::OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspCombActionInsert>\n");
	if (pInputCombAction)
	{
		printf("\tBrokerID [%s]\n", pInputCombAction->BrokerID);
		printf("\tInvestorID [%s]\n", pInputCombAction->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputCombAction->InstrumentID);
		printf("\tCombActionRef [%s]\n", pInputCombAction->CombActionRef);
		printf("\tUserID [%s]\n", pInputCombAction->UserID);
		printf("\tExchangeID [%s]\n", pInputCombAction->ExchangeID);
		printf("\tIPAddress [%s]\n", pInputCombAction->IPAddress);
		printf("\tMacAddress [%s]\n", pInputCombAction->MacAddress);
		printf("\tInvestUnitID [%s]\n", pInputCombAction->InvestUnitID);
		printf("\tVolume [%d]\n", pInputCombAction->Volume);
		printf("\tDirection [%c]\n", pInputCombAction->Direction);
		printf("\tCombDirection [%c]\n", pInputCombAction->CombDirection);
		printf("\tHedgeFlag [%c]\n", pInputCombAction->HedgeFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspCombActionInsert>\n");
};

void CTraderSpi::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryOrder>\n");
	if (pOrder)
	{
		printf("\tBrokerID [%s]\n", pOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pOrder->InstrumentID);
		printf("\tOrderRef [%s]\n", pOrder->OrderRef);
		printf("\tUserID [%s]\n", pOrder->UserID);
		printf("\tCombOffsetFlag [%s]\n", pOrder->CombOffsetFlag);
		printf("\tCombHedgeFlag [%s]\n", pOrder->CombHedgeFlag);
		printf("\tGTDDate [%s]\n", pOrder->GTDDate);
		printf("\tBusinessUnit [%s]\n", pOrder->BusinessUnit);
		printf("\tOrderLocalID [%s]\n", pOrder->OrderLocalID);
		printf("\tExchangeID [%s]\n", pOrder->ExchangeID);
		printf("\tParticipantID [%s]\n", pOrder->ParticipantID);
		printf("\tClientID [%s]\n", pOrder->ClientID);
		printf("\tExchangeInstID [%s]\n", pOrder->ExchangeInstID);
		printf("\tTraderID [%s]\n", pOrder->TraderID);
		printf("\tTradingDay [%s]\n", pOrder->TradingDay);
		printf("\tOrderSysID [%s]\n", pOrder->OrderSysID);
		printf("\tInsertDate [%s]\n", pOrder->InsertDate);
		printf("\tInsertTime [%s]\n", pOrder->InsertTime);
		printf("\tActiveTime [%s]\n", pOrder->ActiveTime);
		printf("\tSuspendTime [%s]\n", pOrder->SuspendTime);
		printf("\tUpdateTime [%s]\n", pOrder->UpdateTime);
		printf("\tCancelTime [%s]\n", pOrder->CancelTime);
		printf("\tActiveTraderID [%s]\n", pOrder->ActiveTraderID);
		printf("\tClearingPartID [%s]\n", pOrder->ClearingPartID);
		printf("\tUserProductInfo [%s]\n", pOrder->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pOrder->StatusMsg);
		printf("\tActiveUserID [%s]\n", pOrder->ActiveUserID);
		printf("\tRelativeOrderSysID [%s]\n", pOrder->RelativeOrderSysID);
		printf("\tBranchID [%s]\n", pOrder->BranchID);
		printf("\tInvestUnitID [%s]\n", pOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pOrder->CurrencyID);
		printf("\tIPAddress [%s]\n", pOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pOrder->MacAddress);
		printf("\tVolumeTotalOriginal [%d]\n", pOrder->VolumeTotalOriginal);
		printf("\tMinVolume [%d]\n", pOrder->MinVolume);
		printf("\tIsAutoSuspend [%d]\n", pOrder->IsAutoSuspend);
		printf("\tRequestID [%d]\n", pOrder->RequestID);
		printf("\tInstallID [%d]\n", pOrder->InstallID);
		printf("\tNotifySequence [%d]\n", pOrder->NotifySequence);
		printf("\tSettlementID [%d]\n", pOrder->SettlementID);
		printf("\tVolumeTraded [%d]\n", pOrder->VolumeTraded);
		printf("\tVolumeTotal [%d]\n", pOrder->VolumeTotal);
		printf("\tSequenceNo [%d]\n", pOrder->SequenceNo);
		printf("\tFrontID [%d]\n", pOrder->FrontID);
		printf("\tSessionID [%d]\n", pOrder->SessionID);
		printf("\tUserForceClose [%d]\n", pOrder->UserForceClose);
		printf("\tBrokerOrderSeq [%d]\n", pOrder->BrokerOrderSeq);
		printf("\tZCETotalTradedVolume [%d]\n", pOrder->ZCETotalTradedVolume);
		printf("\tIsSwapOrder [%d]\n", pOrder->IsSwapOrder);
		printf("\tOrderPriceType [%c]\n", pOrder->OrderPriceType);
		printf("\tDirection [%c]\n", pOrder->Direction);
		printf("\tTimeCondition [%c]\n", pOrder->TimeCondition);
		printf("\tVolumeCondition [%c]\n", pOrder->VolumeCondition);
		printf("\tContingentCondition [%c]\n", pOrder->ContingentCondition);
		printf("\tForceCloseReason [%c]\n", pOrder->ForceCloseReason);
		printf("\tOrderSubmitStatus [%c]\n", pOrder->OrderSubmitStatus);
		printf("\tOrderSource [%c]\n", pOrder->OrderSource);
		printf("\tOrderStatus [%c]\n", pOrder->OrderStatus);
		printf("\tOrderType [%c]\n", pOrder->OrderType);
		printf("\tLimitPrice [%.8lf]\n", pOrder->LimitPrice);
		printf("\tStopPrice [%.8lf]\n", pOrder->StopPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryOrder>\n");
};

void CTraderSpi::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryTrade>\n");
	if (pTrade)
	{
		printf("\tBrokerID [%s]\n", pTrade->BrokerID);
		printf("\tInvestorID [%s]\n", pTrade->InvestorID);
		printf("\tInstrumentID [%s]\n", pTrade->InstrumentID);
		printf("\tOrderRef [%s]\n", pTrade->OrderRef);
		printf("\tUserID [%s]\n", pTrade->UserID);
		printf("\tExchangeID [%s]\n", pTrade->ExchangeID);
		printf("\tTradeID [%s]\n", pTrade->TradeID);
		printf("\tOrderSysID [%s]\n", pTrade->OrderSysID);
		printf("\tParticipantID [%s]\n", pTrade->ParticipantID);
		printf("\tClientID [%s]\n", pTrade->ClientID);
		printf("\tExchangeInstID [%s]\n", pTrade->ExchangeInstID);
		printf("\tTradeDate [%s]\n", pTrade->TradeDate);
		printf("\tTradeTime [%s]\n", pTrade->TradeTime);
		printf("\tTraderID [%s]\n", pTrade->TraderID);
		printf("\tOrderLocalID [%s]\n", pTrade->OrderLocalID);
		printf("\tClearingPartID [%s]\n", pTrade->ClearingPartID);
		printf("\tBusinessUnit [%s]\n", pTrade->BusinessUnit);
		printf("\tTradingDay [%s]\n", pTrade->TradingDay);
		printf("\tInvestUnitID [%s]\n", pTrade->InvestUnitID);
		printf("\tVolume [%d]\n", pTrade->Volume);
		printf("\tSequenceNo [%d]\n", pTrade->SequenceNo);
		printf("\tSettlementID [%d]\n", pTrade->SettlementID);
		printf("\tBrokerOrderSeq [%d]\n", pTrade->BrokerOrderSeq);
		printf("\tDirection [%c]\n", pTrade->Direction);
		printf("\tTradingRole [%c]\n", pTrade->TradingRole);
		printf("\tOffsetFlag [%c]\n", pTrade->OffsetFlag);
		printf("\tHedgeFlag [%c]\n", pTrade->HedgeFlag);
		printf("\tTradeType [%c]\n", pTrade->TradeType);
		printf("\tPriceSource [%c]\n", pTrade->PriceSource);
		printf("\tTradeSource [%c]\n", pTrade->TradeSource);
		printf("\tPrice [%.8lf]\n", pTrade->Price);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryTrade>\n");
};

void CTraderSpi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInvestorPosition>\n");
	if (pInvestorPosition)
	{
		printf("\tInstrumentID [%s]\n", pInvestorPosition->InstrumentID);
		printf("\tBrokerID [%s]\n", pInvestorPosition->BrokerID);
		printf("\tInvestorID [%s]\n", pInvestorPosition->InvestorID);
		printf("\tTradingDay [%s]\n", pInvestorPosition->TradingDay);
		printf("\tExchangeID [%s]\n", pInvestorPosition->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInvestorPosition->InvestUnitID);
		printf("\tYdPosition [%d]\n", pInvestorPosition->YdPosition);
		printf("\tPosition [%d]\n", pInvestorPosition->Position);
		printf("\tLongFrozen [%d]\n", pInvestorPosition->LongFrozen);
		printf("\tShortFrozen [%d]\n", pInvestorPosition->ShortFrozen);
		printf("\tOpenVolume [%d]\n", pInvestorPosition->OpenVolume);
		printf("\tCloseVolume [%d]\n", pInvestorPosition->CloseVolume);
		printf("\tSettlementID [%d]\n", pInvestorPosition->SettlementID);
		printf("\tCombPosition [%d]\n", pInvestorPosition->CombPosition);
		printf("\tCombLongFrozen [%d]\n", pInvestorPosition->CombLongFrozen);
		printf("\tCombShortFrozen [%d]\n", pInvestorPosition->CombShortFrozen);
		printf("\tTodayPosition [%d]\n", pInvestorPosition->TodayPosition);
		printf("\tStrikeFrozen [%d]\n", pInvestorPosition->StrikeFrozen);
		printf("\tAbandonFrozen [%d]\n", pInvestorPosition->AbandonFrozen);
		printf("\tYdStrikeFrozen [%d]\n", pInvestorPosition->YdStrikeFrozen);
		printf("\tPosiDirection [%c]\n", pInvestorPosition->PosiDirection);
		printf("\tHedgeFlag [%c]\n", pInvestorPosition->HedgeFlag);
		printf("\tPositionDate [%c]\n", pInvestorPosition->PositionDate);
		printf("\tLongFrozenAmount [%.8lf]\n", pInvestorPosition->LongFrozenAmount);
		printf("\tShortFrozenAmount [%.8lf]\n", pInvestorPosition->ShortFrozenAmount);
		printf("\tOpenAmount [%.8lf]\n", pInvestorPosition->OpenAmount);
		printf("\tCloseAmount [%.8lf]\n", pInvestorPosition->CloseAmount);
		printf("\tPositionCost [%.8lf]\n", pInvestorPosition->PositionCost);
		printf("\tPreMargin [%.8lf]\n", pInvestorPosition->PreMargin);
		printf("\tUseMargin [%.8lf]\n", pInvestorPosition->UseMargin);
		printf("\tFrozenMargin [%.8lf]\n", pInvestorPosition->FrozenMargin);
		printf("\tFrozenCash [%.8lf]\n", pInvestorPosition->FrozenCash);
		printf("\tFrozenCommission [%.8lf]\n", pInvestorPosition->FrozenCommission);
		printf("\tCashIn [%.8lf]\n", pInvestorPosition->CashIn);
		printf("\tCommission [%.8lf]\n", pInvestorPosition->Commission);
		printf("\tCloseProfit [%.8lf]\n", pInvestorPosition->CloseProfit);
		printf("\tPositionProfit [%.8lf]\n", pInvestorPosition->PositionProfit);
		printf("\tPreSettlementPrice [%.8lf]\n", pInvestorPosition->PreSettlementPrice);
		printf("\tSettlementPrice [%.8lf]\n", pInvestorPosition->SettlementPrice);
		printf("\tOpenCost [%.8lf]\n", pInvestorPosition->OpenCost);
		printf("\tExchangeMargin [%.8lf]\n", pInvestorPosition->ExchangeMargin);
		printf("\tCloseProfitByDate [%.8lf]\n", pInvestorPosition->CloseProfitByDate);
		printf("\tCloseProfitByTrade [%.8lf]\n", pInvestorPosition->CloseProfitByTrade);
		printf("\tMarginRateByMoney [%.8lf]\n", pInvestorPosition->MarginRateByMoney);
		printf("\tMarginRateByVolume [%.8lf]\n", pInvestorPosition->MarginRateByVolume);
		printf("\tStrikeFrozenAmount [%.8lf]\n", pInvestorPosition->StrikeFrozenAmount);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInvestorPosition>\n");
};

void CTraderSpi::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryTradingAccount>\n");
	if (pTradingAccount)
	{
		printf("\tBrokerID [%s]\n", pTradingAccount->BrokerID);
		printf("\tAccountID [%s]\n", pTradingAccount->AccountID);
		printf("\tTradingDay [%s]\n", pTradingAccount->TradingDay);
		printf("\tCurrencyID [%s]\n", pTradingAccount->CurrencyID);
		printf("\tSettlementID [%d]\n", pTradingAccount->SettlementID);
		printf("\tBizType [%c]\n", pTradingAccount->BizType);
		printf("\tPreMortgage [%.8lf]\n", pTradingAccount->PreMortgage);
		printf("\tPreCredit [%.8lf]\n", pTradingAccount->PreCredit);
		printf("\tPreDeposit [%.8lf]\n", pTradingAccount->PreDeposit);
		printf("\tPreBalance [%.8lf]\n", pTradingAccount->PreBalance);
		printf("\tPreMargin [%.8lf]\n", pTradingAccount->PreMargin);
		printf("\tInterestBase [%.8lf]\n", pTradingAccount->InterestBase);
		printf("\tInterest [%.8lf]\n", pTradingAccount->Interest);
		printf("\tDeposit [%.8lf]\n", pTradingAccount->Deposit);
		printf("\tWithdraw [%.8lf]\n", pTradingAccount->Withdraw);
		printf("\tFrozenMargin [%.8lf]\n", pTradingAccount->FrozenMargin);
		printf("\tFrozenCash [%.8lf]\n", pTradingAccount->FrozenCash);
		printf("\tFrozenCommission [%.8lf]\n", pTradingAccount->FrozenCommission);
		printf("\tCurrMargin [%.8lf]\n", pTradingAccount->CurrMargin);
		printf("\tCashIn [%.8lf]\n", pTradingAccount->CashIn);
		printf("\tCommission [%.8lf]\n", pTradingAccount->Commission);
		printf("\tCloseProfit [%.8lf]\n", pTradingAccount->CloseProfit);
		printf("\tPositionProfit [%.8lf]\n", pTradingAccount->PositionProfit);
		printf("\tBalance [%.8lf]\n", pTradingAccount->Balance);
		printf("\tAvailable [%.8lf]\n", pTradingAccount->Available);
		printf("\tWithdrawQuota [%.8lf]\n", pTradingAccount->WithdrawQuota);
		printf("\tReserve [%.8lf]\n", pTradingAccount->Reserve);
		printf("\tCredit [%.8lf]\n", pTradingAccount->Credit);
		printf("\tMortgage [%.8lf]\n", pTradingAccount->Mortgage);
		printf("\tExchangeMargin [%.8lf]\n", pTradingAccount->ExchangeMargin);
		printf("\tDeliveryMargin [%.8lf]\n", pTradingAccount->DeliveryMargin);
		printf("\tExchangeDeliveryMargin [%.8lf]\n", pTradingAccount->ExchangeDeliveryMargin);
		printf("\tReserveBalance [%.8lf]\n", pTradingAccount->ReserveBalance);
		printf("\tPreFundMortgageIn [%.8lf]\n", pTradingAccount->PreFundMortgageIn);
		printf("\tPreFundMortgageOut [%.8lf]\n", pTradingAccount->PreFundMortgageOut);
		printf("\tFundMortgageIn [%.8lf]\n", pTradingAccount->FundMortgageIn);
		printf("\tFundMortgageOut [%.8lf]\n", pTradingAccount->FundMortgageOut);
		printf("\tFundMortgageAvailable [%.8lf]\n", pTradingAccount->FundMortgageAvailable);
		printf("\tMortgageableFund [%.8lf]\n", pTradingAccount->MortgageableFund);
		printf("\tSpecProductMargin [%.8lf]\n", pTradingAccount->SpecProductMargin);
		printf("\tSpecProductFrozenMargin [%.8lf]\n", pTradingAccount->SpecProductFrozenMargin);
		printf("\tSpecProductCommission [%.8lf]\n", pTradingAccount->SpecProductCommission);
		printf("\tSpecProductFrozenCommission [%.8lf]\n", pTradingAccount->SpecProductFrozenCommission);
		printf("\tSpecProductPositionProfit [%.8lf]\n", pTradingAccount->SpecProductPositionProfit);
		printf("\tSpecProductCloseProfit [%.8lf]\n", pTradingAccount->SpecProductCloseProfit);
		printf("\tSpecProductPositionProfitByAlg [%.8lf]\n", pTradingAccount->SpecProductPositionProfitByAlg);
		printf("\tSpecProductExchangeMargin [%.8lf]\n", pTradingAccount->SpecProductExchangeMargin);
		printf("\tFrozenSwap [%.8lf]\n", pTradingAccount->FrozenSwap);
		printf("\tRemainSwap [%.8lf]\n", pTradingAccount->RemainSwap);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryTradingAccount>\n");
};

void CTraderSpi::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInvestor>\n");
	if (pInvestor)
	{
		printf("\tInvestorID [%s]\n", pInvestor->InvestorID);
		printf("\tBrokerID [%s]\n", pInvestor->BrokerID);
		printf("\tInvestorGroupID [%s]\n", pInvestor->InvestorGroupID);
		printf("\tInvestorName [%s]\n", pInvestor->InvestorName);
		printf("\tIdentifiedCardNo [%s]\n", pInvestor->IdentifiedCardNo);
		printf("\tTelephone [%s]\n", pInvestor->Telephone);
		printf("\tAddress [%s]\n", pInvestor->Address);
		printf("\tOpenDate [%s]\n", pInvestor->OpenDate);
		printf("\tMobile [%s]\n", pInvestor->Mobile);
		printf("\tCommModelID [%s]\n", pInvestor->CommModelID);
		printf("\tMarginModelID [%s]\n", pInvestor->MarginModelID);
		printf("\tIsActive [%d]\n", pInvestor->IsActive);
		printf("\tIdentifiedCardType [%c]\n", pInvestor->IdentifiedCardType);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInvestor>\n");
};

void CTraderSpi::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryTradingCode>\n");
	if (pTradingCode)
	{
		printf("\tInvestorID [%s]\n", pTradingCode->InvestorID);
		printf("\tBrokerID [%s]\n", pTradingCode->BrokerID);
		printf("\tExchangeID [%s]\n", pTradingCode->ExchangeID);
		printf("\tClientID [%s]\n", pTradingCode->ClientID);
		printf("\tBranchID [%s]\n", pTradingCode->BranchID);
		printf("\tInvestUnitID [%s]\n", pTradingCode->InvestUnitID);
		printf("\tIsActive [%d]\n", pTradingCode->IsActive);
		printf("\tClientIDType [%c]\n", pTradingCode->ClientIDType);
		printf("\tBizType [%c]\n", pTradingCode->BizType);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryTradingCode>\n");
};

void CTraderSpi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInstrumentMarginRate>\n");
	if (pInstrumentMarginRate)
	{
		printf("\tInstrumentID [%s]\n", pInstrumentMarginRate->InstrumentID);
		printf("\tBrokerID [%s]\n", pInstrumentMarginRate->BrokerID);
		printf("\tInvestorID [%s]\n", pInstrumentMarginRate->InvestorID);
		printf("\tExchangeID [%s]\n", pInstrumentMarginRate->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInstrumentMarginRate->InvestUnitID);
		printf("\tIsRelative [%d]\n", pInstrumentMarginRate->IsRelative);
		printf("\tInvestorRange [%c]\n", pInstrumentMarginRate->InvestorRange);
		printf("\tHedgeFlag [%c]\n", pInstrumentMarginRate->HedgeFlag);
		printf("\tLongMarginRatioByMoney [%.8lf]\n", pInstrumentMarginRate->LongMarginRatioByMoney);
		printf("\tLongMarginRatioByVolume [%.8lf]\n", pInstrumentMarginRate->LongMarginRatioByVolume);
		printf("\tShortMarginRatioByMoney [%.8lf]\n", pInstrumentMarginRate->ShortMarginRatioByMoney);
		printf("\tShortMarginRatioByVolume [%.8lf]\n", pInstrumentMarginRate->ShortMarginRatioByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInstrumentMarginRate>\n");
};

void CTraderSpi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInstrumentCommissionRate>\n");
	if (pInstrumentCommissionRate)
	{
		printf("\tInstrumentID [%s]\n", pInstrumentCommissionRate->InstrumentID);
		printf("\tBrokerID [%s]\n", pInstrumentCommissionRate->BrokerID);
		printf("\tInvestorID [%s]\n", pInstrumentCommissionRate->InvestorID);
		printf("\tExchangeID [%s]\n", pInstrumentCommissionRate->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInstrumentCommissionRate->InvestUnitID);
		printf("\tInvestorRange [%c]\n", pInstrumentCommissionRate->InvestorRange);
		printf("\tBizType [%c]\n", pInstrumentCommissionRate->BizType);
		printf("\tOpenRatioByMoney [%.8lf]\n", pInstrumentCommissionRate->OpenRatioByMoney);
		printf("\tOpenRatioByVolume [%.8lf]\n", pInstrumentCommissionRate->OpenRatioByVolume);
		printf("\tCloseRatioByMoney [%.8lf]\n", pInstrumentCommissionRate->CloseRatioByMoney);
		printf("\tCloseRatioByVolume [%.8lf]\n", pInstrumentCommissionRate->CloseRatioByVolume);
		printf("\tCloseTodayRatioByMoney [%.8lf]\n", pInstrumentCommissionRate->CloseTodayRatioByMoney);
		printf("\tCloseTodayRatioByVolume [%.8lf]\n", pInstrumentCommissionRate->CloseTodayRatioByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInstrumentCommissionRate>\n");
};

void CTraderSpi::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryExchange>\n");
	if (pExchange)
	{
		printf("\tExchangeID [%s]\n", pExchange->ExchangeID);
		printf("\tExchangeName [%s]\n", pExchange->ExchangeName);
		printf("\tExchangeProperty [%c]\n", pExchange->ExchangeProperty);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryExchange>\n");
};

void CTraderSpi::OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryProduct>\n");
	if (pProduct)
	{
		printf("\tProductID [%s]\n", pProduct->ProductID);
		printf("\tProductName [%s]\n", pProduct->ProductName);
		printf("\tExchangeID [%s]\n", pProduct->ExchangeID);
		printf("\tTradeCurrencyID [%s]\n", pProduct->TradeCurrencyID);
		printf("\tExchangeProductID [%s]\n", pProduct->ExchangeProductID);
		printf("\tVolumeMultiple [%d]\n", pProduct->VolumeMultiple);
		printf("\tMaxMarketOrderVolume [%d]\n", pProduct->MaxMarketOrderVolume);
		printf("\tMinMarketOrderVolume [%d]\n", pProduct->MinMarketOrderVolume);
		printf("\tMaxLimitOrderVolume [%d]\n", pProduct->MaxLimitOrderVolume);
		printf("\tMinLimitOrderVolume [%d]\n", pProduct->MinLimitOrderVolume);
		printf("\tProductClass [%c]\n", pProduct->ProductClass);
		printf("\tPositionType [%c]\n", pProduct->PositionType);
		printf("\tPositionDateType [%c]\n", pProduct->PositionDateType);
		printf("\tCloseDealType [%c]\n", pProduct->CloseDealType);
		printf("\tMortgageFundUseRange [%c]\n", pProduct->MortgageFundUseRange);
		printf("\tPriceTick [%.8lf]\n", pProduct->PriceTick);
		printf("\tUnderlyingMultiple [%.8lf]\n", pProduct->UnderlyingMultiple);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryProduct>\n");
};

void CTraderSpi::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInstrument>\n");
	if (pInstrument)
	{
		printf("\tInstrumentID [%s]\n", pInstrument->InstrumentID);
		printf("\tExchangeID [%s]\n", pInstrument->ExchangeID);
		printf("\tInstrumentName [%s]\n", pInstrument->InstrumentName);
		printf("\tExchangeInstID [%s]\n", pInstrument->ExchangeInstID);
		printf("\tProductID [%s]\n", pInstrument->ProductID);
		printf("\tCreateDate [%s]\n", pInstrument->CreateDate);
		printf("\tOpenDate [%s]\n", pInstrument->OpenDate);
		printf("\tExpireDate [%s]\n", pInstrument->ExpireDate);
		printf("\tStartDelivDate [%s]\n", pInstrument->StartDelivDate);
		printf("\tEndDelivDate [%s]\n", pInstrument->EndDelivDate);
		printf("\tUnderlyingInstrID [%s]\n", pInstrument->UnderlyingInstrID);
		printf("\tDeliveryYear [%d]\n", pInstrument->DeliveryYear);
		printf("\tDeliveryMonth [%d]\n", pInstrument->DeliveryMonth);
		printf("\tMaxMarketOrderVolume [%d]\n", pInstrument->MaxMarketOrderVolume);
		printf("\tMinMarketOrderVolume [%d]\n", pInstrument->MinMarketOrderVolume);
		printf("\tMaxLimitOrderVolume [%d]\n", pInstrument->MaxLimitOrderVolume);
		printf("\tMinLimitOrderVolume [%d]\n", pInstrument->MinLimitOrderVolume);
		printf("\tVolumeMultiple [%d]\n", pInstrument->VolumeMultiple);
		printf("\tIsTrading [%d]\n", pInstrument->IsTrading);
		printf("\tProductClass [%c]\n", pInstrument->ProductClass);
		printf("\tInstLifePhase [%c]\n", pInstrument->InstLifePhase);
		printf("\tPositionType [%c]\n", pInstrument->PositionType);
		printf("\tPositionDateType [%c]\n", pInstrument->PositionDateType);
		printf("\tMaxMarginSideAlgorithm [%c]\n", pInstrument->MaxMarginSideAlgorithm);
		printf("\tOptionsType [%c]\n", pInstrument->OptionsType);
		printf("\tCombinationType [%c]\n", pInstrument->CombinationType);
		printf("\tPriceTick [%.8lf]\n", pInstrument->PriceTick);
		printf("\tLongMarginRatio [%.8lf]\n", pInstrument->LongMarginRatio);
		printf("\tShortMarginRatio [%.8lf]\n", pInstrument->ShortMarginRatio);
		printf("\tStrikePrice [%.8lf]\n", pInstrument->StrikePrice);
		printf("\tUnderlyingMultiple [%.8lf]\n", pInstrument->UnderlyingMultiple);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInstrument>\n");
};

void CTraderSpi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryDepthMarketData>\n");
	if (pDepthMarketData)
	{
		printf("\tTradingDay [%s]\n", pDepthMarketData->TradingDay);
		printf("\tInstrumentID [%s]\n", pDepthMarketData->InstrumentID);
		printf("\tExchangeID [%s]\n", pDepthMarketData->ExchangeID);
		printf("\tExchangeInstID [%s]\n", pDepthMarketData->ExchangeInstID);
		printf("\tUpdateTime [%s]\n", pDepthMarketData->UpdateTime);
		printf("\tActionDay [%s]\n", pDepthMarketData->ActionDay);
		printf("\tVolume [%d]\n", pDepthMarketData->Volume);
		printf("\tUpdateMillisec [%d]\n", pDepthMarketData->UpdateMillisec);
		printf("\tBidVolume1 [%d]\n", pDepthMarketData->BidVolume1);
		printf("\tAskVolume1 [%d]\n", pDepthMarketData->AskVolume1);
		printf("\tBidVolume2 [%d]\n", pDepthMarketData->BidVolume2);
		printf("\tAskVolume2 [%d]\n", pDepthMarketData->AskVolume2);
		printf("\tBidVolume3 [%d]\n", pDepthMarketData->BidVolume3);
		printf("\tAskVolume3 [%d]\n", pDepthMarketData->AskVolume3);
		printf("\tBidVolume4 [%d]\n", pDepthMarketData->BidVolume4);
		printf("\tAskVolume4 [%d]\n", pDepthMarketData->AskVolume4);
		printf("\tBidVolume5 [%d]\n", pDepthMarketData->BidVolume5);
		printf("\tAskVolume5 [%d]\n", pDepthMarketData->AskVolume5);
		printf("\tLastPrice [%.8lf]\n", pDepthMarketData->LastPrice);
		printf("\tPreSettlementPrice [%.8lf]\n", pDepthMarketData->PreSettlementPrice);
		printf("\tPreClosePrice [%.8lf]\n", pDepthMarketData->PreClosePrice);
		printf("\tPreOpenInterest [%.8lf]\n", pDepthMarketData->PreOpenInterest);
		printf("\tOpenPrice [%.8lf]\n", pDepthMarketData->OpenPrice);
		printf("\tHighestPrice [%.8lf]\n", pDepthMarketData->HighestPrice);
		printf("\tLowestPrice [%.8lf]\n", pDepthMarketData->LowestPrice);
		printf("\tTurnover [%.8lf]\n", pDepthMarketData->Turnover);
		printf("\tOpenInterest [%.8lf]\n", pDepthMarketData->OpenInterest);
		printf("\tClosePrice [%.8lf]\n", pDepthMarketData->ClosePrice);
		printf("\tSettlementPrice [%.8lf]\n", pDepthMarketData->SettlementPrice);
		printf("\tUpperLimitPrice [%.8lf]\n", pDepthMarketData->UpperLimitPrice);
		printf("\tLowerLimitPrice [%.8lf]\n", pDepthMarketData->LowerLimitPrice);
		printf("\tPreDelta [%.8lf]\n", pDepthMarketData->PreDelta);
		printf("\tCurrDelta [%.8lf]\n", pDepthMarketData->CurrDelta);
		printf("\tBidPrice1 [%.8lf]\n", pDepthMarketData->BidPrice1);
		printf("\tAskPrice1 [%.8lf]\n", pDepthMarketData->AskPrice1);
		printf("\tBidPrice2 [%.8lf]\n", pDepthMarketData->BidPrice2);
		printf("\tAskPrice2 [%.8lf]\n", pDepthMarketData->AskPrice2);
		printf("\tBidPrice3 [%.8lf]\n", pDepthMarketData->BidPrice3);
		printf("\tAskPrice3 [%.8lf]\n", pDepthMarketData->AskPrice3);
		printf("\tBidPrice4 [%.8lf]\n", pDepthMarketData->BidPrice4);
		printf("\tAskPrice4 [%.8lf]\n", pDepthMarketData->AskPrice4);
		printf("\tBidPrice5 [%.8lf]\n", pDepthMarketData->BidPrice5);
		printf("\tAskPrice5 [%.8lf]\n", pDepthMarketData->AskPrice5);
		printf("\tAveragePrice [%.8lf]\n", pDepthMarketData->AveragePrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryDepthMarketData>\n");
};

void CTraderSpi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQrySettlementInfo>\n");
	if (pSettlementInfo)
	{
		printf("\tTradingDay [%s]\n", pSettlementInfo->TradingDay);
		printf("\tBrokerID [%s]\n", pSettlementInfo->BrokerID);
		printf("\tInvestorID [%s]\n", pSettlementInfo->InvestorID);
		printf("\tContent [%s]\n", pSettlementInfo->Content);
		printf("\tAccountID [%s]\n", pSettlementInfo->AccountID);
		printf("\tCurrencyID [%s]\n", pSettlementInfo->CurrencyID);
		printf("\tSettlementID [%d]\n", pSettlementInfo->SettlementID);
		printf("\tSequenceNo [%d]\n", pSettlementInfo->SequenceNo);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQrySettlementInfo>\n");
};

void CTraderSpi::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryTransferBank>\n");
	if (pTransferBank)
	{
		printf("\tBankID [%s]\n", pTransferBank->BankID);
		printf("\tBankBrchID [%s]\n", pTransferBank->BankBrchID);
		printf("\tBankName [%s]\n", pTransferBank->BankName);
		printf("\tIsActive [%d]\n", pTransferBank->IsActive);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryTransferBank>\n");
};

void CTraderSpi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInvestorPositionDetail>\n");
	if (pInvestorPositionDetail)
	{
		printf("\tInstrumentID [%s]\n", pInvestorPositionDetail->InstrumentID);
		printf("\tBrokerID [%s]\n", pInvestorPositionDetail->BrokerID);
		printf("\tInvestorID [%s]\n", pInvestorPositionDetail->InvestorID);
		printf("\tOpenDate [%s]\n", pInvestorPositionDetail->OpenDate);
		printf("\tTradeID [%s]\n", pInvestorPositionDetail->TradeID);
		printf("\tTradingDay [%s]\n", pInvestorPositionDetail->TradingDay);
		printf("\tCombInstrumentID [%s]\n", pInvestorPositionDetail->CombInstrumentID);
		printf("\tExchangeID [%s]\n", pInvestorPositionDetail->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInvestorPositionDetail->InvestUnitID);
		printf("\tVolume [%d]\n", pInvestorPositionDetail->Volume);
		printf("\tSettlementID [%d]\n", pInvestorPositionDetail->SettlementID);
		printf("\tCloseVolume [%d]\n", pInvestorPositionDetail->CloseVolume);
		printf("\tHedgeFlag [%c]\n", pInvestorPositionDetail->HedgeFlag);
		printf("\tDirection [%c]\n", pInvestorPositionDetail->Direction);
		printf("\tTradeType [%c]\n", pInvestorPositionDetail->TradeType);
		printf("\tOpenPrice [%.8lf]\n", pInvestorPositionDetail->OpenPrice);
		printf("\tCloseProfitByDate [%.8lf]\n", pInvestorPositionDetail->CloseProfitByDate);
		printf("\tCloseProfitByTrade [%.8lf]\n", pInvestorPositionDetail->CloseProfitByTrade);
		printf("\tPositionProfitByDate [%.8lf]\n", pInvestorPositionDetail->PositionProfitByDate);
		printf("\tPositionProfitByTrade [%.8lf]\n", pInvestorPositionDetail->PositionProfitByTrade);
		printf("\tMargin [%.8lf]\n", pInvestorPositionDetail->Margin);
		printf("\tExchMargin [%.8lf]\n", pInvestorPositionDetail->ExchMargin);
		printf("\tMarginRateByMoney [%.8lf]\n", pInvestorPositionDetail->MarginRateByMoney);
		printf("\tMarginRateByVolume [%.8lf]\n", pInvestorPositionDetail->MarginRateByVolume);
		printf("\tLastSettlementPrice [%.8lf]\n", pInvestorPositionDetail->LastSettlementPrice);
		printf("\tSettlementPrice [%.8lf]\n", pInvestorPositionDetail->SettlementPrice);
		printf("\tCloseAmount [%.8lf]\n", pInvestorPositionDetail->CloseAmount);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInvestorPositionDetail>\n");
};

void CTraderSpi::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryNotice>\n");
	if (pNotice)
	{
		printf("\tBrokerID [%s]\n", pNotice->BrokerID);
		printf("\tContent [%s]\n", pNotice->Content);
		printf("\tSequenceLabel [%s]\n", pNotice->SequenceLabel);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryNotice>\n");
};

void CTraderSpi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQrySettlementInfoConfirm>\n");
	if (pSettlementInfoConfirm)
	{
		printf("\tBrokerID [%s]\n", pSettlementInfoConfirm->BrokerID);
		printf("\tInvestorID [%s]\n", pSettlementInfoConfirm->InvestorID);
		printf("\tConfirmDate [%s]\n", pSettlementInfoConfirm->ConfirmDate);
		printf("\tConfirmTime [%s]\n", pSettlementInfoConfirm->ConfirmTime);
		printf("\tAccountID [%s]\n", pSettlementInfoConfirm->AccountID);
		printf("\tCurrencyID [%s]\n", pSettlementInfoConfirm->CurrencyID);
		printf("\tSettlementID [%d]\n", pSettlementInfoConfirm->SettlementID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQrySettlementInfoConfirm>\n");
};

void CTraderSpi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInvestorPositionCombineDetail>\n");
	if (pInvestorPositionCombineDetail)
	{
		printf("\tTradingDay [%s]\n", pInvestorPositionCombineDetail->TradingDay);
		printf("\tOpenDate [%s]\n", pInvestorPositionCombineDetail->OpenDate);
		printf("\tExchangeID [%s]\n", pInvestorPositionCombineDetail->ExchangeID);
		printf("\tBrokerID [%s]\n", pInvestorPositionCombineDetail->BrokerID);
		printf("\tInvestorID [%s]\n", pInvestorPositionCombineDetail->InvestorID);
		printf("\tComTradeID [%s]\n", pInvestorPositionCombineDetail->ComTradeID);
		printf("\tTradeID [%s]\n", pInvestorPositionCombineDetail->TradeID);
		printf("\tInstrumentID [%s]\n", pInvestorPositionCombineDetail->InstrumentID);
		printf("\tCombInstrumentID [%s]\n", pInvestorPositionCombineDetail->CombInstrumentID);
		printf("\tInvestUnitID [%s]\n", pInvestorPositionCombineDetail->InvestUnitID);
		printf("\tSettlementID [%d]\n", pInvestorPositionCombineDetail->SettlementID);
		printf("\tTotalAmt [%d]\n", pInvestorPositionCombineDetail->TotalAmt);
		printf("\tLegID [%d]\n", pInvestorPositionCombineDetail->LegID);
		printf("\tLegMultiple [%d]\n", pInvestorPositionCombineDetail->LegMultiple);
		printf("\tTradeGroupID [%d]\n", pInvestorPositionCombineDetail->TradeGroupID);
		printf("\tHedgeFlag [%c]\n", pInvestorPositionCombineDetail->HedgeFlag);
		printf("\tDirection [%c]\n", pInvestorPositionCombineDetail->Direction);
		printf("\tMargin [%.8lf]\n", pInvestorPositionCombineDetail->Margin);
		printf("\tExchMargin [%.8lf]\n", pInvestorPositionCombineDetail->ExchMargin);
		printf("\tMarginRateByMoney [%.8lf]\n", pInvestorPositionCombineDetail->MarginRateByMoney);
		printf("\tMarginRateByVolume [%.8lf]\n", pInvestorPositionCombineDetail->MarginRateByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInvestorPositionCombineDetail>\n");
};

void CTraderSpi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryCFMMCTradingAccountKey>\n");
	if (pCFMMCTradingAccountKey)
	{
		printf("\tBrokerID [%s]\n", pCFMMCTradingAccountKey->BrokerID);
		printf("\tParticipantID [%s]\n", pCFMMCTradingAccountKey->ParticipantID);
		printf("\tAccountID [%s]\n", pCFMMCTradingAccountKey->AccountID);
		printf("\tCurrentKey [%s]\n", pCFMMCTradingAccountKey->CurrentKey);
		printf("\tKeyID [%d]\n", pCFMMCTradingAccountKey->KeyID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryCFMMCTradingAccountKey>\n");
};

void CTraderSpi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryEWarrantOffset>\n");
	if (pEWarrantOffset)
	{
		printf("\tTradingDay [%s]\n", pEWarrantOffset->TradingDay);
		printf("\tBrokerID [%s]\n", pEWarrantOffset->BrokerID);
		printf("\tInvestorID [%s]\n", pEWarrantOffset->InvestorID);
		printf("\tExchangeID [%s]\n", pEWarrantOffset->ExchangeID);
		printf("\tInstrumentID [%s]\n", pEWarrantOffset->InstrumentID);
		printf("\tInvestUnitID [%s]\n", pEWarrantOffset->InvestUnitID);
		printf("\tVolume [%d]\n", pEWarrantOffset->Volume);
		printf("\tDirection [%c]\n", pEWarrantOffset->Direction);
		printf("\tHedgeFlag [%c]\n", pEWarrantOffset->HedgeFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryEWarrantOffset>\n");
};

void CTraderSpi::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInvestorProductGroupMargin>\n");
	if (pInvestorProductGroupMargin)
	{
		printf("\tProductGroupID [%s]\n", pInvestorProductGroupMargin->ProductGroupID);
		printf("\tBrokerID [%s]\n", pInvestorProductGroupMargin->BrokerID);
		printf("\tInvestorID [%s]\n", pInvestorProductGroupMargin->InvestorID);
		printf("\tTradingDay [%s]\n", pInvestorProductGroupMargin->TradingDay);
		printf("\tExchangeID [%s]\n", pInvestorProductGroupMargin->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInvestorProductGroupMargin->InvestUnitID);
		printf("\tSettlementID [%d]\n", pInvestorProductGroupMargin->SettlementID);
		printf("\tHedgeFlag [%c]\n", pInvestorProductGroupMargin->HedgeFlag);
		printf("\tFrozenMargin [%.8lf]\n", pInvestorProductGroupMargin->FrozenMargin);
		printf("\tLongFrozenMargin [%.8lf]\n", pInvestorProductGroupMargin->LongFrozenMargin);
		printf("\tShortFrozenMargin [%.8lf]\n", pInvestorProductGroupMargin->ShortFrozenMargin);
		printf("\tUseMargin [%.8lf]\n", pInvestorProductGroupMargin->UseMargin);
		printf("\tLongUseMargin [%.8lf]\n", pInvestorProductGroupMargin->LongUseMargin);
		printf("\tShortUseMargin [%.8lf]\n", pInvestorProductGroupMargin->ShortUseMargin);
		printf("\tExchMargin [%.8lf]\n", pInvestorProductGroupMargin->ExchMargin);
		printf("\tLongExchMargin [%.8lf]\n", pInvestorProductGroupMargin->LongExchMargin);
		printf("\tShortExchMargin [%.8lf]\n", pInvestorProductGroupMargin->ShortExchMargin);
		printf("\tCloseProfit [%.8lf]\n", pInvestorProductGroupMargin->CloseProfit);
		printf("\tFrozenCommission [%.8lf]\n", pInvestorProductGroupMargin->FrozenCommission);
		printf("\tCommission [%.8lf]\n", pInvestorProductGroupMargin->Commission);
		printf("\tFrozenCash [%.8lf]\n", pInvestorProductGroupMargin->FrozenCash);
		printf("\tCashIn [%.8lf]\n", pInvestorProductGroupMargin->CashIn);
		printf("\tPositionProfit [%.8lf]\n", pInvestorProductGroupMargin->PositionProfit);
		printf("\tOffsetAmount [%.8lf]\n", pInvestorProductGroupMargin->OffsetAmount);
		printf("\tLongOffsetAmount [%.8lf]\n", pInvestorProductGroupMargin->LongOffsetAmount);
		printf("\tShortOffsetAmount [%.8lf]\n", pInvestorProductGroupMargin->ShortOffsetAmount);
		printf("\tExchOffsetAmount [%.8lf]\n", pInvestorProductGroupMargin->ExchOffsetAmount);
		printf("\tLongExchOffsetAmount [%.8lf]\n", pInvestorProductGroupMargin->LongExchOffsetAmount);
		printf("\tShortExchOffsetAmount [%.8lf]\n", pInvestorProductGroupMargin->ShortExchOffsetAmount);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInvestorProductGroupMargin>\n");
};

void CTraderSpi::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryExchangeMarginRate>\n");
	if (pExchangeMarginRate)
	{
		printf("\tBrokerID [%s]\n", pExchangeMarginRate->BrokerID);
		printf("\tInstrumentID [%s]\n", pExchangeMarginRate->InstrumentID);
		printf("\tExchangeID [%s]\n", pExchangeMarginRate->ExchangeID);
		printf("\tHedgeFlag [%c]\n", pExchangeMarginRate->HedgeFlag);
		printf("\tLongMarginRatioByMoney [%.8lf]\n", pExchangeMarginRate->LongMarginRatioByMoney);
		printf("\tLongMarginRatioByVolume [%.8lf]\n", pExchangeMarginRate->LongMarginRatioByVolume);
		printf("\tShortMarginRatioByMoney [%.8lf]\n", pExchangeMarginRate->ShortMarginRatioByMoney);
		printf("\tShortMarginRatioByVolume [%.8lf]\n", pExchangeMarginRate->ShortMarginRatioByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryExchangeMarginRate>\n");
};

void CTraderSpi::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryExchangeMarginRateAdjust>\n");
	if (pExchangeMarginRateAdjust)
	{
		printf("\tBrokerID [%s]\n", pExchangeMarginRateAdjust->BrokerID);
		printf("\tInstrumentID [%s]\n", pExchangeMarginRateAdjust->InstrumentID);
		printf("\tHedgeFlag [%c]\n", pExchangeMarginRateAdjust->HedgeFlag);
		printf("\tLongMarginRatioByMoney [%.8lf]\n", pExchangeMarginRateAdjust->LongMarginRatioByMoney);
		printf("\tLongMarginRatioByVolume [%.8lf]\n", pExchangeMarginRateAdjust->LongMarginRatioByVolume);
		printf("\tShortMarginRatioByMoney [%.8lf]\n", pExchangeMarginRateAdjust->ShortMarginRatioByMoney);
		printf("\tShortMarginRatioByVolume [%.8lf]\n", pExchangeMarginRateAdjust->ShortMarginRatioByVolume);
		printf("\tExchLongMarginRatioByMoney [%.8lf]\n", pExchangeMarginRateAdjust->ExchLongMarginRatioByMoney);
		printf("\tExchLongMarginRatioByVolume [%.8lf]\n", pExchangeMarginRateAdjust->ExchLongMarginRatioByVolume);
		printf("\tExchShortMarginRatioByMoney [%.8lf]\n", pExchangeMarginRateAdjust->ExchShortMarginRatioByMoney);
		printf("\tExchShortMarginRatioByVolume [%.8lf]\n", pExchangeMarginRateAdjust->ExchShortMarginRatioByVolume);
		printf("\tNoLongMarginRatioByMoney [%.8lf]\n", pExchangeMarginRateAdjust->NoLongMarginRatioByMoney);
		printf("\tNoLongMarginRatioByVolume [%.8lf]\n", pExchangeMarginRateAdjust->NoLongMarginRatioByVolume);
		printf("\tNoShortMarginRatioByMoney [%.8lf]\n", pExchangeMarginRateAdjust->NoShortMarginRatioByMoney);
		printf("\tNoShortMarginRatioByVolume [%.8lf]\n", pExchangeMarginRateAdjust->NoShortMarginRatioByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryExchangeMarginRateAdjust>\n");
};

void CTraderSpi::OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryExchangeRate>\n");
	if (pExchangeRate)
	{
		printf("\tBrokerID [%s]\n", pExchangeRate->BrokerID);
		printf("\tFromCurrencyID [%s]\n", pExchangeRate->FromCurrencyID);
		printf("\tToCurrencyID [%s]\n", pExchangeRate->ToCurrencyID);
		printf("\tFromCurrencyUnit [%.8lf]\n", pExchangeRate->FromCurrencyUnit);
		printf("\tExchangeRate [%.8lf]\n", pExchangeRate->ExchangeRate);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryExchangeRate>\n");
};

void CTraderSpi::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQrySecAgentACIDMap>\n");
	if (pSecAgentACIDMap)
	{
		printf("\tBrokerID [%s]\n", pSecAgentACIDMap->BrokerID);
		printf("\tUserID [%s]\n", pSecAgentACIDMap->UserID);
		printf("\tAccountID [%s]\n", pSecAgentACIDMap->AccountID);
		printf("\tCurrencyID [%s]\n", pSecAgentACIDMap->CurrencyID);
		printf("\tBrokerSecAgentID [%s]\n", pSecAgentACIDMap->BrokerSecAgentID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQrySecAgentACIDMap>\n");
};

void CTraderSpi::OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryProductExchRate>\n");
	if (pProductExchRate)
	{
		printf("\tProductID [%s]\n", pProductExchRate->ProductID);
		printf("\tQuoteCurrencyID [%s]\n", pProductExchRate->QuoteCurrencyID);
		printf("\tExchangeID [%s]\n", pProductExchRate->ExchangeID);
		printf("\tExchangeRate [%.8lf]\n", pProductExchRate->ExchangeRate);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryProductExchRate>\n");
};

void CTraderSpi::OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryProductGroup>\n");
	if (pProductGroup)
	{
		printf("\tProductID [%s]\n", pProductGroup->ProductID);
		printf("\tExchangeID [%s]\n", pProductGroup->ExchangeID);
		printf("\tProductGroupID [%s]\n", pProductGroup->ProductGroupID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryProductGroup>\n");
};

void CTraderSpi::OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryMMInstrumentCommissionRate>\n");
	if (pMMInstrumentCommissionRate)
	{
		printf("\tInstrumentID [%s]\n", pMMInstrumentCommissionRate->InstrumentID);
		printf("\tBrokerID [%s]\n", pMMInstrumentCommissionRate->BrokerID);
		printf("\tInvestorID [%s]\n", pMMInstrumentCommissionRate->InvestorID);
		printf("\tInvestorRange [%c]\n", pMMInstrumentCommissionRate->InvestorRange);
		printf("\tOpenRatioByMoney [%.8lf]\n", pMMInstrumentCommissionRate->OpenRatioByMoney);
		printf("\tOpenRatioByVolume [%.8lf]\n", pMMInstrumentCommissionRate->OpenRatioByVolume);
		printf("\tCloseRatioByMoney [%.8lf]\n", pMMInstrumentCommissionRate->CloseRatioByMoney);
		printf("\tCloseRatioByVolume [%.8lf]\n", pMMInstrumentCommissionRate->CloseRatioByVolume);
		printf("\tCloseTodayRatioByMoney [%.8lf]\n", pMMInstrumentCommissionRate->CloseTodayRatioByMoney);
		printf("\tCloseTodayRatioByVolume [%.8lf]\n", pMMInstrumentCommissionRate->CloseTodayRatioByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryMMInstrumentCommissionRate>\n");
};

void CTraderSpi::OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryMMOptionInstrCommRate>\n");
	if (pMMOptionInstrCommRate)
	{
		printf("\tInstrumentID [%s]\n", pMMOptionInstrCommRate->InstrumentID);
		printf("\tBrokerID [%s]\n", pMMOptionInstrCommRate->BrokerID);
		printf("\tInvestorID [%s]\n", pMMOptionInstrCommRate->InvestorID);
		printf("\tInvestorRange [%c]\n", pMMOptionInstrCommRate->InvestorRange);
		printf("\tOpenRatioByMoney [%.8lf]\n", pMMOptionInstrCommRate->OpenRatioByMoney);
		printf("\tOpenRatioByVolume [%.8lf]\n", pMMOptionInstrCommRate->OpenRatioByVolume);
		printf("\tCloseRatioByMoney [%.8lf]\n", pMMOptionInstrCommRate->CloseRatioByMoney);
		printf("\tCloseRatioByVolume [%.8lf]\n", pMMOptionInstrCommRate->CloseRatioByVolume);
		printf("\tCloseTodayRatioByMoney [%.8lf]\n", pMMOptionInstrCommRate->CloseTodayRatioByMoney);
		printf("\tCloseTodayRatioByVolume [%.8lf]\n", pMMOptionInstrCommRate->CloseTodayRatioByVolume);
		printf("\tStrikeRatioByMoney [%.8lf]\n", pMMOptionInstrCommRate->StrikeRatioByMoney);
		printf("\tStrikeRatioByVolume [%.8lf]\n", pMMOptionInstrCommRate->StrikeRatioByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryMMOptionInstrCommRate>\n");
};

void CTraderSpi::OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInstrumentOrderCommRate>\n");
	if (pInstrumentOrderCommRate)
	{
		printf("\tInstrumentID [%s]\n", pInstrumentOrderCommRate->InstrumentID);
		printf("\tBrokerID [%s]\n", pInstrumentOrderCommRate->BrokerID);
		printf("\tInvestorID [%s]\n", pInstrumentOrderCommRate->InvestorID);
		printf("\tExchangeID [%s]\n", pInstrumentOrderCommRate->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInstrumentOrderCommRate->InvestUnitID);
		printf("\tInvestorRange [%c]\n", pInstrumentOrderCommRate->InvestorRange);
		printf("\tHedgeFlag [%c]\n", pInstrumentOrderCommRate->HedgeFlag);
		printf("\tOrderCommByVolume [%.8lf]\n", pInstrumentOrderCommRate->OrderCommByVolume);
		printf("\tOrderActionCommByVolume [%.8lf]\n", pInstrumentOrderCommRate->OrderActionCommByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInstrumentOrderCommRate>\n");
};

void CTraderSpi::OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQrySecAgentTradingAccount>\n");
	if (pTradingAccount)
	{
		printf("\tBrokerID [%s]\n", pTradingAccount->BrokerID);
		printf("\tAccountID [%s]\n", pTradingAccount->AccountID);
		printf("\tTradingDay [%s]\n", pTradingAccount->TradingDay);
		printf("\tCurrencyID [%s]\n", pTradingAccount->CurrencyID);
		printf("\tSettlementID [%d]\n", pTradingAccount->SettlementID);
		printf("\tBizType [%c]\n", pTradingAccount->BizType);
		printf("\tPreMortgage [%.8lf]\n", pTradingAccount->PreMortgage);
		printf("\tPreCredit [%.8lf]\n", pTradingAccount->PreCredit);
		printf("\tPreDeposit [%.8lf]\n", pTradingAccount->PreDeposit);
		printf("\tPreBalance [%.8lf]\n", pTradingAccount->PreBalance);
		printf("\tPreMargin [%.8lf]\n", pTradingAccount->PreMargin);
		printf("\tInterestBase [%.8lf]\n", pTradingAccount->InterestBase);
		printf("\tInterest [%.8lf]\n", pTradingAccount->Interest);
		printf("\tDeposit [%.8lf]\n", pTradingAccount->Deposit);
		printf("\tWithdraw [%.8lf]\n", pTradingAccount->Withdraw);
		printf("\tFrozenMargin [%.8lf]\n", pTradingAccount->FrozenMargin);
		printf("\tFrozenCash [%.8lf]\n", pTradingAccount->FrozenCash);
		printf("\tFrozenCommission [%.8lf]\n", pTradingAccount->FrozenCommission);
		printf("\tCurrMargin [%.8lf]\n", pTradingAccount->CurrMargin);
		printf("\tCashIn [%.8lf]\n", pTradingAccount->CashIn);
		printf("\tCommission [%.8lf]\n", pTradingAccount->Commission);
		printf("\tCloseProfit [%.8lf]\n", pTradingAccount->CloseProfit);
		printf("\tPositionProfit [%.8lf]\n", pTradingAccount->PositionProfit);
		printf("\tBalance [%.8lf]\n", pTradingAccount->Balance);
		printf("\tAvailable [%.8lf]\n", pTradingAccount->Available);
		printf("\tWithdrawQuota [%.8lf]\n", pTradingAccount->WithdrawQuota);
		printf("\tReserve [%.8lf]\n", pTradingAccount->Reserve);
		printf("\tCredit [%.8lf]\n", pTradingAccount->Credit);
		printf("\tMortgage [%.8lf]\n", pTradingAccount->Mortgage);
		printf("\tExchangeMargin [%.8lf]\n", pTradingAccount->ExchangeMargin);
		printf("\tDeliveryMargin [%.8lf]\n", pTradingAccount->DeliveryMargin);
		printf("\tExchangeDeliveryMargin [%.8lf]\n", pTradingAccount->ExchangeDeliveryMargin);
		printf("\tReserveBalance [%.8lf]\n", pTradingAccount->ReserveBalance);
		printf("\tPreFundMortgageIn [%.8lf]\n", pTradingAccount->PreFundMortgageIn);
		printf("\tPreFundMortgageOut [%.8lf]\n", pTradingAccount->PreFundMortgageOut);
		printf("\tFundMortgageIn [%.8lf]\n", pTradingAccount->FundMortgageIn);
		printf("\tFundMortgageOut [%.8lf]\n", pTradingAccount->FundMortgageOut);
		printf("\tFundMortgageAvailable [%.8lf]\n", pTradingAccount->FundMortgageAvailable);
		printf("\tMortgageableFund [%.8lf]\n", pTradingAccount->MortgageableFund);
		printf("\tSpecProductMargin [%.8lf]\n", pTradingAccount->SpecProductMargin);
		printf("\tSpecProductFrozenMargin [%.8lf]\n", pTradingAccount->SpecProductFrozenMargin);
		printf("\tSpecProductCommission [%.8lf]\n", pTradingAccount->SpecProductCommission);
		printf("\tSpecProductFrozenCommission [%.8lf]\n", pTradingAccount->SpecProductFrozenCommission);
		printf("\tSpecProductPositionProfit [%.8lf]\n", pTradingAccount->SpecProductPositionProfit);
		printf("\tSpecProductCloseProfit [%.8lf]\n", pTradingAccount->SpecProductCloseProfit);
		printf("\tSpecProductPositionProfitByAlg [%.8lf]\n", pTradingAccount->SpecProductPositionProfitByAlg);
		printf("\tSpecProductExchangeMargin [%.8lf]\n", pTradingAccount->SpecProductExchangeMargin);
		printf("\tFrozenSwap [%.8lf]\n", pTradingAccount->FrozenSwap);
		printf("\tRemainSwap [%.8lf]\n", pTradingAccount->RemainSwap);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQrySecAgentTradingAccount>\n");
};

void CTraderSpi::OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQrySecAgentCheckMode>\n");
	if (pSecAgentCheckMode)
	{
		printf("\tInvestorID [%s]\n", pSecAgentCheckMode->InvestorID);
		printf("\tBrokerID [%s]\n", pSecAgentCheckMode->BrokerID);
		printf("\tCurrencyID [%s]\n", pSecAgentCheckMode->CurrencyID);
		printf("\tBrokerSecAgentID [%s]\n", pSecAgentCheckMode->BrokerSecAgentID);
		printf("\tCheckSelfAccount [%d]\n", pSecAgentCheckMode->CheckSelfAccount);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQrySecAgentCheckMode>\n");
};

void CTraderSpi::OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQrySecAgentTradeInfo>\n");
	if (pSecAgentTradeInfo)
	{
		printf("\tBrokerID [%s]\n", pSecAgentTradeInfo->BrokerID);
		printf("\tBrokerSecAgentID [%s]\n", pSecAgentTradeInfo->BrokerSecAgentID);
		printf("\tInvestorID [%s]\n", pSecAgentTradeInfo->InvestorID);
		printf("\tLongCustomerName [%s]\n", pSecAgentTradeInfo->LongCustomerName);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQrySecAgentTradeInfo>\n");
};

void CTraderSpi::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryOptionInstrTradeCost>\n");
	if (pOptionInstrTradeCost)
	{
		printf("\tBrokerID [%s]\n", pOptionInstrTradeCost->BrokerID);
		printf("\tInvestorID [%s]\n", pOptionInstrTradeCost->InvestorID);
		printf("\tInstrumentID [%s]\n", pOptionInstrTradeCost->InstrumentID);
		printf("\tExchangeID [%s]\n", pOptionInstrTradeCost->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pOptionInstrTradeCost->InvestUnitID);
		printf("\tHedgeFlag [%c]\n", pOptionInstrTradeCost->HedgeFlag);
		printf("\tFixedMargin [%.8lf]\n", pOptionInstrTradeCost->FixedMargin);
		printf("\tMiniMargin [%.8lf]\n", pOptionInstrTradeCost->MiniMargin);
		printf("\tRoyalty [%.8lf]\n", pOptionInstrTradeCost->Royalty);
		printf("\tExchFixedMargin [%.8lf]\n", pOptionInstrTradeCost->ExchFixedMargin);
		printf("\tExchMiniMargin [%.8lf]\n", pOptionInstrTradeCost->ExchMiniMargin);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryOptionInstrTradeCost>\n");
};

void CTraderSpi::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryOptionInstrCommRate>\n");
	if (pOptionInstrCommRate)
	{
		printf("\tInstrumentID [%s]\n", pOptionInstrCommRate->InstrumentID);
		printf("\tBrokerID [%s]\n", pOptionInstrCommRate->BrokerID);
		printf("\tInvestorID [%s]\n", pOptionInstrCommRate->InvestorID);
		printf("\tExchangeID [%s]\n", pOptionInstrCommRate->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pOptionInstrCommRate->InvestUnitID);
		printf("\tInvestorRange [%c]\n", pOptionInstrCommRate->InvestorRange);
		printf("\tOpenRatioByMoney [%.8lf]\n", pOptionInstrCommRate->OpenRatioByMoney);
		printf("\tOpenRatioByVolume [%.8lf]\n", pOptionInstrCommRate->OpenRatioByVolume);
		printf("\tCloseRatioByMoney [%.8lf]\n", pOptionInstrCommRate->CloseRatioByMoney);
		printf("\tCloseRatioByVolume [%.8lf]\n", pOptionInstrCommRate->CloseRatioByVolume);
		printf("\tCloseTodayRatioByMoney [%.8lf]\n", pOptionInstrCommRate->CloseTodayRatioByMoney);
		printf("\tCloseTodayRatioByVolume [%.8lf]\n", pOptionInstrCommRate->CloseTodayRatioByVolume);
		printf("\tStrikeRatioByMoney [%.8lf]\n", pOptionInstrCommRate->StrikeRatioByMoney);
		printf("\tStrikeRatioByVolume [%.8lf]\n", pOptionInstrCommRate->StrikeRatioByVolume);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryOptionInstrCommRate>\n");
};

void CTraderSpi::OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryExecOrder>\n");
	if (pExecOrder)
	{
		printf("\tBrokerID [%s]\n", pExecOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pExecOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pExecOrder->InstrumentID);
		printf("\tExecOrderRef [%s]\n", pExecOrder->ExecOrderRef);
		printf("\tUserID [%s]\n", pExecOrder->UserID);
		printf("\tBusinessUnit [%s]\n", pExecOrder->BusinessUnit);
		printf("\tExecOrderLocalID [%s]\n", pExecOrder->ExecOrderLocalID);
		printf("\tExchangeID [%s]\n", pExecOrder->ExchangeID);
		printf("\tParticipantID [%s]\n", pExecOrder->ParticipantID);
		printf("\tClientID [%s]\n", pExecOrder->ClientID);
		printf("\tExchangeInstID [%s]\n", pExecOrder->ExchangeInstID);
		printf("\tTraderID [%s]\n", pExecOrder->TraderID);
		printf("\tTradingDay [%s]\n", pExecOrder->TradingDay);
		printf("\tExecOrderSysID [%s]\n", pExecOrder->ExecOrderSysID);
		printf("\tInsertDate [%s]\n", pExecOrder->InsertDate);
		printf("\tInsertTime [%s]\n", pExecOrder->InsertTime);
		printf("\tCancelTime [%s]\n", pExecOrder->CancelTime);
		printf("\tClearingPartID [%s]\n", pExecOrder->ClearingPartID);
		printf("\tUserProductInfo [%s]\n", pExecOrder->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pExecOrder->StatusMsg);
		printf("\tActiveUserID [%s]\n", pExecOrder->ActiveUserID);
		printf("\tBranchID [%s]\n", pExecOrder->BranchID);
		printf("\tInvestUnitID [%s]\n", pExecOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pExecOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pExecOrder->CurrencyID);
		printf("\tIPAddress [%s]\n", pExecOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pExecOrder->MacAddress);
		printf("\tVolume [%d]\n", pExecOrder->Volume);
		printf("\tRequestID [%d]\n", pExecOrder->RequestID);
		printf("\tInstallID [%d]\n", pExecOrder->InstallID);
		printf("\tNotifySequence [%d]\n", pExecOrder->NotifySequence);
		printf("\tSettlementID [%d]\n", pExecOrder->SettlementID);
		printf("\tSequenceNo [%d]\n", pExecOrder->SequenceNo);
		printf("\tFrontID [%d]\n", pExecOrder->FrontID);
		printf("\tSessionID [%d]\n", pExecOrder->SessionID);
		printf("\tBrokerExecOrderSeq [%d]\n", pExecOrder->BrokerExecOrderSeq);
		printf("\tOffsetFlag [%c]\n", pExecOrder->OffsetFlag);
		printf("\tHedgeFlag [%c]\n", pExecOrder->HedgeFlag);
		printf("\tActionType [%c]\n", pExecOrder->ActionType);
		printf("\tPosiDirection [%c]\n", pExecOrder->PosiDirection);
		printf("\tReservePositionFlag [%c]\n", pExecOrder->ReservePositionFlag);
		printf("\tCloseFlag [%c]\n", pExecOrder->CloseFlag);
		printf("\tOrderSubmitStatus [%c]\n", pExecOrder->OrderSubmitStatus);
		printf("\tExecResult [%c]\n", pExecOrder->ExecResult);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryExecOrder>\n");
};

void CTraderSpi::OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryForQuote>\n");
	if (pForQuote)
	{
		printf("\tBrokerID [%s]\n", pForQuote->BrokerID);
		printf("\tInvestorID [%s]\n", pForQuote->InvestorID);
		printf("\tInstrumentID [%s]\n", pForQuote->InstrumentID);
		printf("\tForQuoteRef [%s]\n", pForQuote->ForQuoteRef);
		printf("\tUserID [%s]\n", pForQuote->UserID);
		printf("\tForQuoteLocalID [%s]\n", pForQuote->ForQuoteLocalID);
		printf("\tExchangeID [%s]\n", pForQuote->ExchangeID);
		printf("\tParticipantID [%s]\n", pForQuote->ParticipantID);
		printf("\tClientID [%s]\n", pForQuote->ClientID);
		printf("\tExchangeInstID [%s]\n", pForQuote->ExchangeInstID);
		printf("\tTraderID [%s]\n", pForQuote->TraderID);
		printf("\tInsertDate [%s]\n", pForQuote->InsertDate);
		printf("\tInsertTime [%s]\n", pForQuote->InsertTime);
		printf("\tStatusMsg [%s]\n", pForQuote->StatusMsg);
		printf("\tActiveUserID [%s]\n", pForQuote->ActiveUserID);
		printf("\tInvestUnitID [%s]\n", pForQuote->InvestUnitID);
		printf("\tIPAddress [%s]\n", pForQuote->IPAddress);
		printf("\tMacAddress [%s]\n", pForQuote->MacAddress);
		printf("\tInstallID [%d]\n", pForQuote->InstallID);
		printf("\tFrontID [%d]\n", pForQuote->FrontID);
		printf("\tSessionID [%d]\n", pForQuote->SessionID);
		printf("\tBrokerForQutoSeq [%d]\n", pForQuote->BrokerForQutoSeq);
		printf("\tForQuoteStatus [%c]\n", pForQuote->ForQuoteStatus);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryForQuote>\n");
};

void CTraderSpi::OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryQuote>\n");
	if (pQuote)
	{
		printf("\tBrokerID [%s]\n", pQuote->BrokerID);
		printf("\tInvestorID [%s]\n", pQuote->InvestorID);
		printf("\tInstrumentID [%s]\n", pQuote->InstrumentID);
		printf("\tQuoteRef [%s]\n", pQuote->QuoteRef);
		printf("\tUserID [%s]\n", pQuote->UserID);
		printf("\tBusinessUnit [%s]\n", pQuote->BusinessUnit);
		printf("\tQuoteLocalID [%s]\n", pQuote->QuoteLocalID);
		printf("\tExchangeID [%s]\n", pQuote->ExchangeID);
		printf("\tParticipantID [%s]\n", pQuote->ParticipantID);
		printf("\tClientID [%s]\n", pQuote->ClientID);
		printf("\tExchangeInstID [%s]\n", pQuote->ExchangeInstID);
		printf("\tTraderID [%s]\n", pQuote->TraderID);
		printf("\tTradingDay [%s]\n", pQuote->TradingDay);
		printf("\tQuoteSysID [%s]\n", pQuote->QuoteSysID);
		printf("\tInsertDate [%s]\n", pQuote->InsertDate);
		printf("\tInsertTime [%s]\n", pQuote->InsertTime);
		printf("\tCancelTime [%s]\n", pQuote->CancelTime);
		printf("\tClearingPartID [%s]\n", pQuote->ClearingPartID);
		printf("\tAskOrderSysID [%s]\n", pQuote->AskOrderSysID);
		printf("\tBidOrderSysID [%s]\n", pQuote->BidOrderSysID);
		printf("\tUserProductInfo [%s]\n", pQuote->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pQuote->StatusMsg);
		printf("\tActiveUserID [%s]\n", pQuote->ActiveUserID);
		printf("\tAskOrderRef [%s]\n", pQuote->AskOrderRef);
		printf("\tBidOrderRef [%s]\n", pQuote->BidOrderRef);
		printf("\tForQuoteSysID [%s]\n", pQuote->ForQuoteSysID);
		printf("\tBranchID [%s]\n", pQuote->BranchID);
		printf("\tInvestUnitID [%s]\n", pQuote->InvestUnitID);
		printf("\tAccountID [%s]\n", pQuote->AccountID);
		printf("\tCurrencyID [%s]\n", pQuote->CurrencyID);
		printf("\tIPAddress [%s]\n", pQuote->IPAddress);
		printf("\tMacAddress [%s]\n", pQuote->MacAddress);
		printf("\tAskVolume [%d]\n", pQuote->AskVolume);
		printf("\tBidVolume [%d]\n", pQuote->BidVolume);
		printf("\tRequestID [%d]\n", pQuote->RequestID);
		printf("\tInstallID [%d]\n", pQuote->InstallID);
		printf("\tNotifySequence [%d]\n", pQuote->NotifySequence);
		printf("\tSettlementID [%d]\n", pQuote->SettlementID);
		printf("\tSequenceNo [%d]\n", pQuote->SequenceNo);
		printf("\tFrontID [%d]\n", pQuote->FrontID);
		printf("\tSessionID [%d]\n", pQuote->SessionID);
		printf("\tBrokerQuoteSeq [%d]\n", pQuote->BrokerQuoteSeq);
		printf("\tAskOffsetFlag [%c]\n", pQuote->AskOffsetFlag);
		printf("\tBidOffsetFlag [%c]\n", pQuote->BidOffsetFlag);
		printf("\tAskHedgeFlag [%c]\n", pQuote->AskHedgeFlag);
		printf("\tBidHedgeFlag [%c]\n", pQuote->BidHedgeFlag);
		printf("\tOrderSubmitStatus [%c]\n", pQuote->OrderSubmitStatus);
		printf("\tQuoteStatus [%c]\n", pQuote->QuoteStatus);
		printf("\tAskPrice [%.8lf]\n", pQuote->AskPrice);
		printf("\tBidPrice [%.8lf]\n", pQuote->BidPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryQuote>\n");
};

void CTraderSpi::OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryOptionSelfClose>\n");
	if (pOptionSelfClose)
	{
		printf("\tBrokerID [%s]\n", pOptionSelfClose->BrokerID);
		printf("\tInvestorID [%s]\n", pOptionSelfClose->InvestorID);
		printf("\tInstrumentID [%s]\n", pOptionSelfClose->InstrumentID);
		printf("\tOptionSelfCloseRef [%s]\n", pOptionSelfClose->OptionSelfCloseRef);
		printf("\tUserID [%s]\n", pOptionSelfClose->UserID);
		printf("\tBusinessUnit [%s]\n", pOptionSelfClose->BusinessUnit);
		printf("\tOptionSelfCloseLocalID [%s]\n", pOptionSelfClose->OptionSelfCloseLocalID);
		printf("\tExchangeID [%s]\n", pOptionSelfClose->ExchangeID);
		printf("\tParticipantID [%s]\n", pOptionSelfClose->ParticipantID);
		printf("\tClientID [%s]\n", pOptionSelfClose->ClientID);
		printf("\tExchangeInstID [%s]\n", pOptionSelfClose->ExchangeInstID);
		printf("\tTraderID [%s]\n", pOptionSelfClose->TraderID);
		printf("\tTradingDay [%s]\n", pOptionSelfClose->TradingDay);
		printf("\tOptionSelfCloseSysID [%s]\n", pOptionSelfClose->OptionSelfCloseSysID);
		printf("\tInsertDate [%s]\n", pOptionSelfClose->InsertDate);
		printf("\tInsertTime [%s]\n", pOptionSelfClose->InsertTime);
		printf("\tCancelTime [%s]\n", pOptionSelfClose->CancelTime);
		printf("\tClearingPartID [%s]\n", pOptionSelfClose->ClearingPartID);
		printf("\tUserProductInfo [%s]\n", pOptionSelfClose->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pOptionSelfClose->StatusMsg);
		printf("\tActiveUserID [%s]\n", pOptionSelfClose->ActiveUserID);
		printf("\tBranchID [%s]\n", pOptionSelfClose->BranchID);
		printf("\tInvestUnitID [%s]\n", pOptionSelfClose->InvestUnitID);
		printf("\tAccountID [%s]\n", pOptionSelfClose->AccountID);
		printf("\tCurrencyID [%s]\n", pOptionSelfClose->CurrencyID);
		printf("\tIPAddress [%s]\n", pOptionSelfClose->IPAddress);
		printf("\tMacAddress [%s]\n", pOptionSelfClose->MacAddress);
		printf("\tVolume [%d]\n", pOptionSelfClose->Volume);
		printf("\tRequestID [%d]\n", pOptionSelfClose->RequestID);
		printf("\tInstallID [%d]\n", pOptionSelfClose->InstallID);
		printf("\tNotifySequence [%d]\n", pOptionSelfClose->NotifySequence);
		printf("\tSettlementID [%d]\n", pOptionSelfClose->SettlementID);
		printf("\tSequenceNo [%d]\n", pOptionSelfClose->SequenceNo);
		printf("\tFrontID [%d]\n", pOptionSelfClose->FrontID);
		printf("\tSessionID [%d]\n", pOptionSelfClose->SessionID);
		printf("\tBrokerOptionSelfCloseSeq [%d]\n", pOptionSelfClose->BrokerOptionSelfCloseSeq);
		printf("\tHedgeFlag [%c]\n", pOptionSelfClose->HedgeFlag);
		printf("\tOptSelfCloseFlag [%c]\n", pOptionSelfClose->OptSelfCloseFlag);
		printf("\tOrderSubmitStatus [%c]\n", pOptionSelfClose->OrderSubmitStatus);
		printf("\tExecResult [%c]\n", pOptionSelfClose->ExecResult);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryOptionSelfClose>\n");
};

void CTraderSpi::OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryInvestUnit>\n");
	if (pInvestUnit)
	{
		printf("\tBrokerID [%s]\n", pInvestUnit->BrokerID);
		printf("\tInvestorID [%s]\n", pInvestUnit->InvestorID);
		printf("\tInvestUnitID [%s]\n", pInvestUnit->InvestUnitID);
		printf("\tInvestorUnitName [%s]\n", pInvestUnit->InvestorUnitName);
		printf("\tInvestorGroupID [%s]\n", pInvestUnit->InvestorGroupID);
		printf("\tCommModelID [%s]\n", pInvestUnit->CommModelID);
		printf("\tMarginModelID [%s]\n", pInvestUnit->MarginModelID);
		printf("\tAccountID [%s]\n", pInvestUnit->AccountID);
		printf("\tCurrencyID [%s]\n", pInvestUnit->CurrencyID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryInvestUnit>\n");
};

void CTraderSpi::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryCombInstrumentGuard>\n");
	if (pCombInstrumentGuard)
	{
		printf("\tBrokerID [%s]\n", pCombInstrumentGuard->BrokerID);
		printf("\tInstrumentID [%s]\n", pCombInstrumentGuard->InstrumentID);
		printf("\tExchangeID [%s]\n", pCombInstrumentGuard->ExchangeID);
		printf("\tGuarantRatio [%.8lf]\n", pCombInstrumentGuard->GuarantRatio);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryCombInstrumentGuard>\n");
};

void CTraderSpi::OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryCombAction>\n");
	if (pCombAction)
	{
		printf("\tBrokerID [%s]\n", pCombAction->BrokerID);
		printf("\tInvestorID [%s]\n", pCombAction->InvestorID);
		printf("\tInstrumentID [%s]\n", pCombAction->InstrumentID);
		printf("\tCombActionRef [%s]\n", pCombAction->CombActionRef);
		printf("\tUserID [%s]\n", pCombAction->UserID);
		printf("\tActionLocalID [%s]\n", pCombAction->ActionLocalID);
		printf("\tExchangeID [%s]\n", pCombAction->ExchangeID);
		printf("\tParticipantID [%s]\n", pCombAction->ParticipantID);
		printf("\tClientID [%s]\n", pCombAction->ClientID);
		printf("\tExchangeInstID [%s]\n", pCombAction->ExchangeInstID);
		printf("\tTraderID [%s]\n", pCombAction->TraderID);
		printf("\tTradingDay [%s]\n", pCombAction->TradingDay);
		printf("\tUserProductInfo [%s]\n", pCombAction->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pCombAction->StatusMsg);
		printf("\tIPAddress [%s]\n", pCombAction->IPAddress);
		printf("\tMacAddress [%s]\n", pCombAction->MacAddress);
		printf("\tComTradeID [%s]\n", pCombAction->ComTradeID);
		printf("\tBranchID [%s]\n", pCombAction->BranchID);
		printf("\tInvestUnitID [%s]\n", pCombAction->InvestUnitID);
		printf("\tVolume [%d]\n", pCombAction->Volume);
		printf("\tInstallID [%d]\n", pCombAction->InstallID);
		printf("\tNotifySequence [%d]\n", pCombAction->NotifySequence);
		printf("\tSettlementID [%d]\n", pCombAction->SettlementID);
		printf("\tSequenceNo [%d]\n", pCombAction->SequenceNo);
		printf("\tFrontID [%d]\n", pCombAction->FrontID);
		printf("\tSessionID [%d]\n", pCombAction->SessionID);
		printf("\tDirection [%c]\n", pCombAction->Direction);
		printf("\tCombDirection [%c]\n", pCombAction->CombDirection);
		printf("\tHedgeFlag [%c]\n", pCombAction->HedgeFlag);
		printf("\tActionStatus [%c]\n", pCombAction->ActionStatus);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryCombAction>\n");
};

void CTraderSpi::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryTransferSerial>\n");
	if (pTransferSerial)
	{
		printf("\tTradeDate [%s]\n", pTransferSerial->TradeDate);
		printf("\tTradingDay [%s]\n", pTransferSerial->TradingDay);
		printf("\tTradeTime [%s]\n", pTransferSerial->TradeTime);
		printf("\tTradeCode [%s]\n", pTransferSerial->TradeCode);
		printf("\tBankID [%s]\n", pTransferSerial->BankID);
		printf("\tBankBranchID [%s]\n", pTransferSerial->BankBranchID);
		printf("\tBankAccount [%s]\n", pTransferSerial->BankAccount);
		printf("\tBankSerial [%s]\n", pTransferSerial->BankSerial);
		printf("\tBrokerID [%s]\n", pTransferSerial->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pTransferSerial->BrokerBranchID);
		printf("\tAccountID [%s]\n", pTransferSerial->AccountID);
		printf("\tInvestorID [%s]\n", pTransferSerial->InvestorID);
		printf("\tIdentifiedCardNo [%s]\n", pTransferSerial->IdentifiedCardNo);
		printf("\tCurrencyID [%s]\n", pTransferSerial->CurrencyID);
		printf("\tOperatorCode [%s]\n", pTransferSerial->OperatorCode);
		printf("\tBankNewAccount [%s]\n", pTransferSerial->BankNewAccount);
		printf("\tErrorMsg [%s]\n", pTransferSerial->ErrorMsg);
		printf("\tPlateSerial [%d]\n", pTransferSerial->PlateSerial);
		printf("\tSessionID [%d]\n", pTransferSerial->SessionID);
		printf("\tFutureSerial [%d]\n", pTransferSerial->FutureSerial);
		printf("\tErrorID [%d]\n", pTransferSerial->ErrorID);
		printf("\tBankAccType [%c]\n", pTransferSerial->BankAccType);
		printf("\tFutureAccType [%c]\n", pTransferSerial->FutureAccType);
		printf("\tIdCardType [%c]\n", pTransferSerial->IdCardType);
		printf("\tAvailabilityFlag [%c]\n", pTransferSerial->AvailabilityFlag);
		printf("\tTradeAmount [%.8lf]\n", pTransferSerial->TradeAmount);
		printf("\tCustFee [%.8lf]\n", pTransferSerial->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pTransferSerial->BrokerFee);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryTransferSerial>\n");
};

void CTraderSpi::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryAccountregister>\n");
	if (pAccountregister)
	{
		printf("\tTradeDay [%s]\n", pAccountregister->TradeDay);
		printf("\tBankID [%s]\n", pAccountregister->BankID);
		printf("\tBankBranchID [%s]\n", pAccountregister->BankBranchID);
		printf("\tBankAccount [%s]\n", pAccountregister->BankAccount);
		printf("\tBrokerID [%s]\n", pAccountregister->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pAccountregister->BrokerBranchID);
		printf("\tAccountID [%s]\n", pAccountregister->AccountID);
		printf("\tIdentifiedCardNo [%s]\n", pAccountregister->IdentifiedCardNo);
		printf("\tCustomerName [%s]\n", pAccountregister->CustomerName);
		printf("\tCurrencyID [%s]\n", pAccountregister->CurrencyID);
		printf("\tRegDate [%s]\n", pAccountregister->RegDate);
		printf("\tOutDate [%s]\n", pAccountregister->OutDate);
		printf("\tLongCustomerName [%s]\n", pAccountregister->LongCustomerName);
		printf("\tTID [%d]\n", pAccountregister->TID);
		printf("\tIdCardType [%c]\n", pAccountregister->IdCardType);
		printf("\tOpenOrDestroy [%c]\n", pAccountregister->OpenOrDestroy);
		printf("\tCustType [%c]\n", pAccountregister->CustType);
		printf("\tBankAccType [%c]\n", pAccountregister->BankAccType);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryAccountregister>\n");
};

void CTraderSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspError>\n");
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspError>\n");
};
void CTraderSpi::OnRtnOrder(CThostFtdcOrderField *pOrder)
{
	printf("<OnRtnOrder>\n");
	if (pOrder)
	{
		printf("\tBrokerID [%s]\n", pOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pOrder->InstrumentID);
		printf("\tOrderRef [%s]\n", pOrder->OrderRef);
		printf("\tUserID [%s]\n", pOrder->UserID);
		printf("\tCombOffsetFlag [%s]\n", pOrder->CombOffsetFlag);
		printf("\tCombHedgeFlag [%s]\n", pOrder->CombHedgeFlag);
		printf("\tGTDDate [%s]\n", pOrder->GTDDate);
		printf("\tBusinessUnit [%s]\n", pOrder->BusinessUnit);
		printf("\tOrderLocalID [%s]\n", pOrder->OrderLocalID);
		printf("\tExchangeID [%s]\n", pOrder->ExchangeID);
		printf("\tParticipantID [%s]\n", pOrder->ParticipantID);
		printf("\tClientID [%s]\n", pOrder->ClientID);
		printf("\tExchangeInstID [%s]\n", pOrder->ExchangeInstID);
		printf("\tTraderID [%s]\n", pOrder->TraderID);
		printf("\tTradingDay [%s]\n", pOrder->TradingDay);
		printf("\tOrderSysID [%s]\n", pOrder->OrderSysID);
		printf("\tInsertDate [%s]\n", pOrder->InsertDate);
		printf("\tInsertTime [%s]\n", pOrder->InsertTime);
		printf("\tActiveTime [%s]\n", pOrder->ActiveTime);
		printf("\tSuspendTime [%s]\n", pOrder->SuspendTime);
		printf("\tUpdateTime [%s]\n", pOrder->UpdateTime);
		printf("\tCancelTime [%s]\n", pOrder->CancelTime);
		printf("\tActiveTraderID [%s]\n", pOrder->ActiveTraderID);
		printf("\tClearingPartID [%s]\n", pOrder->ClearingPartID);
		printf("\tUserProductInfo [%s]\n", pOrder->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pOrder->StatusMsg);
		printf("\tActiveUserID [%s]\n", pOrder->ActiveUserID);
		printf("\tRelativeOrderSysID [%s]\n", pOrder->RelativeOrderSysID);
		printf("\tBranchID [%s]\n", pOrder->BranchID);
		printf("\tInvestUnitID [%s]\n", pOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pOrder->CurrencyID);
		printf("\tIPAddress [%s]\n", pOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pOrder->MacAddress);
		printf("\tVolumeTotalOriginal [%d]\n", pOrder->VolumeTotalOriginal);
		printf("\tMinVolume [%d]\n", pOrder->MinVolume);
		printf("\tIsAutoSuspend [%d]\n", pOrder->IsAutoSuspend);
		printf("\tRequestID [%d]\n", pOrder->RequestID);
		printf("\tInstallID [%d]\n", pOrder->InstallID);
		printf("\tNotifySequence [%d]\n", pOrder->NotifySequence);
		printf("\tSettlementID [%d]\n", pOrder->SettlementID);
		printf("\tVolumeTraded [%d]\n", pOrder->VolumeTraded);
		printf("\tVolumeTotal [%d]\n", pOrder->VolumeTotal);
		printf("\tSequenceNo [%d]\n", pOrder->SequenceNo);
		printf("\tFrontID [%d]\n", pOrder->FrontID);
		printf("\tSessionID [%d]\n", pOrder->SessionID);
		printf("\tUserForceClose [%d]\n", pOrder->UserForceClose);
		printf("\tBrokerOrderSeq [%d]\n", pOrder->BrokerOrderSeq);
		printf("\tZCETotalTradedVolume [%d]\n", pOrder->ZCETotalTradedVolume);
		printf("\tIsSwapOrder [%d]\n", pOrder->IsSwapOrder);
		printf("\tOrderPriceType [%c]\n", pOrder->OrderPriceType);
		printf("\tDirection [%c]\n", pOrder->Direction);
		printf("\tTimeCondition [%c]\n", pOrder->TimeCondition);
		printf("\tVolumeCondition [%c]\n", pOrder->VolumeCondition);
		printf("\tContingentCondition [%c]\n", pOrder->ContingentCondition);
		printf("\tForceCloseReason [%c]\n", pOrder->ForceCloseReason);
		printf("\tOrderSubmitStatus [%c]\n", pOrder->OrderSubmitStatus);
		printf("\tOrderSource [%c]\n", pOrder->OrderSource);
		printf("\tOrderStatus [%c]\n", pOrder->OrderStatus);
		printf("\tOrderType [%c]\n", pOrder->OrderType);
		printf("\tLimitPrice [%.8lf]\n", pOrder->LimitPrice);
		printf("\tStopPrice [%.8lf]\n", pOrder->StopPrice);
	}
	printf("</OnRtnOrder>\n");
};
void CTraderSpi::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
	printf("<OnRtnTrade>\n");
	if (pTrade)
	{
		printf("\tBrokerID [%s]\n", pTrade->BrokerID);
		printf("\tInvestorID [%s]\n", pTrade->InvestorID);
		printf("\tInstrumentID [%s]\n", pTrade->InstrumentID);
		printf("\tOrderRef [%s]\n", pTrade->OrderRef);
		printf("\tUserID [%s]\n", pTrade->UserID);
		printf("\tExchangeID [%s]\n", pTrade->ExchangeID);
		printf("\tTradeID [%s]\n", pTrade->TradeID);
		printf("\tOrderSysID [%s]\n", pTrade->OrderSysID);
		printf("\tParticipantID [%s]\n", pTrade->ParticipantID);
		printf("\tClientID [%s]\n", pTrade->ClientID);
		printf("\tExchangeInstID [%s]\n", pTrade->ExchangeInstID);
		printf("\tTradeDate [%s]\n", pTrade->TradeDate);
		printf("\tTradeTime [%s]\n", pTrade->TradeTime);
		printf("\tTraderID [%s]\n", pTrade->TraderID);
		printf("\tOrderLocalID [%s]\n", pTrade->OrderLocalID);
		printf("\tClearingPartID [%s]\n", pTrade->ClearingPartID);
		printf("\tBusinessUnit [%s]\n", pTrade->BusinessUnit);
		printf("\tTradingDay [%s]\n", pTrade->TradingDay);
		printf("\tInvestUnitID [%s]\n", pTrade->InvestUnitID);
		printf("\tVolume [%d]\n", pTrade->Volume);
		printf("\tSequenceNo [%d]\n", pTrade->SequenceNo);
		printf("\tSettlementID [%d]\n", pTrade->SettlementID);
		printf("\tBrokerOrderSeq [%d]\n", pTrade->BrokerOrderSeq);
		printf("\tDirection [%c]\n", pTrade->Direction);
		printf("\tTradingRole [%c]\n", pTrade->TradingRole);
		printf("\tOffsetFlag [%c]\n", pTrade->OffsetFlag);
		printf("\tHedgeFlag [%c]\n", pTrade->HedgeFlag);
		printf("\tTradeType [%c]\n", pTrade->TradeType);
		printf("\tPriceSource [%c]\n", pTrade->PriceSource);
		printf("\tTradeSource [%c]\n", pTrade->TradeSource);
		printf("\tPrice [%.8lf]\n", pTrade->Price);
	}
	printf("</OnRtnTrade>\n");
};
void CTraderSpi::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnOrderInsert>\n");
	if (pInputOrder)
	{
		printf("\tBrokerID [%s]\n", pInputOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pInputOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputOrder->InstrumentID);
		printf("\tOrderRef [%s]\n", pInputOrder->OrderRef);
		printf("\tUserID [%s]\n", pInputOrder->UserID);
		printf("\tCombOffsetFlag [%s]\n", pInputOrder->CombOffsetFlag);
		printf("\tCombHedgeFlag [%s]\n", pInputOrder->CombHedgeFlag);
		printf("\tGTDDate [%s]\n", pInputOrder->GTDDate);
		printf("\tBusinessUnit [%s]\n", pInputOrder->BusinessUnit);
		printf("\tExchangeID [%s]\n", pInputOrder->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pInputOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pInputOrder->CurrencyID);
		printf("\tClientID [%s]\n", pInputOrder->ClientID);
		printf("\tIPAddress [%s]\n", pInputOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pInputOrder->MacAddress);
		printf("\tVolumeTotalOriginal [%d]\n", pInputOrder->VolumeTotalOriginal);
		printf("\tMinVolume [%d]\n", pInputOrder->MinVolume);
		printf("\tIsAutoSuspend [%d]\n", pInputOrder->IsAutoSuspend);
		printf("\tRequestID [%d]\n", pInputOrder->RequestID);
		printf("\tUserForceClose [%d]\n", pInputOrder->UserForceClose);
		printf("\tIsSwapOrder [%d]\n", pInputOrder->IsSwapOrder);
		printf("\tOrderPriceType [%c]\n", pInputOrder->OrderPriceType);
		printf("\tDirection [%c]\n", pInputOrder->Direction);
		printf("\tTimeCondition [%c]\n", pInputOrder->TimeCondition);
		printf("\tVolumeCondition [%c]\n", pInputOrder->VolumeCondition);
		printf("\tContingentCondition [%c]\n", pInputOrder->ContingentCondition);
		printf("\tForceCloseReason [%c]\n", pInputOrder->ForceCloseReason);
		printf("\tLimitPrice [%.8lf]\n", pInputOrder->LimitPrice);
		printf("\tStopPrice [%.8lf]\n", pInputOrder->StopPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnOrderInsert>\n");
};
void CTraderSpi::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnOrderAction>\n");
	if (pOrderAction)
	{
		printf("\tBrokerID [%s]\n", pOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pOrderAction->InvestorID);
		printf("\tOrderRef [%s]\n", pOrderAction->OrderRef);
		printf("\tExchangeID [%s]\n", pOrderAction->ExchangeID);
		printf("\tOrderSysID [%s]\n", pOrderAction->OrderSysID);
		printf("\tActionDate [%s]\n", pOrderAction->ActionDate);
		printf("\tActionTime [%s]\n", pOrderAction->ActionTime);
		printf("\tTraderID [%s]\n", pOrderAction->TraderID);
		printf("\tOrderLocalID [%s]\n", pOrderAction->OrderLocalID);
		printf("\tActionLocalID [%s]\n", pOrderAction->ActionLocalID);
		printf("\tParticipantID [%s]\n", pOrderAction->ParticipantID);
		printf("\tClientID [%s]\n", pOrderAction->ClientID);
		printf("\tBusinessUnit [%s]\n", pOrderAction->BusinessUnit);
		printf("\tUserID [%s]\n", pOrderAction->UserID);
		printf("\tStatusMsg [%s]\n", pOrderAction->StatusMsg);
		printf("\tInstrumentID [%s]\n", pOrderAction->InstrumentID);
		printf("\tBranchID [%s]\n", pOrderAction->BranchID);
		printf("\tInvestUnitID [%s]\n", pOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pOrderAction->MacAddress);
		printf("\tOrderActionRef [%d]\n", pOrderAction->OrderActionRef);
		printf("\tRequestID [%d]\n", pOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pOrderAction->SessionID);
		printf("\tVolumeChange [%d]\n", pOrderAction->VolumeChange);
		printf("\tInstallID [%d]\n", pOrderAction->InstallID);
		printf("\tActionFlag [%c]\n", pOrderAction->ActionFlag);
		printf("\tOrderActionStatus [%c]\n", pOrderAction->OrderActionStatus);
		printf("\tLimitPrice [%.8lf]\n", pOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnOrderAction>\n");
};
void CTraderSpi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
{
	printf("<OnRtnInstrumentStatus>\n");
	if (pInstrumentStatus)
	{
		printf("\tExchangeID [%s]\n", pInstrumentStatus->ExchangeID);
		printf("\tExchangeInstID [%s]\n", pInstrumentStatus->ExchangeInstID);
		printf("\tSettlementGroupID [%s]\n", pInstrumentStatus->SettlementGroupID);
		printf("\tInstrumentID [%s]\n", pInstrumentStatus->InstrumentID);
		printf("\tEnterTime [%s]\n", pInstrumentStatus->EnterTime);
		printf("\tTradingSegmentSN [%d]\n", pInstrumentStatus->TradingSegmentSN);
		printf("\tInstrumentStatus [%c]\n", pInstrumentStatus->InstrumentStatus);
		printf("\tEnterReason [%c]\n", pInstrumentStatus->EnterReason);
	}
	printf("</OnRtnInstrumentStatus>\n");
};
void CTraderSpi::OnRtnBulletin(CThostFtdcBulletinField *pBulletin)
{
	printf("<OnRtnBulletin>\n");
	if (pBulletin)
	{
		printf("\tExchangeID [%s]\n", pBulletin->ExchangeID);
		printf("\tTradingDay [%s]\n", pBulletin->TradingDay);
		printf("\tNewsType [%s]\n", pBulletin->NewsType);
		printf("\tSendTime [%s]\n", pBulletin->SendTime);
		printf("\tAbstract [%s]\n", pBulletin->Abstract);
		printf("\tComeFrom [%s]\n", pBulletin->ComeFrom);
		printf("\tContent [%s]\n", pBulletin->Content);
		printf("\tURLLink [%s]\n", pBulletin->URLLink);
		printf("\tMarketID [%s]\n", pBulletin->MarketID);
		printf("\tBulletinID [%d]\n", pBulletin->BulletinID);
		printf("\tSequenceNo [%d]\n", pBulletin->SequenceNo);
		printf("\tNewsUrgency [%c]\n", pBulletin->NewsUrgency);
	}
	printf("</OnRtnBulletin>\n");
};
void CTraderSpi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
{
	printf("<OnRtnTradingNotice>\n");
	if (pTradingNoticeInfo)
	{
		printf("\tBrokerID [%s]\n", pTradingNoticeInfo->BrokerID);
		printf("\tInvestorID [%s]\n", pTradingNoticeInfo->InvestorID);
		printf("\tSendTime [%s]\n", pTradingNoticeInfo->SendTime);
		printf("\tFieldContent [%s]\n", pTradingNoticeInfo->FieldContent);
		printf("\tInvestUnitID [%s]\n", pTradingNoticeInfo->InvestUnitID);
		printf("\tSequenceNo [%d]\n", pTradingNoticeInfo->SequenceNo);
		printf("\tSequenceSeries [%d]\n", pTradingNoticeInfo->SequenceSeries);
	}
	printf("</OnRtnTradingNotice>\n");
};
void CTraderSpi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
{
	printf("<OnRtnErrorConditionalOrder>\n");
	if (pErrorConditionalOrder)
	{
		printf("\tBrokerID [%s]\n", pErrorConditionalOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pErrorConditionalOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pErrorConditionalOrder->InstrumentID);
		printf("\tOrderRef [%s]\n", pErrorConditionalOrder->OrderRef);
		printf("\tUserID [%s]\n", pErrorConditionalOrder->UserID);
		printf("\tCombOffsetFlag [%s]\n", pErrorConditionalOrder->CombOffsetFlag);
		printf("\tCombHedgeFlag [%s]\n", pErrorConditionalOrder->CombHedgeFlag);
		printf("\tGTDDate [%s]\n", pErrorConditionalOrder->GTDDate);
		printf("\tBusinessUnit [%s]\n", pErrorConditionalOrder->BusinessUnit);
		printf("\tOrderLocalID [%s]\n", pErrorConditionalOrder->OrderLocalID);
		printf("\tExchangeID [%s]\n", pErrorConditionalOrder->ExchangeID);
		printf("\tParticipantID [%s]\n", pErrorConditionalOrder->ParticipantID);
		printf("\tClientID [%s]\n", pErrorConditionalOrder->ClientID);
		printf("\tExchangeInstID [%s]\n", pErrorConditionalOrder->ExchangeInstID);
		printf("\tTraderID [%s]\n", pErrorConditionalOrder->TraderID);
		printf("\tTradingDay [%s]\n", pErrorConditionalOrder->TradingDay);
		printf("\tOrderSysID [%s]\n", pErrorConditionalOrder->OrderSysID);
		printf("\tInsertDate [%s]\n", pErrorConditionalOrder->InsertDate);
		printf("\tInsertTime [%s]\n", pErrorConditionalOrder->InsertTime);
		printf("\tActiveTime [%s]\n", pErrorConditionalOrder->ActiveTime);
		printf("\tSuspendTime [%s]\n", pErrorConditionalOrder->SuspendTime);
		printf("\tUpdateTime [%s]\n", pErrorConditionalOrder->UpdateTime);
		printf("\tCancelTime [%s]\n", pErrorConditionalOrder->CancelTime);
		printf("\tActiveTraderID [%s]\n", pErrorConditionalOrder->ActiveTraderID);
		printf("\tClearingPartID [%s]\n", pErrorConditionalOrder->ClearingPartID);
		printf("\tUserProductInfo [%s]\n", pErrorConditionalOrder->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pErrorConditionalOrder->StatusMsg);
		printf("\tActiveUserID [%s]\n", pErrorConditionalOrder->ActiveUserID);
		printf("\tRelativeOrderSysID [%s]\n", pErrorConditionalOrder->RelativeOrderSysID);
		printf("\tErrorMsg [%s]\n", pErrorConditionalOrder->ErrorMsg);
		printf("\tBranchID [%s]\n", pErrorConditionalOrder->BranchID);
		printf("\tInvestUnitID [%s]\n", pErrorConditionalOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pErrorConditionalOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pErrorConditionalOrder->CurrencyID);
		printf("\tIPAddress [%s]\n", pErrorConditionalOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pErrorConditionalOrder->MacAddress);
		printf("\tVolumeTotalOriginal [%d]\n", pErrorConditionalOrder->VolumeTotalOriginal);
		printf("\tMinVolume [%d]\n", pErrorConditionalOrder->MinVolume);
		printf("\tIsAutoSuspend [%d]\n", pErrorConditionalOrder->IsAutoSuspend);
		printf("\tRequestID [%d]\n", pErrorConditionalOrder->RequestID);
		printf("\tInstallID [%d]\n", pErrorConditionalOrder->InstallID);
		printf("\tNotifySequence [%d]\n", pErrorConditionalOrder->NotifySequence);
		printf("\tSettlementID [%d]\n", pErrorConditionalOrder->SettlementID);
		printf("\tVolumeTraded [%d]\n", pErrorConditionalOrder->VolumeTraded);
		printf("\tVolumeTotal [%d]\n", pErrorConditionalOrder->VolumeTotal);
		printf("\tSequenceNo [%d]\n", pErrorConditionalOrder->SequenceNo);
		printf("\tFrontID [%d]\n", pErrorConditionalOrder->FrontID);
		printf("\tSessionID [%d]\n", pErrorConditionalOrder->SessionID);
		printf("\tUserForceClose [%d]\n", pErrorConditionalOrder->UserForceClose);
		printf("\tBrokerOrderSeq [%d]\n", pErrorConditionalOrder->BrokerOrderSeq);
		printf("\tZCETotalTradedVolume [%d]\n", pErrorConditionalOrder->ZCETotalTradedVolume);
		printf("\tErrorID [%d]\n", pErrorConditionalOrder->ErrorID);
		printf("\tIsSwapOrder [%d]\n", pErrorConditionalOrder->IsSwapOrder);
		printf("\tOrderPriceType [%c]\n", pErrorConditionalOrder->OrderPriceType);
		printf("\tDirection [%c]\n", pErrorConditionalOrder->Direction);
		printf("\tTimeCondition [%c]\n", pErrorConditionalOrder->TimeCondition);
		printf("\tVolumeCondition [%c]\n", pErrorConditionalOrder->VolumeCondition);
		printf("\tContingentCondition [%c]\n", pErrorConditionalOrder->ContingentCondition);
		printf("\tForceCloseReason [%c]\n", pErrorConditionalOrder->ForceCloseReason);
		printf("\tOrderSubmitStatus [%c]\n", pErrorConditionalOrder->OrderSubmitStatus);
		printf("\tOrderSource [%c]\n", pErrorConditionalOrder->OrderSource);
		printf("\tOrderStatus [%c]\n", pErrorConditionalOrder->OrderStatus);
		printf("\tOrderType [%c]\n", pErrorConditionalOrder->OrderType);
		printf("\tLimitPrice [%.8lf]\n", pErrorConditionalOrder->LimitPrice);
		printf("\tStopPrice [%.8lf]\n", pErrorConditionalOrder->StopPrice);
	}
	printf("</OnRtnErrorConditionalOrder>\n");
};
void CTraderSpi::OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder)
{
	printf("<OnRtnExecOrder>\n");
	if (pExecOrder)
	{
		printf("\tBrokerID [%s]\n", pExecOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pExecOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pExecOrder->InstrumentID);
		printf("\tExecOrderRef [%s]\n", pExecOrder->ExecOrderRef);
		printf("\tUserID [%s]\n", pExecOrder->UserID);
		printf("\tBusinessUnit [%s]\n", pExecOrder->BusinessUnit);
		printf("\tExecOrderLocalID [%s]\n", pExecOrder->ExecOrderLocalID);
		printf("\tExchangeID [%s]\n", pExecOrder->ExchangeID);
		printf("\tParticipantID [%s]\n", pExecOrder->ParticipantID);
		printf("\tClientID [%s]\n", pExecOrder->ClientID);
		printf("\tExchangeInstID [%s]\n", pExecOrder->ExchangeInstID);
		printf("\tTraderID [%s]\n", pExecOrder->TraderID);
		printf("\tTradingDay [%s]\n", pExecOrder->TradingDay);
		printf("\tExecOrderSysID [%s]\n", pExecOrder->ExecOrderSysID);
		printf("\tInsertDate [%s]\n", pExecOrder->InsertDate);
		printf("\tInsertTime [%s]\n", pExecOrder->InsertTime);
		printf("\tCancelTime [%s]\n", pExecOrder->CancelTime);
		printf("\tClearingPartID [%s]\n", pExecOrder->ClearingPartID);
		printf("\tUserProductInfo [%s]\n", pExecOrder->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pExecOrder->StatusMsg);
		printf("\tActiveUserID [%s]\n", pExecOrder->ActiveUserID);
		printf("\tBranchID [%s]\n", pExecOrder->BranchID);
		printf("\tInvestUnitID [%s]\n", pExecOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pExecOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pExecOrder->CurrencyID);
		printf("\tIPAddress [%s]\n", pExecOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pExecOrder->MacAddress);
		printf("\tVolume [%d]\n", pExecOrder->Volume);
		printf("\tRequestID [%d]\n", pExecOrder->RequestID);
		printf("\tInstallID [%d]\n", pExecOrder->InstallID);
		printf("\tNotifySequence [%d]\n", pExecOrder->NotifySequence);
		printf("\tSettlementID [%d]\n", pExecOrder->SettlementID);
		printf("\tSequenceNo [%d]\n", pExecOrder->SequenceNo);
		printf("\tFrontID [%d]\n", pExecOrder->FrontID);
		printf("\tSessionID [%d]\n", pExecOrder->SessionID);
		printf("\tBrokerExecOrderSeq [%d]\n", pExecOrder->BrokerExecOrderSeq);
		printf("\tOffsetFlag [%c]\n", pExecOrder->OffsetFlag);
		printf("\tHedgeFlag [%c]\n", pExecOrder->HedgeFlag);
		printf("\tActionType [%c]\n", pExecOrder->ActionType);
		printf("\tPosiDirection [%c]\n", pExecOrder->PosiDirection);
		printf("\tReservePositionFlag [%c]\n", pExecOrder->ReservePositionFlag);
		printf("\tCloseFlag [%c]\n", pExecOrder->CloseFlag);
		printf("\tOrderSubmitStatus [%c]\n", pExecOrder->OrderSubmitStatus);
		printf("\tExecResult [%c]\n", pExecOrder->ExecResult);
	}
	printf("</OnRtnExecOrder>\n");
};
void CTraderSpi::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnExecOrderInsert>\n");
	if (pInputExecOrder)
	{
		printf("\tBrokerID [%s]\n", pInputExecOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pInputExecOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputExecOrder->InstrumentID);
		printf("\tExecOrderRef [%s]\n", pInputExecOrder->ExecOrderRef);
		printf("\tUserID [%s]\n", pInputExecOrder->UserID);
		printf("\tBusinessUnit [%s]\n", pInputExecOrder->BusinessUnit);
		printf("\tExchangeID [%s]\n", pInputExecOrder->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputExecOrder->InvestUnitID);
		printf("\tAccountID [%s]\n", pInputExecOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pInputExecOrder->CurrencyID);
		printf("\tClientID [%s]\n", pInputExecOrder->ClientID);
		printf("\tIPAddress [%s]\n", pInputExecOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pInputExecOrder->MacAddress);
		printf("\tVolume [%d]\n", pInputExecOrder->Volume);
		printf("\tRequestID [%d]\n", pInputExecOrder->RequestID);
		printf("\tOffsetFlag [%c]\n", pInputExecOrder->OffsetFlag);
		printf("\tHedgeFlag [%c]\n", pInputExecOrder->HedgeFlag);
		printf("\tActionType [%c]\n", pInputExecOrder->ActionType);
		printf("\tPosiDirection [%c]\n", pInputExecOrder->PosiDirection);
		printf("\tReservePositionFlag [%c]\n", pInputExecOrder->ReservePositionFlag);
		printf("\tCloseFlag [%c]\n", pInputExecOrder->CloseFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnExecOrderInsert>\n");
};
void CTraderSpi::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnExecOrderAction>\n");
	if (pExecOrderAction)
	{
		printf("\tBrokerID [%s]\n", pExecOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pExecOrderAction->InvestorID);
		printf("\tExecOrderRef [%s]\n", pExecOrderAction->ExecOrderRef);
		printf("\tExchangeID [%s]\n", pExecOrderAction->ExchangeID);
		printf("\tExecOrderSysID [%s]\n", pExecOrderAction->ExecOrderSysID);
		printf("\tActionDate [%s]\n", pExecOrderAction->ActionDate);
		printf("\tActionTime [%s]\n", pExecOrderAction->ActionTime);
		printf("\tTraderID [%s]\n", pExecOrderAction->TraderID);
		printf("\tExecOrderLocalID [%s]\n", pExecOrderAction->ExecOrderLocalID);
		printf("\tActionLocalID [%s]\n", pExecOrderAction->ActionLocalID);
		printf("\tParticipantID [%s]\n", pExecOrderAction->ParticipantID);
		printf("\tClientID [%s]\n", pExecOrderAction->ClientID);
		printf("\tBusinessUnit [%s]\n", pExecOrderAction->BusinessUnit);
		printf("\tUserID [%s]\n", pExecOrderAction->UserID);
		printf("\tStatusMsg [%s]\n", pExecOrderAction->StatusMsg);
		printf("\tInstrumentID [%s]\n", pExecOrderAction->InstrumentID);
		printf("\tBranchID [%s]\n", pExecOrderAction->BranchID);
		printf("\tInvestUnitID [%s]\n", pExecOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pExecOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pExecOrderAction->MacAddress);
		printf("\tExecOrderActionRef [%d]\n", pExecOrderAction->ExecOrderActionRef);
		printf("\tRequestID [%d]\n", pExecOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pExecOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pExecOrderAction->SessionID);
		printf("\tInstallID [%d]\n", pExecOrderAction->InstallID);
		printf("\tActionFlag [%c]\n", pExecOrderAction->ActionFlag);
		printf("\tOrderActionStatus [%c]\n", pExecOrderAction->OrderActionStatus);
		printf("\tActionType [%c]\n", pExecOrderAction->ActionType);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnExecOrderAction>\n");
};
void CTraderSpi::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnForQuoteInsert>\n");
	if (pInputForQuote)
	{
		printf("\tBrokerID [%s]\n", pInputForQuote->BrokerID);
		printf("\tInvestorID [%s]\n", pInputForQuote->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputForQuote->InstrumentID);
		printf("\tForQuoteRef [%s]\n", pInputForQuote->ForQuoteRef);
		printf("\tUserID [%s]\n", pInputForQuote->UserID);
		printf("\tExchangeID [%s]\n", pInputForQuote->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputForQuote->InvestUnitID);
		printf("\tIPAddress [%s]\n", pInputForQuote->IPAddress);
		printf("\tMacAddress [%s]\n", pInputForQuote->MacAddress);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnForQuoteInsert>\n");
};
void CTraderSpi::OnRtnQuote(CThostFtdcQuoteField *pQuote)
{
	printf("<OnRtnQuote>\n");
	if (pQuote)
	{
		printf("\tBrokerID [%s]\n", pQuote->BrokerID);
		printf("\tInvestorID [%s]\n", pQuote->InvestorID);
		printf("\tInstrumentID [%s]\n", pQuote->InstrumentID);
		printf("\tQuoteRef [%s]\n", pQuote->QuoteRef);
		printf("\tUserID [%s]\n", pQuote->UserID);
		printf("\tBusinessUnit [%s]\n", pQuote->BusinessUnit);
		printf("\tQuoteLocalID [%s]\n", pQuote->QuoteLocalID);
		printf("\tExchangeID [%s]\n", pQuote->ExchangeID);
		printf("\tParticipantID [%s]\n", pQuote->ParticipantID);
		printf("\tClientID [%s]\n", pQuote->ClientID);
		printf("\tExchangeInstID [%s]\n", pQuote->ExchangeInstID);
		printf("\tTraderID [%s]\n", pQuote->TraderID);
		printf("\tTradingDay [%s]\n", pQuote->TradingDay);
		printf("\tQuoteSysID [%s]\n", pQuote->QuoteSysID);
		printf("\tInsertDate [%s]\n", pQuote->InsertDate);
		printf("\tInsertTime [%s]\n", pQuote->InsertTime);
		printf("\tCancelTime [%s]\n", pQuote->CancelTime);
		printf("\tClearingPartID [%s]\n", pQuote->ClearingPartID);
		printf("\tAskOrderSysID [%s]\n", pQuote->AskOrderSysID);
		printf("\tBidOrderSysID [%s]\n", pQuote->BidOrderSysID);
		printf("\tUserProductInfo [%s]\n", pQuote->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pQuote->StatusMsg);
		printf("\tActiveUserID [%s]\n", pQuote->ActiveUserID);
		printf("\tAskOrderRef [%s]\n", pQuote->AskOrderRef);
		printf("\tBidOrderRef [%s]\n", pQuote->BidOrderRef);
		printf("\tForQuoteSysID [%s]\n", pQuote->ForQuoteSysID);
		printf("\tBranchID [%s]\n", pQuote->BranchID);
		printf("\tInvestUnitID [%s]\n", pQuote->InvestUnitID);
		printf("\tAccountID [%s]\n", pQuote->AccountID);
		printf("\tCurrencyID [%s]\n", pQuote->CurrencyID);
		printf("\tIPAddress [%s]\n", pQuote->IPAddress);
		printf("\tMacAddress [%s]\n", pQuote->MacAddress);
		printf("\tAskVolume [%d]\n", pQuote->AskVolume);
		printf("\tBidVolume [%d]\n", pQuote->BidVolume);
		printf("\tRequestID [%d]\n", pQuote->RequestID);
		printf("\tInstallID [%d]\n", pQuote->InstallID);
		printf("\tNotifySequence [%d]\n", pQuote->NotifySequence);
		printf("\tSettlementID [%d]\n", pQuote->SettlementID);
		printf("\tSequenceNo [%d]\n", pQuote->SequenceNo);
		printf("\tFrontID [%d]\n", pQuote->FrontID);
		printf("\tSessionID [%d]\n", pQuote->SessionID);
		printf("\tBrokerQuoteSeq [%d]\n", pQuote->BrokerQuoteSeq);
		printf("\tAskOffsetFlag [%c]\n", pQuote->AskOffsetFlag);
		printf("\tBidOffsetFlag [%c]\n", pQuote->BidOffsetFlag);
		printf("\tAskHedgeFlag [%c]\n", pQuote->AskHedgeFlag);
		printf("\tBidHedgeFlag [%c]\n", pQuote->BidHedgeFlag);
		printf("\tOrderSubmitStatus [%c]\n", pQuote->OrderSubmitStatus);
		printf("\tQuoteStatus [%c]\n", pQuote->QuoteStatus);
		printf("\tAskPrice [%.8lf]\n", pQuote->AskPrice);
		printf("\tBidPrice [%.8lf]\n", pQuote->BidPrice);
	}
	printf("</OnRtnQuote>\n");
};
void CTraderSpi::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnQuoteInsert>\n");
	if (pInputQuote)
	{
		printf("\tBrokerID [%s]\n", pInputQuote->BrokerID);
		printf("\tInvestorID [%s]\n", pInputQuote->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputQuote->InstrumentID);
		printf("\tQuoteRef [%s]\n", pInputQuote->QuoteRef);
		printf("\tUserID [%s]\n", pInputQuote->UserID);
		printf("\tBusinessUnit [%s]\n", pInputQuote->BusinessUnit);
		printf("\tAskOrderRef [%s]\n", pInputQuote->AskOrderRef);
		printf("\tBidOrderRef [%s]\n", pInputQuote->BidOrderRef);
		printf("\tForQuoteSysID [%s]\n", pInputQuote->ForQuoteSysID);
		printf("\tExchangeID [%s]\n", pInputQuote->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputQuote->InvestUnitID);
		printf("\tClientID [%s]\n", pInputQuote->ClientID);
		printf("\tIPAddress [%s]\n", pInputQuote->IPAddress);
		printf("\tMacAddress [%s]\n", pInputQuote->MacAddress);
		printf("\tAskVolume [%d]\n", pInputQuote->AskVolume);
		printf("\tBidVolume [%d]\n", pInputQuote->BidVolume);
		printf("\tRequestID [%d]\n", pInputQuote->RequestID);
		printf("\tAskOffsetFlag [%c]\n", pInputQuote->AskOffsetFlag);
		printf("\tBidOffsetFlag [%c]\n", pInputQuote->BidOffsetFlag);
		printf("\tAskHedgeFlag [%c]\n", pInputQuote->AskHedgeFlag);
		printf("\tBidHedgeFlag [%c]\n", pInputQuote->BidHedgeFlag);
		printf("\tAskPrice [%.8lf]\n", pInputQuote->AskPrice);
		printf("\tBidPrice [%.8lf]\n", pInputQuote->BidPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnQuoteInsert>\n");
};
void CTraderSpi::OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnQuoteAction>\n");
	if (pQuoteAction)
	{
		printf("\tBrokerID [%s]\n", pQuoteAction->BrokerID);
		printf("\tInvestorID [%s]\n", pQuoteAction->InvestorID);
		printf("\tQuoteRef [%s]\n", pQuoteAction->QuoteRef);
		printf("\tExchangeID [%s]\n", pQuoteAction->ExchangeID);
		printf("\tQuoteSysID [%s]\n", pQuoteAction->QuoteSysID);
		printf("\tActionDate [%s]\n", pQuoteAction->ActionDate);
		printf("\tActionTime [%s]\n", pQuoteAction->ActionTime);
		printf("\tTraderID [%s]\n", pQuoteAction->TraderID);
		printf("\tQuoteLocalID [%s]\n", pQuoteAction->QuoteLocalID);
		printf("\tActionLocalID [%s]\n", pQuoteAction->ActionLocalID);
		printf("\tParticipantID [%s]\n", pQuoteAction->ParticipantID);
		printf("\tClientID [%s]\n", pQuoteAction->ClientID);
		printf("\tBusinessUnit [%s]\n", pQuoteAction->BusinessUnit);
		printf("\tUserID [%s]\n", pQuoteAction->UserID);
		printf("\tStatusMsg [%s]\n", pQuoteAction->StatusMsg);
		printf("\tInstrumentID [%s]\n", pQuoteAction->InstrumentID);
		printf("\tBranchID [%s]\n", pQuoteAction->BranchID);
		printf("\tInvestUnitID [%s]\n", pQuoteAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pQuoteAction->IPAddress);
		printf("\tMacAddress [%s]\n", pQuoteAction->MacAddress);
		printf("\tQuoteActionRef [%d]\n", pQuoteAction->QuoteActionRef);
		printf("\tRequestID [%d]\n", pQuoteAction->RequestID);
		printf("\tFrontID [%d]\n", pQuoteAction->FrontID);
		printf("\tSessionID [%d]\n", pQuoteAction->SessionID);
		printf("\tInstallID [%d]\n", pQuoteAction->InstallID);
		printf("\tActionFlag [%c]\n", pQuoteAction->ActionFlag);
		printf("\tOrderActionStatus [%c]\n", pQuoteAction->OrderActionStatus);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnQuoteAction>\n");
};
void CTraderSpi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
	printf("<OnRtnForQuoteRsp>\n");
	if (pForQuoteRsp)
	{
		printf("\tTradingDay [%s]\n", pForQuoteRsp->TradingDay);
		printf("\tInstrumentID [%s]\n", pForQuoteRsp->InstrumentID);
		printf("\tForQuoteSysID [%s]\n", pForQuoteRsp->ForQuoteSysID);
		printf("\tForQuoteTime [%s]\n", pForQuoteRsp->ForQuoteTime);
		printf("\tActionDay [%s]\n", pForQuoteRsp->ActionDay);
		printf("\tExchangeID [%s]\n", pForQuoteRsp->ExchangeID);
	}
	printf("</OnRtnForQuoteRsp>\n");
};
void CTraderSpi::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken)
{
	printf("<OnRtnCFMMCTradingAccountToken>\n");
	if (pCFMMCTradingAccountToken)
	{
		printf("\tBrokerID [%s]\n", pCFMMCTradingAccountToken->BrokerID);
		printf("\tParticipantID [%s]\n", pCFMMCTradingAccountToken->ParticipantID);
		printf("\tAccountID [%s]\n", pCFMMCTradingAccountToken->AccountID);
		printf("\tToken [%s]\n", pCFMMCTradingAccountToken->Token);
		printf("\tKeyID [%d]\n", pCFMMCTradingAccountToken->KeyID);
	}
	printf("</OnRtnCFMMCTradingAccountToken>\n");
};
void CTraderSpi::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnBatchOrderAction>\n");
	if (pBatchOrderAction)
	{
		printf("\tBrokerID [%s]\n", pBatchOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pBatchOrderAction->InvestorID);
		printf("\tExchangeID [%s]\n", pBatchOrderAction->ExchangeID);
		printf("\tActionDate [%s]\n", pBatchOrderAction->ActionDate);
		printf("\tActionTime [%s]\n", pBatchOrderAction->ActionTime);
		printf("\tTraderID [%s]\n", pBatchOrderAction->TraderID);
		printf("\tActionLocalID [%s]\n", pBatchOrderAction->ActionLocalID);
		printf("\tParticipantID [%s]\n", pBatchOrderAction->ParticipantID);
		printf("\tClientID [%s]\n", pBatchOrderAction->ClientID);
		printf("\tBusinessUnit [%s]\n", pBatchOrderAction->BusinessUnit);
		printf("\tUserID [%s]\n", pBatchOrderAction->UserID);
		printf("\tStatusMsg [%s]\n", pBatchOrderAction->StatusMsg);
		printf("\tInvestUnitID [%s]\n", pBatchOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pBatchOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pBatchOrderAction->MacAddress);
		printf("\tOrderActionRef [%d]\n", pBatchOrderAction->OrderActionRef);
		printf("\tRequestID [%d]\n", pBatchOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pBatchOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pBatchOrderAction->SessionID);
		printf("\tInstallID [%d]\n", pBatchOrderAction->InstallID);
		printf("\tOrderActionStatus [%c]\n", pBatchOrderAction->OrderActionStatus);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnBatchOrderAction>\n");
};
void CTraderSpi::OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose)
{
	printf("<OnRtnOptionSelfClose>\n");
	if (pOptionSelfClose)
	{
		printf("\tBrokerID [%s]\n", pOptionSelfClose->BrokerID);
		printf("\tInvestorID [%s]\n", pOptionSelfClose->InvestorID);
		printf("\tInstrumentID [%s]\n", pOptionSelfClose->InstrumentID);
		printf("\tOptionSelfCloseRef [%s]\n", pOptionSelfClose->OptionSelfCloseRef);
		printf("\tUserID [%s]\n", pOptionSelfClose->UserID);
		printf("\tBusinessUnit [%s]\n", pOptionSelfClose->BusinessUnit);
		printf("\tOptionSelfCloseLocalID [%s]\n", pOptionSelfClose->OptionSelfCloseLocalID);
		printf("\tExchangeID [%s]\n", pOptionSelfClose->ExchangeID);
		printf("\tParticipantID [%s]\n", pOptionSelfClose->ParticipantID);
		printf("\tClientID [%s]\n", pOptionSelfClose->ClientID);
		printf("\tExchangeInstID [%s]\n", pOptionSelfClose->ExchangeInstID);
		printf("\tTraderID [%s]\n", pOptionSelfClose->TraderID);
		printf("\tTradingDay [%s]\n", pOptionSelfClose->TradingDay);
		printf("\tOptionSelfCloseSysID [%s]\n", pOptionSelfClose->OptionSelfCloseSysID);
		printf("\tInsertDate [%s]\n", pOptionSelfClose->InsertDate);
		printf("\tInsertTime [%s]\n", pOptionSelfClose->InsertTime);
		printf("\tCancelTime [%s]\n", pOptionSelfClose->CancelTime);
		printf("\tClearingPartID [%s]\n", pOptionSelfClose->ClearingPartID);
		printf("\tUserProductInfo [%s]\n", pOptionSelfClose->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pOptionSelfClose->StatusMsg);
		printf("\tActiveUserID [%s]\n", pOptionSelfClose->ActiveUserID);
		printf("\tBranchID [%s]\n", pOptionSelfClose->BranchID);
		printf("\tInvestUnitID [%s]\n", pOptionSelfClose->InvestUnitID);
		printf("\tAccountID [%s]\n", pOptionSelfClose->AccountID);
		printf("\tCurrencyID [%s]\n", pOptionSelfClose->CurrencyID);
		printf("\tIPAddress [%s]\n", pOptionSelfClose->IPAddress);
		printf("\tMacAddress [%s]\n", pOptionSelfClose->MacAddress);
		printf("\tVolume [%d]\n", pOptionSelfClose->Volume);
		printf("\tRequestID [%d]\n", pOptionSelfClose->RequestID);
		printf("\tInstallID [%d]\n", pOptionSelfClose->InstallID);
		printf("\tNotifySequence [%d]\n", pOptionSelfClose->NotifySequence);
		printf("\tSettlementID [%d]\n", pOptionSelfClose->SettlementID);
		printf("\tSequenceNo [%d]\n", pOptionSelfClose->SequenceNo);
		printf("\tFrontID [%d]\n", pOptionSelfClose->FrontID);
		printf("\tSessionID [%d]\n", pOptionSelfClose->SessionID);
		printf("\tBrokerOptionSelfCloseSeq [%d]\n", pOptionSelfClose->BrokerOptionSelfCloseSeq);
		printf("\tHedgeFlag [%c]\n", pOptionSelfClose->HedgeFlag);
		printf("\tOptSelfCloseFlag [%c]\n", pOptionSelfClose->OptSelfCloseFlag);
		printf("\tOrderSubmitStatus [%c]\n", pOptionSelfClose->OrderSubmitStatus);
		printf("\tExecResult [%c]\n", pOptionSelfClose->ExecResult);
	}
	printf("</OnRtnOptionSelfClose>\n");
};
void CTraderSpi::OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnOptionSelfCloseInsert>\n");
	if (pInputOptionSelfClose)
	{
		printf("\tBrokerID [%s]\n", pInputOptionSelfClose->BrokerID);
		printf("\tInvestorID [%s]\n", pInputOptionSelfClose->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputOptionSelfClose->InstrumentID);
		printf("\tOptionSelfCloseRef [%s]\n", pInputOptionSelfClose->OptionSelfCloseRef);
		printf("\tUserID [%s]\n", pInputOptionSelfClose->UserID);
		printf("\tBusinessUnit [%s]\n", pInputOptionSelfClose->BusinessUnit);
		printf("\tExchangeID [%s]\n", pInputOptionSelfClose->ExchangeID);
		printf("\tInvestUnitID [%s]\n", pInputOptionSelfClose->InvestUnitID);
		printf("\tAccountID [%s]\n", pInputOptionSelfClose->AccountID);
		printf("\tCurrencyID [%s]\n", pInputOptionSelfClose->CurrencyID);
		printf("\tClientID [%s]\n", pInputOptionSelfClose->ClientID);
		printf("\tIPAddress [%s]\n", pInputOptionSelfClose->IPAddress);
		printf("\tMacAddress [%s]\n", pInputOptionSelfClose->MacAddress);
		printf("\tVolume [%d]\n", pInputOptionSelfClose->Volume);
		printf("\tRequestID [%d]\n", pInputOptionSelfClose->RequestID);
		printf("\tHedgeFlag [%c]\n", pInputOptionSelfClose->HedgeFlag);
		printf("\tOptSelfCloseFlag [%c]\n", pInputOptionSelfClose->OptSelfCloseFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnOptionSelfCloseInsert>\n");
};
void CTraderSpi::OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnOptionSelfCloseAction>\n");
	if (pOptionSelfCloseAction)
	{
		printf("\tBrokerID [%s]\n", pOptionSelfCloseAction->BrokerID);
		printf("\tInvestorID [%s]\n", pOptionSelfCloseAction->InvestorID);
		printf("\tOptionSelfCloseRef [%s]\n", pOptionSelfCloseAction->OptionSelfCloseRef);
		printf("\tExchangeID [%s]\n", pOptionSelfCloseAction->ExchangeID);
		printf("\tOptionSelfCloseSysID [%s]\n", pOptionSelfCloseAction->OptionSelfCloseSysID);
		printf("\tActionDate [%s]\n", pOptionSelfCloseAction->ActionDate);
		printf("\tActionTime [%s]\n", pOptionSelfCloseAction->ActionTime);
		printf("\tTraderID [%s]\n", pOptionSelfCloseAction->TraderID);
		printf("\tOptionSelfCloseLocalID [%s]\n", pOptionSelfCloseAction->OptionSelfCloseLocalID);
		printf("\tActionLocalID [%s]\n", pOptionSelfCloseAction->ActionLocalID);
		printf("\tParticipantID [%s]\n", pOptionSelfCloseAction->ParticipantID);
		printf("\tClientID [%s]\n", pOptionSelfCloseAction->ClientID);
		printf("\tBusinessUnit [%s]\n", pOptionSelfCloseAction->BusinessUnit);
		printf("\tUserID [%s]\n", pOptionSelfCloseAction->UserID);
		printf("\tStatusMsg [%s]\n", pOptionSelfCloseAction->StatusMsg);
		printf("\tInstrumentID [%s]\n", pOptionSelfCloseAction->InstrumentID);
		printf("\tBranchID [%s]\n", pOptionSelfCloseAction->BranchID);
		printf("\tInvestUnitID [%s]\n", pOptionSelfCloseAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pOptionSelfCloseAction->IPAddress);
		printf("\tMacAddress [%s]\n", pOptionSelfCloseAction->MacAddress);
		printf("\tOptionSelfCloseActionRef [%d]\n", pOptionSelfCloseAction->OptionSelfCloseActionRef);
		printf("\tRequestID [%d]\n", pOptionSelfCloseAction->RequestID);
		printf("\tFrontID [%d]\n", pOptionSelfCloseAction->FrontID);
		printf("\tSessionID [%d]\n", pOptionSelfCloseAction->SessionID);
		printf("\tInstallID [%d]\n", pOptionSelfCloseAction->InstallID);
		printf("\tActionFlag [%c]\n", pOptionSelfCloseAction->ActionFlag);
		printf("\tOrderActionStatus [%c]\n", pOptionSelfCloseAction->OrderActionStatus);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnOptionSelfCloseAction>\n");
};
void CTraderSpi::OnRtnCombAction(CThostFtdcCombActionField *pCombAction)
{
	printf("<OnRtnCombAction>\n");
	if (pCombAction)
	{
		printf("\tBrokerID [%s]\n", pCombAction->BrokerID);
		printf("\tInvestorID [%s]\n", pCombAction->InvestorID);
		printf("\tInstrumentID [%s]\n", pCombAction->InstrumentID);
		printf("\tCombActionRef [%s]\n", pCombAction->CombActionRef);
		printf("\tUserID [%s]\n", pCombAction->UserID);
		printf("\tActionLocalID [%s]\n", pCombAction->ActionLocalID);
		printf("\tExchangeID [%s]\n", pCombAction->ExchangeID);
		printf("\tParticipantID [%s]\n", pCombAction->ParticipantID);
		printf("\tClientID [%s]\n", pCombAction->ClientID);
		printf("\tExchangeInstID [%s]\n", pCombAction->ExchangeInstID);
		printf("\tTraderID [%s]\n", pCombAction->TraderID);
		printf("\tTradingDay [%s]\n", pCombAction->TradingDay);
		printf("\tUserProductInfo [%s]\n", pCombAction->UserProductInfo);
		printf("\tStatusMsg [%s]\n", pCombAction->StatusMsg);
		printf("\tIPAddress [%s]\n", pCombAction->IPAddress);
		printf("\tMacAddress [%s]\n", pCombAction->MacAddress);
		printf("\tComTradeID [%s]\n", pCombAction->ComTradeID);
		printf("\tBranchID [%s]\n", pCombAction->BranchID);
		printf("\tInvestUnitID [%s]\n", pCombAction->InvestUnitID);
		printf("\tVolume [%d]\n", pCombAction->Volume);
		printf("\tInstallID [%d]\n", pCombAction->InstallID);
		printf("\tNotifySequence [%d]\n", pCombAction->NotifySequence);
		printf("\tSettlementID [%d]\n", pCombAction->SettlementID);
		printf("\tSequenceNo [%d]\n", pCombAction->SequenceNo);
		printf("\tFrontID [%d]\n", pCombAction->FrontID);
		printf("\tSessionID [%d]\n", pCombAction->SessionID);
		printf("\tDirection [%c]\n", pCombAction->Direction);
		printf("\tCombDirection [%c]\n", pCombAction->CombDirection);
		printf("\tHedgeFlag [%c]\n", pCombAction->HedgeFlag);
		printf("\tActionStatus [%c]\n", pCombAction->ActionStatus);
	}
	printf("</OnRtnCombAction>\n");
};
void CTraderSpi::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnCombActionInsert>\n");
	if (pInputCombAction)
	{
		printf("\tBrokerID [%s]\n", pInputCombAction->BrokerID);
		printf("\tInvestorID [%s]\n", pInputCombAction->InvestorID);
		printf("\tInstrumentID [%s]\n", pInputCombAction->InstrumentID);
		printf("\tCombActionRef [%s]\n", pInputCombAction->CombActionRef);
		printf("\tUserID [%s]\n", pInputCombAction->UserID);
		printf("\tExchangeID [%s]\n", pInputCombAction->ExchangeID);
		printf("\tIPAddress [%s]\n", pInputCombAction->IPAddress);
		printf("\tMacAddress [%s]\n", pInputCombAction->MacAddress);
		printf("\tInvestUnitID [%s]\n", pInputCombAction->InvestUnitID);
		printf("\tVolume [%d]\n", pInputCombAction->Volume);
		printf("\tDirection [%c]\n", pInputCombAction->Direction);
		printf("\tCombDirection [%c]\n", pInputCombAction->CombDirection);
		printf("\tHedgeFlag [%c]\n", pInputCombAction->HedgeFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnCombActionInsert>\n");
};
void CTraderSpi::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryContractBank>\n");
	if (pContractBank)
	{
		printf("\tBrokerID [%s]\n", pContractBank->BrokerID);
		printf("\tBankID [%s]\n", pContractBank->BankID);
		printf("\tBankBrchID [%s]\n", pContractBank->BankBrchID);
		printf("\tBankName [%s]\n", pContractBank->BankName);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryContractBank>\n");
};

void CTraderSpi::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryParkedOrder>\n");
	if (pParkedOrder)
	{
		printf("\tBrokerID [%s]\n", pParkedOrder->BrokerID);
		printf("\tInvestorID [%s]\n", pParkedOrder->InvestorID);
		printf("\tInstrumentID [%s]\n", pParkedOrder->InstrumentID);
		printf("\tOrderRef [%s]\n", pParkedOrder->OrderRef);
		printf("\tUserID [%s]\n", pParkedOrder->UserID);
		printf("\tCombOffsetFlag [%s]\n", pParkedOrder->CombOffsetFlag);
		printf("\tCombHedgeFlag [%s]\n", pParkedOrder->CombHedgeFlag);
		printf("\tGTDDate [%s]\n", pParkedOrder->GTDDate);
		printf("\tBusinessUnit [%s]\n", pParkedOrder->BusinessUnit);
		printf("\tExchangeID [%s]\n", pParkedOrder->ExchangeID);
		printf("\tParkedOrderID [%s]\n", pParkedOrder->ParkedOrderID);
		printf("\tErrorMsg [%s]\n", pParkedOrder->ErrorMsg);
		printf("\tAccountID [%s]\n", pParkedOrder->AccountID);
		printf("\tCurrencyID [%s]\n", pParkedOrder->CurrencyID);
		printf("\tClientID [%s]\n", pParkedOrder->ClientID);
		printf("\tInvestUnitID [%s]\n", pParkedOrder->InvestUnitID);
		printf("\tIPAddress [%s]\n", pParkedOrder->IPAddress);
		printf("\tMacAddress [%s]\n", pParkedOrder->MacAddress);
		printf("\tVolumeTotalOriginal [%d]\n", pParkedOrder->VolumeTotalOriginal);
		printf("\tMinVolume [%d]\n", pParkedOrder->MinVolume);
		printf("\tIsAutoSuspend [%d]\n", pParkedOrder->IsAutoSuspend);
		printf("\tRequestID [%d]\n", pParkedOrder->RequestID);
		printf("\tUserForceClose [%d]\n", pParkedOrder->UserForceClose);
		printf("\tErrorID [%d]\n", pParkedOrder->ErrorID);
		printf("\tIsSwapOrder [%d]\n", pParkedOrder->IsSwapOrder);
		printf("\tOrderPriceType [%c]\n", pParkedOrder->OrderPriceType);
		printf("\tDirection [%c]\n", pParkedOrder->Direction);
		printf("\tTimeCondition [%c]\n", pParkedOrder->TimeCondition);
		printf("\tVolumeCondition [%c]\n", pParkedOrder->VolumeCondition);
		printf("\tContingentCondition [%c]\n", pParkedOrder->ContingentCondition);
		printf("\tForceCloseReason [%c]\n", pParkedOrder->ForceCloseReason);
		printf("\tUserType [%c]\n", pParkedOrder->UserType);
		printf("\tStatus [%c]\n", pParkedOrder->Status);
		printf("\tLimitPrice [%.8lf]\n", pParkedOrder->LimitPrice);
		printf("\tStopPrice [%.8lf]\n", pParkedOrder->StopPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryParkedOrder>\n");
};

void CTraderSpi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryParkedOrderAction>\n");
	if (pParkedOrderAction)
	{
		printf("\tBrokerID [%s]\n", pParkedOrderAction->BrokerID);
		printf("\tInvestorID [%s]\n", pParkedOrderAction->InvestorID);
		printf("\tOrderRef [%s]\n", pParkedOrderAction->OrderRef);
		printf("\tExchangeID [%s]\n", pParkedOrderAction->ExchangeID);
		printf("\tOrderSysID [%s]\n", pParkedOrderAction->OrderSysID);
		printf("\tUserID [%s]\n", pParkedOrderAction->UserID);
		printf("\tInstrumentID [%s]\n", pParkedOrderAction->InstrumentID);
		printf("\tParkedOrderActionID [%s]\n", pParkedOrderAction->ParkedOrderActionID);
		printf("\tErrorMsg [%s]\n", pParkedOrderAction->ErrorMsg);
		printf("\tInvestUnitID [%s]\n", pParkedOrderAction->InvestUnitID);
		printf("\tIPAddress [%s]\n", pParkedOrderAction->IPAddress);
		printf("\tMacAddress [%s]\n", pParkedOrderAction->MacAddress);
		printf("\tOrderActionRef [%d]\n", pParkedOrderAction->OrderActionRef);
		printf("\tRequestID [%d]\n", pParkedOrderAction->RequestID);
		printf("\tFrontID [%d]\n", pParkedOrderAction->FrontID);
		printf("\tSessionID [%d]\n", pParkedOrderAction->SessionID);
		printf("\tVolumeChange [%d]\n", pParkedOrderAction->VolumeChange);
		printf("\tErrorID [%d]\n", pParkedOrderAction->ErrorID);
		printf("\tActionFlag [%c]\n", pParkedOrderAction->ActionFlag);
		printf("\tUserType [%c]\n", pParkedOrderAction->UserType);
		printf("\tStatus [%c]\n", pParkedOrderAction->Status);
		printf("\tLimitPrice [%.8lf]\n", pParkedOrderAction->LimitPrice);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryParkedOrderAction>\n");
};

void CTraderSpi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryTradingNotice>\n");
	if (pTradingNotice)
	{
		printf("\tBrokerID [%s]\n", pTradingNotice->BrokerID);
		printf("\tInvestorID [%s]\n", pTradingNotice->InvestorID);
		printf("\tUserID [%s]\n", pTradingNotice->UserID);
		printf("\tSendTime [%s]\n", pTradingNotice->SendTime);
		printf("\tFieldContent [%s]\n", pTradingNotice->FieldContent);
		printf("\tInvestUnitID [%s]\n", pTradingNotice->InvestUnitID);
		printf("\tSequenceNo [%d]\n", pTradingNotice->SequenceNo);
		printf("\tInvestorRange [%c]\n", pTradingNotice->InvestorRange);
		printf("\tSequenceSeries [%d]\n", pTradingNotice->SequenceSeries);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryTradingNotice>\n");
};

void CTraderSpi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryBrokerTradingParams>\n");
	if (pBrokerTradingParams)
	{
		printf("\tBrokerID [%s]\n", pBrokerTradingParams->BrokerID);
		printf("\tInvestorID [%s]\n", pBrokerTradingParams->InvestorID);
		printf("\tCurrencyID [%s]\n", pBrokerTradingParams->CurrencyID);
		printf("\tAccountID [%s]\n", pBrokerTradingParams->AccountID);
		printf("\tMarginPriceType [%c]\n", pBrokerTradingParams->MarginPriceType);
		printf("\tAlgorithm [%c]\n", pBrokerTradingParams->Algorithm);
		printf("\tAvailIncludeCloseProfit [%c]\n", pBrokerTradingParams->AvailIncludeCloseProfit);
		printf("\tOptionRoyaltyPriceType [%c]\n", pBrokerTradingParams->OptionRoyaltyPriceType);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryBrokerTradingParams>\n");
};

void CTraderSpi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQryBrokerTradingAlgos>\n");
	if (pBrokerTradingAlgos)
	{
		printf("\tBrokerID [%s]\n", pBrokerTradingAlgos->BrokerID);
		printf("\tExchangeID [%s]\n", pBrokerTradingAlgos->ExchangeID);
		printf("\tInstrumentID [%s]\n", pBrokerTradingAlgos->InstrumentID);
		printf("\tHandlePositionAlgoID [%c]\n", pBrokerTradingAlgos->HandlePositionAlgoID);
		printf("\tFindMarginRateAlgoID [%c]\n", pBrokerTradingAlgos->FindMarginRateAlgoID);
		printf("\tHandleTradingAccountAlgoID [%c]\n", pBrokerTradingAlgos->HandleTradingAccountAlgoID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQryBrokerTradingAlgos>\n");
};

void CTraderSpi::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQueryCFMMCTradingAccountToken>\n");
	if (pQueryCFMMCTradingAccountToken)
	{
		printf("\tBrokerID [%s]\n", pQueryCFMMCTradingAccountToken->BrokerID);
		printf("\tInvestorID [%s]\n", pQueryCFMMCTradingAccountToken->InvestorID);
		printf("\tInvestUnitID [%s]\n", pQueryCFMMCTradingAccountToken->InvestUnitID);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQueryCFMMCTradingAccountToken>\n");
};

void CTraderSpi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	printf("<OnRtnFromBankToFutureByBank>\n");
	if (pRspTransfer)
	{
		printf("\tTradeCode [%s]\n", pRspTransfer->TradeCode);
		printf("\tBankID [%s]\n", pRspTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pRspTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pRspTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pRspTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pRspTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pRspTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pRspTransfer->AccountID);
		printf("\tPassword [%s]\n", pRspTransfer->Password);
		printf("\tUserID [%s]\n", pRspTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pRspTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pRspTransfer->Message);
		printf("\tDigest [%s]\n", pRspTransfer->Digest);
		printf("\tDeviceID [%s]\n", pRspTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspTransfer->OperNo);
		printf("\tErrorMsg [%s]\n", pRspTransfer->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pRspTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pRspTransfer->SessionID);
		printf("\tInstallID [%d]\n", pRspTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pRspTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pRspTransfer->RequestID);
		printf("\tTID [%d]\n", pRspTransfer->TID);
		printf("\tErrorID [%d]\n", pRspTransfer->ErrorID);
		printf("\tLastFragment [%c]\n", pRspTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pRspTransfer->IdCardType);
		printf("\tCustType [%c]\n", pRspTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspTransfer->BrokerFee);
	}
	printf("</OnRtnFromBankToFutureByBank>\n");
};
void CTraderSpi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer)
{
	printf("<OnRtnFromFutureToBankByBank>\n");
	if (pRspTransfer)
	{
		printf("\tTradeCode [%s]\n", pRspTransfer->TradeCode);
		printf("\tBankID [%s]\n", pRspTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pRspTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pRspTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pRspTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pRspTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pRspTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pRspTransfer->AccountID);
		printf("\tPassword [%s]\n", pRspTransfer->Password);
		printf("\tUserID [%s]\n", pRspTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pRspTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pRspTransfer->Message);
		printf("\tDigest [%s]\n", pRspTransfer->Digest);
		printf("\tDeviceID [%s]\n", pRspTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspTransfer->OperNo);
		printf("\tErrorMsg [%s]\n", pRspTransfer->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pRspTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pRspTransfer->SessionID);
		printf("\tInstallID [%d]\n", pRspTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pRspTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pRspTransfer->RequestID);
		printf("\tTID [%d]\n", pRspTransfer->TID);
		printf("\tErrorID [%d]\n", pRspTransfer->ErrorID);
		printf("\tLastFragment [%c]\n", pRspTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pRspTransfer->IdCardType);
		printf("\tCustType [%c]\n", pRspTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspTransfer->BrokerFee);
	}
	printf("</OnRtnFromFutureToBankByBank>\n");
};
void CTraderSpi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	printf("<OnRtnRepealFromBankToFutureByBank>\n");
	if (pRspRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pRspRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pRspRepeal->TradeCode);
		printf("\tBankID [%s]\n", pRspRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pRspRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pRspRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pRspRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pRspRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pRspRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pRspRepeal->AccountID);
		printf("\tPassword [%s]\n", pRspRepeal->Password);
		printf("\tUserID [%s]\n", pRspRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pRspRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pRspRepeal->Message);
		printf("\tDigest [%s]\n", pRspRepeal->Digest);
		printf("\tDeviceID [%s]\n", pRspRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspRepeal->OperNo);
		printf("\tErrorMsg [%s]\n", pRspRepeal->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pRspRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pRspRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pRspRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pRspRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pRspRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pRspRepeal->SessionID);
		printf("\tInstallID [%d]\n", pRspRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pRspRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pRspRepeal->RequestID);
		printf("\tTID [%d]\n", pRspRepeal->TID);
		printf("\tErrorID [%d]\n", pRspRepeal->ErrorID);
		printf("\tBankRepealFlag [%c]\n", pRspRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pRspRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pRspRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pRspRepeal->IdCardType);
		printf("\tCustType [%c]\n", pRspRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspRepeal->BrokerFee);
	}
	printf("</OnRtnRepealFromBankToFutureByBank>\n");
};
void CTraderSpi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal)
{
	printf("<OnRtnRepealFromFutureToBankByBank>\n");
	if (pRspRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pRspRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pRspRepeal->TradeCode);
		printf("\tBankID [%s]\n", pRspRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pRspRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pRspRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pRspRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pRspRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pRspRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pRspRepeal->AccountID);
		printf("\tPassword [%s]\n", pRspRepeal->Password);
		printf("\tUserID [%s]\n", pRspRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pRspRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pRspRepeal->Message);
		printf("\tDigest [%s]\n", pRspRepeal->Digest);
		printf("\tDeviceID [%s]\n", pRspRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspRepeal->OperNo);
		printf("\tErrorMsg [%s]\n", pRspRepeal->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pRspRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pRspRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pRspRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pRspRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pRspRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pRspRepeal->SessionID);
		printf("\tInstallID [%d]\n", pRspRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pRspRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pRspRepeal->RequestID);
		printf("\tTID [%d]\n", pRspRepeal->TID);
		printf("\tErrorID [%d]\n", pRspRepeal->ErrorID);
		printf("\tBankRepealFlag [%c]\n", pRspRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pRspRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pRspRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pRspRepeal->IdCardType);
		printf("\tCustType [%c]\n", pRspRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspRepeal->BrokerFee);
	}
	printf("</OnRtnRepealFromFutureToBankByBank>\n");
};
void CTraderSpi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	printf("<OnRtnFromBankToFutureByFuture>\n");
	if (pRspTransfer)
	{
		printf("\tTradeCode [%s]\n", pRspTransfer->TradeCode);
		printf("\tBankID [%s]\n", pRspTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pRspTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pRspTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pRspTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pRspTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pRspTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pRspTransfer->AccountID);
		printf("\tPassword [%s]\n", pRspTransfer->Password);
		printf("\tUserID [%s]\n", pRspTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pRspTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pRspTransfer->Message);
		printf("\tDigest [%s]\n", pRspTransfer->Digest);
		printf("\tDeviceID [%s]\n", pRspTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspTransfer->OperNo);
		printf("\tErrorMsg [%s]\n", pRspTransfer->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pRspTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pRspTransfer->SessionID);
		printf("\tInstallID [%d]\n", pRspTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pRspTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pRspTransfer->RequestID);
		printf("\tTID [%d]\n", pRspTransfer->TID);
		printf("\tErrorID [%d]\n", pRspTransfer->ErrorID);
		printf("\tLastFragment [%c]\n", pRspTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pRspTransfer->IdCardType);
		printf("\tCustType [%c]\n", pRspTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspTransfer->BrokerFee);
	}
	printf("</OnRtnFromBankToFutureByFuture>\n");
};
void CTraderSpi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
	printf("<OnRtnFromFutureToBankByFuture>\n");
	if (pRspTransfer)
	{
		printf("\tTradeCode [%s]\n", pRspTransfer->TradeCode);
		printf("\tBankID [%s]\n", pRspTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pRspTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pRspTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pRspTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pRspTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pRspTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pRspTransfer->AccountID);
		printf("\tPassword [%s]\n", pRspTransfer->Password);
		printf("\tUserID [%s]\n", pRspTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pRspTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pRspTransfer->Message);
		printf("\tDigest [%s]\n", pRspTransfer->Digest);
		printf("\tDeviceID [%s]\n", pRspTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspTransfer->OperNo);
		printf("\tErrorMsg [%s]\n", pRspTransfer->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pRspTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pRspTransfer->SessionID);
		printf("\tInstallID [%d]\n", pRspTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pRspTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pRspTransfer->RequestID);
		printf("\tTID [%d]\n", pRspTransfer->TID);
		printf("\tErrorID [%d]\n", pRspTransfer->ErrorID);
		printf("\tLastFragment [%c]\n", pRspTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pRspTransfer->IdCardType);
		printf("\tCustType [%c]\n", pRspTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspTransfer->BrokerFee);
	}
	printf("</OnRtnFromFutureToBankByFuture>\n");
};
void CTraderSpi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	printf("<OnRtnRepealFromBankToFutureByFutureManual>\n");
	if (pRspRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pRspRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pRspRepeal->TradeCode);
		printf("\tBankID [%s]\n", pRspRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pRspRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pRspRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pRspRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pRspRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pRspRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pRspRepeal->AccountID);
		printf("\tPassword [%s]\n", pRspRepeal->Password);
		printf("\tUserID [%s]\n", pRspRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pRspRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pRspRepeal->Message);
		printf("\tDigest [%s]\n", pRspRepeal->Digest);
		printf("\tDeviceID [%s]\n", pRspRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspRepeal->OperNo);
		printf("\tErrorMsg [%s]\n", pRspRepeal->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pRspRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pRspRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pRspRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pRspRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pRspRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pRspRepeal->SessionID);
		printf("\tInstallID [%d]\n", pRspRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pRspRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pRspRepeal->RequestID);
		printf("\tTID [%d]\n", pRspRepeal->TID);
		printf("\tErrorID [%d]\n", pRspRepeal->ErrorID);
		printf("\tBankRepealFlag [%c]\n", pRspRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pRspRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pRspRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pRspRepeal->IdCardType);
		printf("\tCustType [%c]\n", pRspRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspRepeal->BrokerFee);
	}
	printf("</OnRtnRepealFromBankToFutureByFutureManual>\n");
};
void CTraderSpi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
	printf("<OnRtnRepealFromFutureToBankByFutureManual>\n");
	if (pRspRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pRspRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pRspRepeal->TradeCode);
		printf("\tBankID [%s]\n", pRspRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pRspRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pRspRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pRspRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pRspRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pRspRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pRspRepeal->AccountID);
		printf("\tPassword [%s]\n", pRspRepeal->Password);
		printf("\tUserID [%s]\n", pRspRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pRspRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pRspRepeal->Message);
		printf("\tDigest [%s]\n", pRspRepeal->Digest);
		printf("\tDeviceID [%s]\n", pRspRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspRepeal->OperNo);
		printf("\tErrorMsg [%s]\n", pRspRepeal->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pRspRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pRspRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pRspRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pRspRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pRspRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pRspRepeal->SessionID);
		printf("\tInstallID [%d]\n", pRspRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pRspRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pRspRepeal->RequestID);
		printf("\tTID [%d]\n", pRspRepeal->TID);
		printf("\tErrorID [%d]\n", pRspRepeal->ErrorID);
		printf("\tBankRepealFlag [%c]\n", pRspRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pRspRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pRspRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pRspRepeal->IdCardType);
		printf("\tCustType [%c]\n", pRspRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspRepeal->BrokerFee);
	}
	printf("</OnRtnRepealFromFutureToBankByFutureManual>\n");
};
void CTraderSpi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
{
	printf("<OnRtnQueryBankBalanceByFuture>\n");
	if (pNotifyQueryAccount)
	{
		printf("\tTradeCode [%s]\n", pNotifyQueryAccount->TradeCode);
		printf("\tBankID [%s]\n", pNotifyQueryAccount->BankID);
		printf("\tBankBranchID [%s]\n", pNotifyQueryAccount->BankBranchID);
		printf("\tBrokerID [%s]\n", pNotifyQueryAccount->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pNotifyQueryAccount->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pNotifyQueryAccount->TradeDate);
		printf("\tTradeTime [%s]\n", pNotifyQueryAccount->TradeTime);
		printf("\tBankSerial [%s]\n", pNotifyQueryAccount->BankSerial);
		printf("\tTradingDay [%s]\n", pNotifyQueryAccount->TradingDay);
		printf("\tCustomerName [%s]\n", pNotifyQueryAccount->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pNotifyQueryAccount->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pNotifyQueryAccount->BankAccount);
		printf("\tBankPassWord [%s]\n", pNotifyQueryAccount->BankPassWord);
		printf("\tAccountID [%s]\n", pNotifyQueryAccount->AccountID);
		printf("\tPassword [%s]\n", pNotifyQueryAccount->Password);
		printf("\tUserID [%s]\n", pNotifyQueryAccount->UserID);
		printf("\tCurrencyID [%s]\n", pNotifyQueryAccount->CurrencyID);
		printf("\tDigest [%s]\n", pNotifyQueryAccount->Digest);
		printf("\tDeviceID [%s]\n", pNotifyQueryAccount->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pNotifyQueryAccount->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pNotifyQueryAccount->BankSecuAcc);
		printf("\tOperNo [%s]\n", pNotifyQueryAccount->OperNo);
		printf("\tErrorMsg [%s]\n", pNotifyQueryAccount->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pNotifyQueryAccount->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pNotifyQueryAccount->PlateSerial);
		printf("\tSessionID [%d]\n", pNotifyQueryAccount->SessionID);
		printf("\tFutureSerial [%d]\n", pNotifyQueryAccount->FutureSerial);
		printf("\tInstallID [%d]\n", pNotifyQueryAccount->InstallID);
		printf("\tRequestID [%d]\n", pNotifyQueryAccount->RequestID);
		printf("\tTID [%d]\n", pNotifyQueryAccount->TID);
		printf("\tErrorID [%d]\n", pNotifyQueryAccount->ErrorID);
		printf("\tLastFragment [%c]\n", pNotifyQueryAccount->LastFragment);
		printf("\tIdCardType [%c]\n", pNotifyQueryAccount->IdCardType);
		printf("\tCustType [%c]\n", pNotifyQueryAccount->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pNotifyQueryAccount->VerifyCertNoFlag);
		printf("\tBankAccType [%c]\n", pNotifyQueryAccount->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pNotifyQueryAccount->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pNotifyQueryAccount->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pNotifyQueryAccount->SecuPwdFlag);
		printf("\tBankUseAmount [%.8lf]\n", pNotifyQueryAccount->BankUseAmount);
		printf("\tBankFetchAmount [%.8lf]\n", pNotifyQueryAccount->BankFetchAmount);
	}
	printf("</OnRtnQueryBankBalanceByFuture>\n");
};
void CTraderSpi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnBankToFutureByFuture>\n");
	if (pReqTransfer)
	{
		printf("\tTradeCode [%s]\n", pReqTransfer->TradeCode);
		printf("\tBankID [%s]\n", pReqTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pReqTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pReqTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pReqTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pReqTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pReqTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pReqTransfer->AccountID);
		printf("\tPassword [%s]\n", pReqTransfer->Password);
		printf("\tUserID [%s]\n", pReqTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pReqTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pReqTransfer->Message);
		printf("\tDigest [%s]\n", pReqTransfer->Digest);
		printf("\tDeviceID [%s]\n", pReqTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqTransfer->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pReqTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pReqTransfer->SessionID);
		printf("\tInstallID [%d]\n", pReqTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pReqTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pReqTransfer->RequestID);
		printf("\tTID [%d]\n", pReqTransfer->TID);
		printf("\tLastFragment [%c]\n", pReqTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pReqTransfer->IdCardType);
		printf("\tCustType [%c]\n", pReqTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pReqTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pReqTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pReqTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pReqTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pReqTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pReqTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnBankToFutureByFuture>\n");
};
void CTraderSpi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnFutureToBankByFuture>\n");
	if (pReqTransfer)
	{
		printf("\tTradeCode [%s]\n", pReqTransfer->TradeCode);
		printf("\tBankID [%s]\n", pReqTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pReqTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pReqTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pReqTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pReqTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pReqTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pReqTransfer->AccountID);
		printf("\tPassword [%s]\n", pReqTransfer->Password);
		printf("\tUserID [%s]\n", pReqTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pReqTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pReqTransfer->Message);
		printf("\tDigest [%s]\n", pReqTransfer->Digest);
		printf("\tDeviceID [%s]\n", pReqTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqTransfer->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pReqTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pReqTransfer->SessionID);
		printf("\tInstallID [%d]\n", pReqTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pReqTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pReqTransfer->RequestID);
		printf("\tTID [%d]\n", pReqTransfer->TID);
		printf("\tLastFragment [%c]\n", pReqTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pReqTransfer->IdCardType);
		printf("\tCustType [%c]\n", pReqTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pReqTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pReqTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pReqTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pReqTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pReqTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pReqTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnFutureToBankByFuture>\n");
};
void CTraderSpi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnRepealBankToFutureByFutureManual>\n");
	if (pReqRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pReqRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pReqRepeal->TradeCode);
		printf("\tBankID [%s]\n", pReqRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pReqRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pReqRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pReqRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pReqRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pReqRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pReqRepeal->AccountID);
		printf("\tPassword [%s]\n", pReqRepeal->Password);
		printf("\tUserID [%s]\n", pReqRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pReqRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pReqRepeal->Message);
		printf("\tDigest [%s]\n", pReqRepeal->Digest);
		printf("\tDeviceID [%s]\n", pReqRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqRepeal->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pReqRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pReqRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pReqRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pReqRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pReqRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pReqRepeal->SessionID);
		printf("\tInstallID [%d]\n", pReqRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pReqRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pReqRepeal->RequestID);
		printf("\tTID [%d]\n", pReqRepeal->TID);
		printf("\tBankRepealFlag [%c]\n", pReqRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pReqRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pReqRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pReqRepeal->IdCardType);
		printf("\tCustType [%c]\n", pReqRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pReqRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pReqRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pReqRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pReqRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pReqRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pReqRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pReqRepeal->BrokerFee);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnRepealBankToFutureByFutureManual>\n");
};
void CTraderSpi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnRepealFutureToBankByFutureManual>\n");
	if (pReqRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pReqRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pReqRepeal->TradeCode);
		printf("\tBankID [%s]\n", pReqRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pReqRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pReqRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pReqRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pReqRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pReqRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pReqRepeal->AccountID);
		printf("\tPassword [%s]\n", pReqRepeal->Password);
		printf("\tUserID [%s]\n", pReqRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pReqRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pReqRepeal->Message);
		printf("\tDigest [%s]\n", pReqRepeal->Digest);
		printf("\tDeviceID [%s]\n", pReqRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqRepeal->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pReqRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pReqRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pReqRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pReqRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pReqRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pReqRepeal->SessionID);
		printf("\tInstallID [%d]\n", pReqRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pReqRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pReqRepeal->RequestID);
		printf("\tTID [%d]\n", pReqRepeal->TID);
		printf("\tBankRepealFlag [%c]\n", pReqRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pReqRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pReqRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pReqRepeal->IdCardType);
		printf("\tCustType [%c]\n", pReqRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pReqRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pReqRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pReqRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pReqRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pReqRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pReqRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pReqRepeal->BrokerFee);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnRepealFutureToBankByFutureManual>\n");
};
void CTraderSpi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo)
{
	printf("<OnErrRtnQueryBankBalanceByFuture>\n");
	if (pReqQueryAccount)
	{
		printf("\tTradeCode [%s]\n", pReqQueryAccount->TradeCode);
		printf("\tBankID [%s]\n", pReqQueryAccount->BankID);
		printf("\tBankBranchID [%s]\n", pReqQueryAccount->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqQueryAccount->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqQueryAccount->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqQueryAccount->TradeDate);
		printf("\tTradeTime [%s]\n", pReqQueryAccount->TradeTime);
		printf("\tBankSerial [%s]\n", pReqQueryAccount->BankSerial);
		printf("\tTradingDay [%s]\n", pReqQueryAccount->TradingDay);
		printf("\tCustomerName [%s]\n", pReqQueryAccount->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqQueryAccount->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqQueryAccount->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqQueryAccount->BankPassWord);
		printf("\tAccountID [%s]\n", pReqQueryAccount->AccountID);
		printf("\tPassword [%s]\n", pReqQueryAccount->Password);
		printf("\tUserID [%s]\n", pReqQueryAccount->UserID);
		printf("\tCurrencyID [%s]\n", pReqQueryAccount->CurrencyID);
		printf("\tDigest [%s]\n", pReqQueryAccount->Digest);
		printf("\tDeviceID [%s]\n", pReqQueryAccount->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqQueryAccount->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqQueryAccount->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqQueryAccount->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqQueryAccount->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pReqQueryAccount->PlateSerial);
		printf("\tSessionID [%d]\n", pReqQueryAccount->SessionID);
		printf("\tFutureSerial [%d]\n", pReqQueryAccount->FutureSerial);
		printf("\tInstallID [%d]\n", pReqQueryAccount->InstallID);
		printf("\tRequestID [%d]\n", pReqQueryAccount->RequestID);
		printf("\tTID [%d]\n", pReqQueryAccount->TID);
		printf("\tLastFragment [%c]\n", pReqQueryAccount->LastFragment);
		printf("\tIdCardType [%c]\n", pReqQueryAccount->IdCardType);
		printf("\tCustType [%c]\n", pReqQueryAccount->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqQueryAccount->VerifyCertNoFlag);
		printf("\tBankAccType [%c]\n", pReqQueryAccount->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqQueryAccount->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqQueryAccount->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqQueryAccount->SecuPwdFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("</OnErrRtnQueryBankBalanceByFuture>\n");
};
void CTraderSpi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	printf("<OnRtnRepealFromBankToFutureByFuture>\n");
	if (pRspRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pRspRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pRspRepeal->TradeCode);
		printf("\tBankID [%s]\n", pRspRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pRspRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pRspRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pRspRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pRspRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pRspRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pRspRepeal->AccountID);
		printf("\tPassword [%s]\n", pRspRepeal->Password);
		printf("\tUserID [%s]\n", pRspRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pRspRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pRspRepeal->Message);
		printf("\tDigest [%s]\n", pRspRepeal->Digest);
		printf("\tDeviceID [%s]\n", pRspRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspRepeal->OperNo);
		printf("\tErrorMsg [%s]\n", pRspRepeal->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pRspRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pRspRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pRspRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pRspRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pRspRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pRspRepeal->SessionID);
		printf("\tInstallID [%d]\n", pRspRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pRspRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pRspRepeal->RequestID);
		printf("\tTID [%d]\n", pRspRepeal->TID);
		printf("\tErrorID [%d]\n", pRspRepeal->ErrorID);
		printf("\tBankRepealFlag [%c]\n", pRspRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pRspRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pRspRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pRspRepeal->IdCardType);
		printf("\tCustType [%c]\n", pRspRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspRepeal->BrokerFee);
	}
	printf("</OnRtnRepealFromBankToFutureByFuture>\n");
};
void CTraderSpi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
	printf("<OnRtnRepealFromFutureToBankByFuture>\n");
	if (pRspRepeal)
	{
		printf("\tBankRepealSerial [%s]\n", pRspRepeal->BankRepealSerial);
		printf("\tTradeCode [%s]\n", pRspRepeal->TradeCode);
		printf("\tBankID [%s]\n", pRspRepeal->BankID);
		printf("\tBankBranchID [%s]\n", pRspRepeal->BankBranchID);
		printf("\tBrokerID [%s]\n", pRspRepeal->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pRspRepeal->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pRspRepeal->TradeDate);
		printf("\tTradeTime [%s]\n", pRspRepeal->TradeTime);
		printf("\tBankSerial [%s]\n", pRspRepeal->BankSerial);
		printf("\tTradingDay [%s]\n", pRspRepeal->TradingDay);
		printf("\tCustomerName [%s]\n", pRspRepeal->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pRspRepeal->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pRspRepeal->BankAccount);
		printf("\tBankPassWord [%s]\n", pRspRepeal->BankPassWord);
		printf("\tAccountID [%s]\n", pRspRepeal->AccountID);
		printf("\tPassword [%s]\n", pRspRepeal->Password);
		printf("\tUserID [%s]\n", pRspRepeal->UserID);
		printf("\tCurrencyID [%s]\n", pRspRepeal->CurrencyID);
		printf("\tMessage [%s]\n", pRspRepeal->Message);
		printf("\tDigest [%s]\n", pRspRepeal->Digest);
		printf("\tDeviceID [%s]\n", pRspRepeal->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pRspRepeal->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pRspRepeal->BankSecuAcc);
		printf("\tOperNo [%s]\n", pRspRepeal->OperNo);
		printf("\tErrorMsg [%s]\n", pRspRepeal->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pRspRepeal->LongCustomerName);
		printf("\tRepealTimeInterval [%d]\n", pRspRepeal->RepealTimeInterval);
		printf("\tRepealedTimes [%d]\n", pRspRepeal->RepealedTimes);
		printf("\tPlateRepealSerial [%d]\n", pRspRepeal->PlateRepealSerial);
		printf("\tFutureRepealSerial [%d]\n", pRspRepeal->FutureRepealSerial);
		printf("\tPlateSerial [%d]\n", pRspRepeal->PlateSerial);
		printf("\tSessionID [%d]\n", pRspRepeal->SessionID);
		printf("\tInstallID [%d]\n", pRspRepeal->InstallID);
		printf("\tFutureSerial [%d]\n", pRspRepeal->FutureSerial);
		printf("\tRequestID [%d]\n", pRspRepeal->RequestID);
		printf("\tTID [%d]\n", pRspRepeal->TID);
		printf("\tErrorID [%d]\n", pRspRepeal->ErrorID);
		printf("\tBankRepealFlag [%c]\n", pRspRepeal->BankRepealFlag);
		printf("\tBrokerRepealFlag [%c]\n", pRspRepeal->BrokerRepealFlag);
		printf("\tLastFragment [%c]\n", pRspRepeal->LastFragment);
		printf("\tIdCardType [%c]\n", pRspRepeal->IdCardType);
		printf("\tCustType [%c]\n", pRspRepeal->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pRspRepeal->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pRspRepeal->FeePayFlag);
		printf("\tBankAccType [%c]\n", pRspRepeal->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pRspRepeal->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pRspRepeal->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pRspRepeal->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pRspRepeal->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pRspRepeal->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pRspRepeal->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pRspRepeal->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pRspRepeal->BrokerFee);
	}
	printf("</OnRtnRepealFromFutureToBankByFuture>\n");
};
void CTraderSpi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspFromBankToFutureByFuture>\n");
	if (pReqTransfer)
	{
		printf("\tTradeCode [%s]\n", pReqTransfer->TradeCode);
		printf("\tBankID [%s]\n", pReqTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pReqTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pReqTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pReqTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pReqTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pReqTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pReqTransfer->AccountID);
		printf("\tPassword [%s]\n", pReqTransfer->Password);
		printf("\tUserID [%s]\n", pReqTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pReqTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pReqTransfer->Message);
		printf("\tDigest [%s]\n", pReqTransfer->Digest);
		printf("\tDeviceID [%s]\n", pReqTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqTransfer->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pReqTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pReqTransfer->SessionID);
		printf("\tInstallID [%d]\n", pReqTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pReqTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pReqTransfer->RequestID);
		printf("\tTID [%d]\n", pReqTransfer->TID);
		printf("\tLastFragment [%c]\n", pReqTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pReqTransfer->IdCardType);
		printf("\tCustType [%c]\n", pReqTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pReqTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pReqTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pReqTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pReqTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pReqTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pReqTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspFromBankToFutureByFuture>\n");
};

void CTraderSpi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspFromFutureToBankByFuture>\n");
	if (pReqTransfer)
	{
		printf("\tTradeCode [%s]\n", pReqTransfer->TradeCode);
		printf("\tBankID [%s]\n", pReqTransfer->BankID);
		printf("\tBankBranchID [%s]\n", pReqTransfer->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqTransfer->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqTransfer->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqTransfer->TradeDate);
		printf("\tTradeTime [%s]\n", pReqTransfer->TradeTime);
		printf("\tBankSerial [%s]\n", pReqTransfer->BankSerial);
		printf("\tTradingDay [%s]\n", pReqTransfer->TradingDay);
		printf("\tCustomerName [%s]\n", pReqTransfer->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqTransfer->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqTransfer->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqTransfer->BankPassWord);
		printf("\tAccountID [%s]\n", pReqTransfer->AccountID);
		printf("\tPassword [%s]\n", pReqTransfer->Password);
		printf("\tUserID [%s]\n", pReqTransfer->UserID);
		printf("\tCurrencyID [%s]\n", pReqTransfer->CurrencyID);
		printf("\tMessage [%s]\n", pReqTransfer->Message);
		printf("\tDigest [%s]\n", pReqTransfer->Digest);
		printf("\tDeviceID [%s]\n", pReqTransfer->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqTransfer->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqTransfer->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqTransfer->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqTransfer->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pReqTransfer->PlateSerial);
		printf("\tSessionID [%d]\n", pReqTransfer->SessionID);
		printf("\tInstallID [%d]\n", pReqTransfer->InstallID);
		printf("\tFutureSerial [%d]\n", pReqTransfer->FutureSerial);
		printf("\tRequestID [%d]\n", pReqTransfer->RequestID);
		printf("\tTID [%d]\n", pReqTransfer->TID);
		printf("\tLastFragment [%c]\n", pReqTransfer->LastFragment);
		printf("\tIdCardType [%c]\n", pReqTransfer->IdCardType);
		printf("\tCustType [%c]\n", pReqTransfer->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqTransfer->VerifyCertNoFlag);
		printf("\tFeePayFlag [%c]\n", pReqTransfer->FeePayFlag);
		printf("\tBankAccType [%c]\n", pReqTransfer->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqTransfer->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqTransfer->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqTransfer->SecuPwdFlag);
		printf("\tTransferStatus [%c]\n", pReqTransfer->TransferStatus);
		printf("\tTradeAmount [%.8lf]\n", pReqTransfer->TradeAmount);
		printf("\tFutureFetchAmount [%.8lf]\n", pReqTransfer->FutureFetchAmount);
		printf("\tCustFee [%.8lf]\n", pReqTransfer->CustFee);
		printf("\tBrokerFee [%.8lf]\n", pReqTransfer->BrokerFee);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspFromFutureToBankByFuture>\n");
};

void CTraderSpi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	printf("<OnRspQueryBankAccountMoneyByFuture>\n");
	if (pReqQueryAccount)
	{
		printf("\tTradeCode [%s]\n", pReqQueryAccount->TradeCode);
		printf("\tBankID [%s]\n", pReqQueryAccount->BankID);
		printf("\tBankBranchID [%s]\n", pReqQueryAccount->BankBranchID);
		printf("\tBrokerID [%s]\n", pReqQueryAccount->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pReqQueryAccount->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pReqQueryAccount->TradeDate);
		printf("\tTradeTime [%s]\n", pReqQueryAccount->TradeTime);
		printf("\tBankSerial [%s]\n", pReqQueryAccount->BankSerial);
		printf("\tTradingDay [%s]\n", pReqQueryAccount->TradingDay);
		printf("\tCustomerName [%s]\n", pReqQueryAccount->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pReqQueryAccount->IdentifiedCardNo);
		printf("\tBankAccount [%s]\n", pReqQueryAccount->BankAccount);
		printf("\tBankPassWord [%s]\n", pReqQueryAccount->BankPassWord);
		printf("\tAccountID [%s]\n", pReqQueryAccount->AccountID);
		printf("\tPassword [%s]\n", pReqQueryAccount->Password);
		printf("\tUserID [%s]\n", pReqQueryAccount->UserID);
		printf("\tCurrencyID [%s]\n", pReqQueryAccount->CurrencyID);
		printf("\tDigest [%s]\n", pReqQueryAccount->Digest);
		printf("\tDeviceID [%s]\n", pReqQueryAccount->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pReqQueryAccount->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pReqQueryAccount->BankSecuAcc);
		printf("\tOperNo [%s]\n", pReqQueryAccount->OperNo);
		printf("\tLongCustomerName [%s]\n", pReqQueryAccount->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pReqQueryAccount->PlateSerial);
		printf("\tSessionID [%d]\n", pReqQueryAccount->SessionID);
		printf("\tFutureSerial [%d]\n", pReqQueryAccount->FutureSerial);
		printf("\tInstallID [%d]\n", pReqQueryAccount->InstallID);
		printf("\tRequestID [%d]\n", pReqQueryAccount->RequestID);
		printf("\tTID [%d]\n", pReqQueryAccount->TID);
		printf("\tLastFragment [%c]\n", pReqQueryAccount->LastFragment);
		printf("\tIdCardType [%c]\n", pReqQueryAccount->IdCardType);
		printf("\tCustType [%c]\n", pReqQueryAccount->CustType);
		printf("\tVerifyCertNoFlag [%c]\n", pReqQueryAccount->VerifyCertNoFlag);
		printf("\tBankAccType [%c]\n", pReqQueryAccount->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pReqQueryAccount->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pReqQueryAccount->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pReqQueryAccount->SecuPwdFlag);
	}
	if (pRspInfo)
	{
		printf("\tErrorMsg [%s]\n", pRspInfo->ErrorMsg);
		printf("\tErrorID [%d]\n", pRspInfo->ErrorID);
	}
	printf("\tnRequestID [%d]\n", nRequestID);
	printf("\tbIsLast [%d]\n", bIsLast);
	printf("</OnRspQueryBankAccountMoneyByFuture>\n");
};

void CTraderSpi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount)
{
	printf("<OnRtnOpenAccountByBank>\n");
	if (pOpenAccount)
	{
		printf("\tTradeCode [%s]\n", pOpenAccount->TradeCode);
		printf("\tBankID [%s]\n", pOpenAccount->BankID);
		printf("\tBankBranchID [%s]\n", pOpenAccount->BankBranchID);
		printf("\tBrokerID [%s]\n", pOpenAccount->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pOpenAccount->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pOpenAccount->TradeDate);
		printf("\tTradeTime [%s]\n", pOpenAccount->TradeTime);
		printf("\tBankSerial [%s]\n", pOpenAccount->BankSerial);
		printf("\tTradingDay [%s]\n", pOpenAccount->TradingDay);
		printf("\tCustomerName [%s]\n", pOpenAccount->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pOpenAccount->IdentifiedCardNo);
		printf("\tCountryCode [%s]\n", pOpenAccount->CountryCode);
		printf("\tAddress [%s]\n", pOpenAccount->Address);
		printf("\tZipCode [%s]\n", pOpenAccount->ZipCode);
		printf("\tTelephone [%s]\n", pOpenAccount->Telephone);
		printf("\tMobilePhone [%s]\n", pOpenAccount->MobilePhone);
		printf("\tFax [%s]\n", pOpenAccount->Fax);
		printf("\tEMail [%s]\n", pOpenAccount->EMail);
		printf("\tBankAccount [%s]\n", pOpenAccount->BankAccount);
		printf("\tBankPassWord [%s]\n", pOpenAccount->BankPassWord);
		printf("\tAccountID [%s]\n", pOpenAccount->AccountID);
		printf("\tPassword [%s]\n", pOpenAccount->Password);
		printf("\tCurrencyID [%s]\n", pOpenAccount->CurrencyID);
		printf("\tDigest [%s]\n", pOpenAccount->Digest);
		printf("\tDeviceID [%s]\n", pOpenAccount->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pOpenAccount->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pOpenAccount->BankSecuAcc);
		printf("\tOperNo [%s]\n", pOpenAccount->OperNo);
		printf("\tUserID [%s]\n", pOpenAccount->UserID);
		printf("\tErrorMsg [%s]\n", pOpenAccount->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pOpenAccount->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pOpenAccount->PlateSerial);
		printf("\tSessionID [%d]\n", pOpenAccount->SessionID);
		printf("\tInstallID [%d]\n", pOpenAccount->InstallID);
		printf("\tTID [%d]\n", pOpenAccount->TID);
		printf("\tErrorID [%d]\n", pOpenAccount->ErrorID);
		printf("\tLastFragment [%c]\n", pOpenAccount->LastFragment);
		printf("\tIdCardType [%c]\n", pOpenAccount->IdCardType);
		printf("\tGender [%c]\n", pOpenAccount->Gender);
		printf("\tCustType [%c]\n", pOpenAccount->CustType);
		printf("\tMoneyAccountStatus [%c]\n", pOpenAccount->MoneyAccountStatus);
		printf("\tVerifyCertNoFlag [%c]\n", pOpenAccount->VerifyCertNoFlag);
		printf("\tCashExchangeCode [%c]\n", pOpenAccount->CashExchangeCode);
		printf("\tBankAccType [%c]\n", pOpenAccount->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pOpenAccount->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pOpenAccount->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pOpenAccount->SecuPwdFlag);
	}
	printf("</OnRtnOpenAccountByBank>\n");
};
void CTraderSpi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount)
{
	printf("<OnRtnCancelAccountByBank>\n");
	if (pCancelAccount)
	{
		printf("\tTradeCode [%s]\n", pCancelAccount->TradeCode);
		printf("\tBankID [%s]\n", pCancelAccount->BankID);
		printf("\tBankBranchID [%s]\n", pCancelAccount->BankBranchID);
		printf("\tBrokerID [%s]\n", pCancelAccount->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pCancelAccount->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pCancelAccount->TradeDate);
		printf("\tTradeTime [%s]\n", pCancelAccount->TradeTime);
		printf("\tBankSerial [%s]\n", pCancelAccount->BankSerial);
		printf("\tTradingDay [%s]\n", pCancelAccount->TradingDay);
		printf("\tCustomerName [%s]\n", pCancelAccount->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pCancelAccount->IdentifiedCardNo);
		printf("\tCountryCode [%s]\n", pCancelAccount->CountryCode);
		printf("\tAddress [%s]\n", pCancelAccount->Address);
		printf("\tZipCode [%s]\n", pCancelAccount->ZipCode);
		printf("\tTelephone [%s]\n", pCancelAccount->Telephone);
		printf("\tMobilePhone [%s]\n", pCancelAccount->MobilePhone);
		printf("\tFax [%s]\n", pCancelAccount->Fax);
		printf("\tEMail [%s]\n", pCancelAccount->EMail);
		printf("\tBankAccount [%s]\n", pCancelAccount->BankAccount);
		printf("\tBankPassWord [%s]\n", pCancelAccount->BankPassWord);
		printf("\tAccountID [%s]\n", pCancelAccount->AccountID);
		printf("\tPassword [%s]\n", pCancelAccount->Password);
		printf("\tCurrencyID [%s]\n", pCancelAccount->CurrencyID);
		printf("\tDigest [%s]\n", pCancelAccount->Digest);
		printf("\tDeviceID [%s]\n", pCancelAccount->DeviceID);
		printf("\tBrokerIDByBank [%s]\n", pCancelAccount->BrokerIDByBank);
		printf("\tBankSecuAcc [%s]\n", pCancelAccount->BankSecuAcc);
		printf("\tOperNo [%s]\n", pCancelAccount->OperNo);
		printf("\tUserID [%s]\n", pCancelAccount->UserID);
		printf("\tErrorMsg [%s]\n", pCancelAccount->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pCancelAccount->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pCancelAccount->PlateSerial);
		printf("\tSessionID [%d]\n", pCancelAccount->SessionID);
		printf("\tInstallID [%d]\n", pCancelAccount->InstallID);
		printf("\tTID [%d]\n", pCancelAccount->TID);
		printf("\tErrorID [%d]\n", pCancelAccount->ErrorID);
		printf("\tLastFragment [%c]\n", pCancelAccount->LastFragment);
		printf("\tIdCardType [%c]\n", pCancelAccount->IdCardType);
		printf("\tGender [%c]\n", pCancelAccount->Gender);
		printf("\tCustType [%c]\n", pCancelAccount->CustType);
		printf("\tMoneyAccountStatus [%c]\n", pCancelAccount->MoneyAccountStatus);
		printf("\tVerifyCertNoFlag [%c]\n", pCancelAccount->VerifyCertNoFlag);
		printf("\tCashExchangeCode [%c]\n", pCancelAccount->CashExchangeCode);
		printf("\tBankAccType [%c]\n", pCancelAccount->BankAccType);
		printf("\tBankSecuAccType [%c]\n", pCancelAccount->BankSecuAccType);
		printf("\tBankPwdFlag [%c]\n", pCancelAccount->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pCancelAccount->SecuPwdFlag);
	}
	printf("</OnRtnCancelAccountByBank>\n");
};
void CTraderSpi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount)
{
	printf("<OnRtnChangeAccountByBank>\n");
	if (pChangeAccount)
	{
		printf("\tTradeCode [%s]\n", pChangeAccount->TradeCode);
		printf("\tBankID [%s]\n", pChangeAccount->BankID);
		printf("\tBankBranchID [%s]\n", pChangeAccount->BankBranchID);
		printf("\tBrokerID [%s]\n", pChangeAccount->BrokerID);
		printf("\tBrokerBranchID [%s]\n", pChangeAccount->BrokerBranchID);
		printf("\tTradeDate [%s]\n", pChangeAccount->TradeDate);
		printf("\tTradeTime [%s]\n", pChangeAccount->TradeTime);
		printf("\tBankSerial [%s]\n", pChangeAccount->BankSerial);
		printf("\tTradingDay [%s]\n", pChangeAccount->TradingDay);
		printf("\tCustomerName [%s]\n", pChangeAccount->CustomerName);
		printf("\tIdentifiedCardNo [%s]\n", pChangeAccount->IdentifiedCardNo);
		printf("\tCountryCode [%s]\n", pChangeAccount->CountryCode);
		printf("\tAddress [%s]\n", pChangeAccount->Address);
		printf("\tZipCode [%s]\n", pChangeAccount->ZipCode);
		printf("\tTelephone [%s]\n", pChangeAccount->Telephone);
		printf("\tMobilePhone [%s]\n", pChangeAccount->MobilePhone);
		printf("\tFax [%s]\n", pChangeAccount->Fax);
		printf("\tEMail [%s]\n", pChangeAccount->EMail);
		printf("\tBankAccount [%s]\n", pChangeAccount->BankAccount);
		printf("\tBankPassWord [%s]\n", pChangeAccount->BankPassWord);
		printf("\tNewBankAccount [%s]\n", pChangeAccount->NewBankAccount);
		printf("\tNewBankPassWord [%s]\n", pChangeAccount->NewBankPassWord);
		printf("\tAccountID [%s]\n", pChangeAccount->AccountID);
		printf("\tPassword [%s]\n", pChangeAccount->Password);
		printf("\tCurrencyID [%s]\n", pChangeAccount->CurrencyID);
		printf("\tBrokerIDByBank [%s]\n", pChangeAccount->BrokerIDByBank);
		printf("\tDigest [%s]\n", pChangeAccount->Digest);
		printf("\tErrorMsg [%s]\n", pChangeAccount->ErrorMsg);
		printf("\tLongCustomerName [%s]\n", pChangeAccount->LongCustomerName);
		printf("\tPlateSerial [%d]\n", pChangeAccount->PlateSerial);
		printf("\tSessionID [%d]\n", pChangeAccount->SessionID);
		printf("\tInstallID [%d]\n", pChangeAccount->InstallID);
		printf("\tTID [%d]\n", pChangeAccount->TID);
		printf("\tErrorID [%d]\n", pChangeAccount->ErrorID);
		printf("\tLastFragment [%c]\n", pChangeAccount->LastFragment);
		printf("\tIdCardType [%c]\n", pChangeAccount->IdCardType);
		printf("\tGender [%c]\n", pChangeAccount->Gender);
		printf("\tCustType [%c]\n", pChangeAccount->CustType);
		printf("\tMoneyAccountStatus [%c]\n", pChangeAccount->MoneyAccountStatus);
		printf("\tBankAccType [%c]\n", pChangeAccount->BankAccType);
		printf("\tVerifyCertNoFlag [%c]\n", pChangeAccount->VerifyCertNoFlag);
		printf("\tBankPwdFlag [%c]\n", pChangeAccount->BankPwdFlag);
		printf("\tSecuPwdFlag [%c]\n", pChangeAccount->SecuPwdFlag);
	}
	printf("</OnRtnChangeAccountByBank>\n");
};
