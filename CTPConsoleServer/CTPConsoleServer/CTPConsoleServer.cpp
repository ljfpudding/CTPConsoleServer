// CTPConsoleServer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CommonDef.h"
#include <string>
#include <errno.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
		
	HANDLE hEndEvent = NULL;
	_stscanf_s(GetCommandLine(), _T("%x"), &hEndEvent);

	TCHAR ch[300] = { 0 };
	if (!::GetModuleFileName(NULL, ch, 300))
		return -1;

	std::wstring str = ch;
	int index = str.find_last_of(wstring(L"\\"));
	str = str.substr(0, index + 1);

	if (!::SetCurrentDirectory(str.c_str()))
		return -1;

	logfile = NULL;
	int errNum = 0;
	logfile = fopen("syslog.txt", "a");
	if (logfile == NULL)
	{
		errNum = errno;
		printf("open fail errno = %d reason = %s \n", errNum, strerror(errNum));
	}

	_getcwd(targetpath, sizeof(targetpath));

	string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("1 %s: \targetpath [%s]\n", strCurtime.c_str(), targetpath);

	

	


	time_t nowtime;
	nowtime = time(NULL); //获取日历时间  		
	struct tm local;
	localtime_s(&local, &nowtime);  //获取当前系统时间  	

	//sprintf(m_chMdcsvFileName, "%s\%s_%d%02d%02d.csv", strpath.c_str(), g_vcInstrumentIDFilterStr[i].c_str(), mt->tm_year + 1900, mt->tm_mon + 1, mt->tm_mday);

	if (local.tm_hour == 20)
	{
		sprintf_s(targetpath, "%s\\%d%02d%02d_yepan\\", targetpath, local.tm_year+1900,local.tm_mon+1,local.tm_mday);
	}
	else
	{
		sprintf_s(targetpath, "%s\\%d%02d%02d\\", targetpath, local.tm_year + 1900, local.tm_mon + 1, local.tm_mday);
	}

	//string strCurtime;
	GetCurTimeStr(strCurtime);
	LOG("2 %s:  \targetpath [%s]\n", strCurtime.c_str(), targetpath);



	hTradeThreadProc = (HANDLE)_beginthreadex(NULL, 0, &TradeThreadProc, 0, 0, NULL);
	Sleep(2);
	hFetchMD = (HANDLE)_beginthreadex(NULL, 0, &fetchMDThreadProc, 0, 0, NULL);
	Sleep(2);
	hWriteData = (HANDLE)_beginthreadex(NULL, 0, &writeDataThreadProc, 0, 0, NULL);
	Sleep(2);
	hCalAnalysis = (HANDLE)_beginthreadex(NULL, 0, &CalculateAndAnalysisThreadProc, 0, 0, NULL);


	WaitForSingleObject(hEndEvent, INFINITE);
    return 0;
}

