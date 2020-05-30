#pragma once

#include <map>

#include "readerwriterqueue.h"
#include "ThreadWorkLogic.h"


using namespace moodycamel;
using namespace std;


#define KD_PERIOID_N	30
#define K_PERIOD_M1	3
#define D_PERIOD_M2	3
#define KD_PREDAY_LENGTH 50

typedef struct
{
	double dwValue;
	int nIndex;
}INDICATORVALUE;


extern map<int, double>  g_mapK;
extern map<int, double>  g_mapD;

extern spin_mutex smK;
extern spin_mutex smD;

extern HANDLE hStrategy;

extern unsigned int __stdcall CalculateStrategyThreadProc(void * data);