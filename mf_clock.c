#include "mf_clock.h"
#include "fm33lc0xx_fl.h"

void MF_RCC_XTHF_IO_Init(void)
{
    FL_GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.pin = FL_GPIO_PIN_2;
    GPIO_InitStruct.mode = FL_GPIO_MODE_ANALOG;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
    GPIO_InitStruct.pin = FL_GPIO_PIN_3;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
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
