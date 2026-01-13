#include "mf_rtc_clock.h"
#include "fm33lc0xx_fl_rtc.h"
#include "fm33lc0xx_fl.h"


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
	FL_RTC_Init(&RTC_InitStruct);
}

void MF_Clock_Init(void)
{
	FL_RCC_SetLSCLKClockSource(FL_RCC_LSCLK_CLK_SOURCE_LPOSC);
	FL_RCC_RCHF_SetFrequency(FL_RCC_RCHF_FREQUENCY_8MHZ);
	FL_RCC_RCHF_Enable();
	FL_RCC_PLL_Disable();
	FL_RCC_PLL_SetClockSource(FL_RCC_PLL_CLK_SOURCE_RCHF);
	FL_RCC_PLL_SetPrescaler(FL_RCC_PLL_PSC_DIV8);
	FL_RCC_PLL_WriteMultiplier(63);
	FL_RCC_PLL_SetOutputMultiplier(FL_RCC_PLL_OUTPUT_X1);
	FL_RCC_PLL_Enable();
	while(FL_RCC_IsActiveFlag_PLLReady() != FL_SET);
	FL_FLASH_SetReadWait(FLASH, FL_FLASH_READ_WAIT_2CYCLE);
	FL_RCC_SetSystemClockSource(FL_RCC_SYSTEM_CLK_SOURCE_PLL);
	FL_RCC_SetAHBPrescaler(FL_RCC_AHBCLK_PSC_DIV1);
	FL_RCC_SetAPB1Prescaler(FL_RCC_APB1CLK_PSC_DIV1);
	FL_RCC_SetAPB2Prescaler(FL_RCC_APB2CLK_PSC_DIV1);
	SystemCoreClockUpdate();
}
