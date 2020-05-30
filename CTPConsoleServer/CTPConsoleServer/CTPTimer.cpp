#include "stdafx.h"
#include "CTPTimer.h"



unsigned int __stdcall CTPTimerThreadProc(void * data)
{

	while (WaitForSingleObject(hCTPTimerCloseSignal, 0) != WAIT_OBJECT_0)
	{

		time_t nowtime;
		nowtime = time(NULL); //��ȡ����ʱ��  		
		struct tm local;
		localtime_s(&local, &nowtime);  //��ȡ��ǰϵͳʱ��  

		if ((local.tm_hour == 8 && local.tm_min == 56))
		{
			unsigned long ulInterval = 1000; //1��
			ulInterval = ulInterval * 60 * 60;//1Сʱ
			ulInterval = ulInterval * 5; //5Сʱ
			ulInterval = ulInterval + 1000 * 60 * 15;//5Сʱ+15����;

			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 20 && local.tm_min == 56))		
		{
			
			unsigned long ulInterval = 1000; //1��
			ulInterval = ulInterval * 60 * 60;//1Сʱ
			ulInterval = ulInterval * 5; //5Сʱ
			ulInterval = ulInterval + 1000 * 60 * 40;//5Сʱ+30 +10����;

			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);
			
		}
		else if ((local.tm_hour == 13 && local.tm_min == 26))
		{
			unsigned long ulInterval = 1000; //1��
			ulInterval = ulInterval * 60 * 60;//1Сʱ
			ulInterval = ulInterval * 2; //5Сʱ
			//ulInterval = ulInterval + 1000 * 60 * 40;//5Сʱ+30 +10����;

			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);
			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 15 && local.tm_min == 33)) //15:33�رգ� �ȵ�����20:56�ֿ��� 
		{
			unsigned long ulInterval = 1000; //1��
			ulInterval = ulInterval * 60 * 60;//1Сʱ
			ulInterval = ulInterval * 5; //5Сʱ
			ulInterval = ulInterval + 1000 * 60 * 15;//5Сʱ+15����;	

			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 11 && local.tm_min == 33))
		{

			unsigned long ulInterval = 1000; //1��
			ulInterval = ulInterval * 60 * 60;//1Сʱ
			ulInterval = ulInterval * 2; //2Сʱ
			ulInterval = ulInterval -10*1000*60 ;//2Сʱ-10����;	

			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);

		}
		else if ((local.tm_hour == 2 && local.tm_min == 55))
		{
			unsigned long ulInterval = 1000; //1��
			ulInterval = ulInterval * 60 * 60;//1Сʱ
			ulInterval = ulInterval * 5; //5Сʱ
			ulInterval = ulInterval + 1000 * 60 * 45;//5Сʱ+30+15����;		

			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);

			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval);
		}
		/*else if ((local.tm_hour == 10 && local.tm_min == 57))
		{
			unsigned long ulInterval = 1000; //1��


			unsigned int nType = CTPTimerEnum::STARTWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);
			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval*60*1);

		}
		else if ((local.tm_hour == 10 && local.tm_min == 59))
		{
			unsigned long ulInterval = 1000; //1��
			unsigned int nType = CTPTimerEnum::STOPWORK;
			theApp.GetMainWnd()->PostMessage(WM_CTP_TIMER, nType, 0);
			WaitForSingleObject(hCTPTimerCloseSignal, ulInterval * 60 * 3);

		}*/				
	}


	_endthreadex(0);
	return 0;

}