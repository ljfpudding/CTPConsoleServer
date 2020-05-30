#include "stdafx.h"
#include "CTPTimer.h"



unsigned int __stdcall CTPTimerThreadProc(void * data)
{

	while (WaitForSingleObject(hCTPTimerCloseSignal, 0) != WAIT_OBJECT_0)
	{

		time_t nowtime;
		nowtime = time(NULL); //获取日历时间  		
		struct tm local;
		localtime_s(&local, &nowtime);  //获取当前系统时间  

		if ((local.tm_hour == 8 && local.tm_min == 56))
		{
			unsigned long ulInterval = 1000; //1秒
			ulInterval = ulInterval * 60 * 60;//1小时
			ulInterval = ulInterval * 5; //5小时
			ulInterval = ulInterval + 1000 * 60 * 15;//5小时+15分钟;

			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 20 && local.tm_min == 56))		
		{
			
			unsigned long ulInterval = 1000; //1秒
			ulInterval = ulInterval * 60 * 60;//1小时
			ulInterval = ulInterval * 5; //5小时
			ulInterval = ulInterval + 1000 * 60 * 40;//5小时+30 +10分钟;

			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);
			
		}
		else if ((local.tm_hour == 13 && local.tm_min == 26))
		{
			unsigned long ulInterval = 1000; //1秒
			ulInterval = ulInterval * 60 * 60;//1小时
			ulInterval = ulInterval * 2; //5小时
			//ulInterval = ulInterval + 1000 * 60 * 40;//5小时+30 +10分钟;

			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);
			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 15 && local.tm_min == 33)) //15:33关闭， 等到晚上20:56分开启 
		{
			unsigned long ulInterval = 1000; //1秒
			ulInterval = ulInterval * 60 * 60;//1小时
			ulInterval = ulInterval * 5; //5小时
			ulInterval = ulInterval + 1000 * 60 * 15;//5小时+15分钟;	

			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 11 && local.tm_min == 33))
		{

			unsigned long ulInterval = 1000; //1秒
			ulInterval = ulInterval * 60 * 60;//1小时
			ulInterval = ulInterval * 2; //2小时
			ulInterval = ulInterval -10*1000*60 ;//2小时-10分钟;	

			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 2 && local.tm_min == 55))
		{
			unsigned long ulInterval = 1000; //1秒
			ulInterval = ulInterval * 60 * 60;//1小时
			ulInterval = ulInterval * 5; //5小时
			ulInterval = ulInterval + 1000 * 60 * 45;//5小时+30+15分钟;		

			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);
		}
		/*else if ((local.tm_hour == 10 && local.tm_min == 57))
		{
			unsigned long ulInterval = 1000; //1秒


			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);
			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval*60*1);

		}
		else if ((local.tm_hour == 10 && local.tm_min == 59))
		{
			unsigned long ulInterval = 1000; //1秒
			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);
			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval * 60 * 3);

		}*/				
	}


	_endthreadex(0);
	return 0;

}