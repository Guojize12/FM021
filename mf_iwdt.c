#include "mf_iwdt.h"
#include "fm33lc0xx_fl.h"

void MF_IWDT_Init(void)
{
	FL_IWDT_InitTypeDef IWDT_InitStruct;
	IWDT_InitStruct.overflowPeriod = FL_IWDT_PERIOD_8000MS;
	IWDT_InitStruct.iwdtWindows = 0;
	FL_IWDT_Init(IWDT, &IWDT_InitStruct);
}
