#include "mf_rtc_clock.h"
#include "fm33lc0xx_fl_rtc.h"
#include "mf_config.h"


void MF_RTC_Init(void)
{
	FL_RTC_InitTypeDef RTC_InitStruct;
	RTC_InitStruct.year = 0x22;
	RTC_InitStruct.month = 0x1;
	RTC_InitStruct.day = 0x1;
	RTC_InitStruct.week = 0x6;
	RTC_InitStruct.hour = 0x0;
	RTC_InitStruct.minute = 0x0;
	RTC_InitStruct.second = 0x0;
	 FL_RTC_Init(RTC, &RTC_InitStruct);
}


