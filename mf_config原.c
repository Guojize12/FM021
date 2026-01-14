/**
******************************************************************************
* @file           : mf_config.c
* @brief          : MCU FUNCTION CONFIG
******************************************************************************
* @attention
*
* Copyright (c) [2021] [Fudan Microelectronics]
* THIS SOFTWARE is licensed under Mulan PSL v2.
* can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
* See the Mulan PSL v2 for more details.
*
******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "mf_config.h"

/* Private function prototypes -----------------------------------------------*/
#include "bsp_uart.h"

/**
  * @brief  GPIO Initialization function
  * @param  void
  * @retval None
  */
void MF_GPIO_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    /* PA10 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_10;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    /* PA10 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_15;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	
    /* PB6 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_6;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	
    /* PC10 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_10;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
		
    /* PC11 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_11;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
		
    /* PD2 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_2;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);
		
    /* PD6 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_6;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);
	
   
    /* PC12 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_12;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
		
		    /* PD9 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_9;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    /* PD10 OUTPUT */
    GPIO_InitStruct.pin = FL_GPIO_PIN_10;
    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);
}

/**
  * @brief  IWDT Initialization function
  * @param  void
  * @retval None
  */
void MF_IWDT_Init(void)
{
    FL_IWDT_InitTypeDef    IWDT_InitStruct;

    IWDT_InitStruct.overflowPeriod = FL_IWDT_PERIOD_8000MS;
    IWDT_InitStruct.iwdtWindows = 0;

    FL_IWDT_Init(IWDT, &IWDT_InitStruct);
}

/**
  * @brief  BSTIM32 Initialization function
  * @param  void
  * @retval None
  */
void MF_BSTIM32_Init(void)
{
    FL_BSTIM32_InitTypeDef    BSTIM32_InitStruct;

    BSTIM32_InitStruct.prescaler = 639;
    BSTIM32_InitStruct.autoReload = 9;
    BSTIM32_InitStruct.autoReloadState = FL_ENABLE;
    BSTIM32_InitStruct.clockSource = FL_RCC_BSTIM32_CLK_SOURCE_APB2CLK;

    FL_BSTIM32_Init(BSTIM32, &BSTIM32_InitStruct);
}

/**
  * @brief  GPTIM0_TimerBase Initialization function
  * @param  void
  * @retval None
  */
void MF_GPTIM0_TimerBase_Init(void)
{
    FL_GPTIM_InitTypeDef    TimerBase_InitStruct;

    TimerBase_InitStruct.prescaler = 63999;
    TimerBase_InitStruct.counterMode = FL_GPTIM_COUNTER_DIR_UP;
    TimerBase_InitStruct.autoReload = 59999;
    TimerBase_InitStruct.autoReloadState = FL_DISABLE;
    TimerBase_InitStruct.clockDivision = FL_GPTIM_CLK_DIVISION_DIV1;

    FL_GPTIM_Init(GPTIM0, &TimerBase_InitStruct);
}

/**
  * @brief  GPTIM0 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_GPTIM0_Interrupt_Init(void)
{
    FL_GPTIM_ClearFlag_Update(GPTIM0);
    FL_GPTIM_EnableIT_Update(GPTIM0);
//    FL_GPTIM_Enable(GPTIM0);
}

/**
  * @brief  BSTIM32 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_BSTIM32_Interrupt_Init(void)
{
    FL_BSTIM32_ClearFlag_Update(BSTIM32);
    FL_BSTIM32_EnableIT_Update(BSTIM32);
}
#if 0

/**
  * @brief  GPTIM1 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_GPTIM1_Interrupt_Init(void)
{
    FL_GPTIM_ClearFlag_Update(GPTIM1);
    FL_GPTIM_EnableIT_Update(GPTIM1);
    FL_GPTIM_Enable(GPTIM1);
}

#else


/**
  * @brief  GPTIM1_TimerBase Initialization function
  * @param  void
  * @retval None
  */
void MF_GPTIM1_TimerBase_Init(void)
{
    FL_GPTIM_InitTypeDef    TimerBase_InitStruct;

    TimerBase_InitStruct.prescaler = 6399;
    TimerBase_InitStruct.counterMode = FL_GPTIM_COUNTER_DIR_UP;
    TimerBase_InitStruct.autoReload = 199;
    TimerBase_InitStruct.autoReloadState = FL_DISABLE;
    TimerBase_InitStruct.clockDivision = FL_GPTIM_CLK_DIVISION_DIV1;

    FL_GPTIM_Init(GPTIM1, &TimerBase_InitStruct);
}

/**
  * @brief  GPTIM1_FL_GPTIM_CHANNEL_1_Channel1 Initialization function
  * @param  void
  * @retval None
  */
void MF_GPTIM1_FL_GPTIM_CHANNEL_1_Channel1_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_GPTIM_OC_InitTypeDef    GPTIM1_InitStruct;

    /* PC0 GPTIM1_CH1 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_0;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = (long unsigned int)NULL;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    GPTIM1_InitStruct.OCMode = FL_GPTIM_OC_MODE_PWM1;
    GPTIM1_InitStruct.OCFastMode = FL_DISABLE;
    GPTIM1_InitStruct.OCPreload = FL_DISABLE;
    GPTIM1_InitStruct.compareValue = 0x00000000;
    GPTIM1_InitStruct.OCPolarity = FL_GPTIM_OC_POLARITY_NORMAL;
    GPTIM1_InitStruct.OCETRFStatus = FL_DISABLE;

    FL_GPTIM_OC_Init(GPTIM1, FL_GPTIM_CHANNEL_1, &GPTIM1_InitStruct);
}

/**
  * @brief  GPTIM1_FL_GPTIM_CHANNEL_2_Channel2 Initialization function
  * @param  void
  * @retval None
  */
void MF_GPTIM1_FL_GPTIM_CHANNEL_2_Channel2_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_GPTIM_OC_InitTypeDef    GPTIM1_InitStruct;

    /* PC1 GPTIM1_CH2 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_1;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL ;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = (long unsigned int)NULL;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    GPTIM1_InitStruct.OCMode = FL_GPTIM_OC_MODE_PWM1;
    GPTIM1_InitStruct.OCFastMode = FL_DISABLE;
    GPTIM1_InitStruct.OCPreload = FL_DISABLE;
    GPTIM1_InitStruct.compareValue = 0;
    GPTIM1_InitStruct.OCPolarity = FL_GPTIM_OC_POLARITY_NORMAL;
    GPTIM1_InitStruct.OCETRFStatus = FL_DISABLE;

    FL_GPTIM_OC_Init(GPTIM1, FL_GPTIM_CHANNEL_2, &GPTIM1_InitStruct);
}

#endif

/**
  * @brief  ATIM_TimerBase Initialization function
  * @param  void
  * @retval None
  */
void MF_ATIM_TimerBase_Init(void)
{
    FL_ATIM_InitTypeDef    TimerBase_InitStruct;

    TimerBase_InitStruct.clockSource = FL_RCC_ATIM_CLK_SOURCE_APB2CLK;
    TimerBase_InitStruct.prescaler = 63;
    TimerBase_InitStruct.counterMode = FL_ATIM_COUNTER_DIR_UP;
    TimerBase_InitStruct.autoReload = 349;
    TimerBase_InitStruct.autoReloadState = FL_DISABLE;
    TimerBase_InitStruct.clockDivision = FL_ATIM_CLK_DIVISION_DIV1;
    TimerBase_InitStruct.repetitionCounter = 0;

    FL_ATIM_Init(ATIM, &TimerBase_InitStruct);
}

void MF_ATIM_TimerBase_Init1(void)
{
    FL_ATIM_InitTypeDef    TimerBase_InitStruct;

    TimerBase_InitStruct.clockSource = FL_RCC_ATIM_CLK_SOURCE_APB2CLK;
    TimerBase_InitStruct.prescaler = 6399;
    TimerBase_InitStruct.counterMode = FL_ATIM_COUNTER_DIR_UP;
    TimerBase_InitStruct.autoReload = 199;
    TimerBase_InitStruct.autoReloadState = FL_DISABLE;
    TimerBase_InitStruct.clockDivision = FL_ATIM_CLK_DIVISION_DIV1;
    TimerBase_InitStruct.repetitionCounter = 0;

    FL_ATIM_Init(ATIM, &TimerBase_InitStruct);
}
/**
  * @brief  ATIM_FL_ATIM_CHANNEL_1_Channel1 Initialization function
  * @param  void
  * @retval None
  */
void MF_ATIM_FL_ATIM_CHANNEL_1_Channel1_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_ATIM_OC_InitTypeDef    ATIM_InitStruct;

    /* PB4 ATIM_CH1 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_4;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = (long unsigned int)NULL;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    ATIM_InitStruct.OCMode = FL_ATIM_OC_MODE_PWM1;
    ATIM_InitStruct.OCState = FL_ENABLE;
    ATIM_InitStruct.OCNState = FL_DISABLE;
    ATIM_InitStruct.OCPolarity = FL_ATIM_OC_POLARITY_NORMAL;
    ATIM_InitStruct.OCNPolarity = FL_ATIM_OCN_POLARITY_NORMAL;
    ATIM_InitStruct.OCFastMode = FL_DISABLE;
    ATIM_InitStruct.OCPreload = FL_DISABLE;
    ATIM_InitStruct.compareValue = 0;
    ATIM_InitStruct.OCIdleState = FL_ATIM_OC_IDLE_STATE_LOW;
    ATIM_InitStruct.OCETRFStatus = FL_DISABLE;
    ATIM_InitStruct.OCNIdleState = FL_ATIM_OCN_IDLE_STATE_LOW;

    FL_ATIM_OC_Init(ATIM, FL_ATIM_CHANNEL_1, &ATIM_InitStruct);
}

/**
  * @brief  ATIM_FL_ATIM_CHANNEL_2_Channel2 Initialization function
  * @param  void
  * @retval None
  */
void MF_ATIM_FL_ATIM_CHANNEL_2_Channel2_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_ATIM_OC_InitTypeDef    ATIM_InitStruct;

    /* PB5 ATIM_CH2 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_5;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = (long unsigned int)NULL;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    ATIM_InitStruct.OCMode = FL_ATIM_OC_MODE_PWM1;
    ATIM_InitStruct.OCState = FL_ENABLE;
    ATIM_InitStruct.OCNState = FL_DISABLE;
    ATIM_InitStruct.OCPolarity = FL_ATIM_OC_POLARITY_NORMAL;
    ATIM_InitStruct.OCNPolarity = FL_ATIM_OCN_POLARITY_NORMAL;
    ATIM_InitStruct.OCFastMode = FL_DISABLE;
    ATIM_InitStruct.OCPreload = FL_DISABLE;
    ATIM_InitStruct.compareValue = 0;
    ATIM_InitStruct.OCIdleState = FL_ATIM_OC_IDLE_STATE_LOW;
    ATIM_InitStruct.OCETRFStatus = FL_DISABLE;
    ATIM_InitStruct.OCNIdleState = FL_ATIM_OCN_IDLE_STATE_LOW;

    FL_ATIM_OC_Init(ATIM, FL_ATIM_CHANNEL_2, &ATIM_InitStruct);
}


/**
  * @brief  ATIM_FL_ATIM_CHANNEL_3_Channel3 Initialization function
  * @param  void
  * @retval None
  */
void MF_ATIM_FL_ATIM_CHANNEL_3_Channel3_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_ATIM_OC_InitTypeDef    ATIM_InitStruct;

    /* PB6 ATIM_CH3 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_6;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = (long unsigned int)NULL;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    ATIM_InitStruct.OCMode = FL_ATIM_OC_MODE_PWM1;
    ATIM_InitStruct.OCState = FL_ENABLE;
    ATIM_InitStruct.OCNState = FL_DISABLE;
    ATIM_InitStruct.OCPolarity = FL_ATIM_OC_POLARITY_NORMAL;
    ATIM_InitStruct.OCNPolarity = FL_ATIM_OCN_POLARITY_NORMAL;
    ATIM_InitStruct.OCFastMode = FL_DISABLE;
    ATIM_InitStruct.OCPreload = FL_DISABLE;
    ATIM_InitStruct.compareValue = 0;
    ATIM_InitStruct.OCIdleState = FL_ATIM_OC_IDLE_STATE_LOW;
    ATIM_InitStruct.OCETRFStatus = FL_DISABLE;
    ATIM_InitStruct.OCNIdleState = FL_ATIM_OCN_IDLE_STATE_LOW;

    FL_ATIM_OC_Init(ATIM, FL_ATIM_CHANNEL_3, &ATIM_InitStruct);
}


#ifdef FL_RTC_DRIVER_ENABLED
/**
  * @brief  RTC Initialization function
  * @param  void
  * @retval None
  */
void MF_RTC_Init(void)
{
    FL_RTC_InitTypeDef    RTC_InitStruct;

    RTC_InitStruct.year = 0x22;
    RTC_InitStruct.month = 0x1;
    RTC_InitStruct.day = 0x1;
    RTC_InitStruct.week = 0x6;
    RTC_InitStruct.hour = 0x0;
    RTC_InitStruct.minute = 0x0;
    RTC_InitStruct.second = 0x0;

    FL_RTC_Init(RTC, &RTC_InitStruct);
}

#endif

#ifdef USE_UART0
/**
  * @brief  UART0 Initialization function
  * @param  void
  * @retval None
  */
void MF_UART0_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_UART_InitTypeDef    UART0_InitStruct;

    /* PA2 UART0_RX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_2;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* PA3 UART0_TX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_3;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    UART0_InitStruct.clockSrc = FL_RCC_UART0_CLK_SOURCE_APB1CLK;
    UART0_InitStruct.baudRate = UART0_BAUDRATE;
    UART0_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
    UART0_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
    UART0_InitStruct.parity = FL_UART_PARITY_NONE;
    UART0_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;

    FL_UART_Init(UART0, &UART0_InitStruct);
}
/**
  * @brief  UART0 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_UART0_Interrupt_Init(void)
{
    FL_UART_ClearFlag_RXBuffFull(UART0);
    FL_UART_EnableIT_RXBuffFull(UART0);
}
#endif

#ifdef USE_LPUART0

/**
  * @brief  LPUART0 Initialization function
  * @param  void
  * @retval None
  */
void MF_LPUART0_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_LPUART_InitTypeDef    LPUART0_InitStruct;

    /* PA13 LPUART0_RX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_13;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_ENABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* PA14 LPUART0_TX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_14;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_ENABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    LPUART0_InitStruct.clockSrc = FL_RCC_LPUART_CLK_SOURCE_LSCLK;

    if(LPUART0_BAUDRATE == 9600)
    {
        LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_9600;
    }
    else if(LPUART0_BAUDRATE == 4800)
    {
        LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_4800;
    }
    else if(LPUART0_BAUDRATE == 2400)
    {
        LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_2400;
    }
    else if(LPUART0_BAUDRATE == 1200)
    {
        LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_1200;
    }
    LPUART0_InitStruct.dataWidth = FL_LPUART_DATA_WIDTH_8B;
    LPUART0_InitStruct.stopBits = FL_LPUART_STOP_BIT_WIDTH_1B;
    LPUART0_InitStruct.parity = FL_LPUART_PARITY_NONE;
    LPUART0_InitStruct.transferDirection = FL_LPUART_DIRECTION_TX_RX;

    FL_LPUART_Init(LPUART0, &LPUART0_InitStruct);
}

/**
  * @brief  LPUART0 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_LPUART0_Interrupt_Init(void)
{
    FL_LPUART_ClearFlag_RXBuffFull(LPUART0);
    FL_LPUART_EnableIT_RXBuffFull(LPUART0);
}
#endif
#if 0
/**
  * @brief  ADC_Common Initialization function
  * @param  void
  * @retval None
  */
void MF_ADC_Common_Init(void)
{
    FL_ADC_CommonInitTypeDef    Common_InitStruct;

    Common_InitStruct.clockSource = FL_RCC_ADC_CLK_SOURCE_XTHF;
    Common_InitStruct.clockPrescaler = FL_RCC_ADC_PSC_DIV1;

    FL_ADC_CommonInit(&Common_InitStruct);
}

/**
  * @brief  ADC_Sampling Initialization function
  * @param  void
  * @retval None
  */
void MF_ADC_Sampling_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_ADC_InitTypeDef    Sampling_InitStruct;

  
    /* PD0 ADC_IN3 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_0;
    GPIO_InitStruct.mode = FL_GPIO_MODE_ANALOG;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    /* PD1 ADC_IN4 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_1;
    GPIO_InitStruct.mode = FL_GPIO_MODE_ANALOG;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    /* PD11 ADC_IN2 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_11;
    GPIO_InitStruct.mode = FL_GPIO_MODE_ANALOG;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    Sampling_InitStruct.conversionMode = FL_ADC_CONV_MODE_SINGLE;
    Sampling_InitStruct.autoMode = FL_ADC_SINGLE_CONV_MODE_AUTO;
    Sampling_InitStruct.waitMode = FL_ENABLE;
    Sampling_InitStruct.overrunMode = FL_ENABLE;
    Sampling_InitStruct.scanDirection = FL_ADC_SEQ_SCAN_DIR_FORWARD;
    Sampling_InitStruct.externalTrigConv = FL_ADC_TRIGGER_EDGE_NONE;
    Sampling_InitStruct.triggerSource = FL_ADC_TRGI_PA8;
    Sampling_InitStruct.fastChannelTime = FL_ADC_FAST_CH_SAMPLING_TIME_4_ADCCLK;
    Sampling_InitStruct.lowChannelTime = FL_ADC_SLOW_CH_SAMPLING_TIME_192_ADCCLK;
    Sampling_InitStruct.oversamplingMode = FL_ENABLE;
    Sampling_InitStruct.overSampingMultiplier = FL_ADC_OVERSAMPLING_MUL_16X;
    Sampling_InitStruct.oversamplingShift = FL_ADC_OVERSAMPLING_SHIFT_4B;

    FL_ADC_Init(ADC, &Sampling_InitStruct);
 
    FL_ADC_EnableSequencerChannel(ADC, FL_ADC_EXTERNAL_CH3);
    FL_ADC_EnableSequencerChannel(ADC, FL_ADC_EXTERNAL_CH4);
    FL_ADC_EnableSequencerChannel(ADC, FL_ADC_EXTERNAL_CH2);

}
#endif
/**
  * @brief  EXTI Initialization function
  * @param  void
  * @retval None
  */
void MF_EXTI_Init(void)
{
    FL_EXTI_CommonInitTypeDef    EXTI_InitStruct;

    EXTI_InitStruct.clockSource = FL_RCC_EXTI_CLK_SOURCE_HCLK;

    FL_EXTI_CommonInit(&EXTI_InitStruct);
}

/**
  * @brief  EXTI_Line4 Initialization function
  * @param  void
  * @retval None
  */
void MF_EXTI_Line4_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_EXTI_InitTypeDef    EXTI_InitStruct;

    /* PB3 EXTI4_Select3 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_3;
    GPIO_InitStruct.mode = FL_GPIO_MODE_INPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = (long unsigned int)NULL;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    EXTI_InitStruct.input = FL_GPIO_EXTI_INPUT_GROUP3;
    EXTI_InitStruct.triggerEdge = FL_GPIO_EXTI_TRIGGER_EDGE_RISING;
    EXTI_InitStruct.filter = FL_ENABLE;

    FL_EXTI_Init(FL_GPIO_EXTI_LINE_4, &EXTI_InitStruct);
}
/**
 * @brief  EXTI_Line7 Initialization function
 * @param  void
 * @retval None
 */
void MF_EXTI_Line7_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_EXTI_InitTypeDef    EXTI_InitStruct;

    /* PB12 EXTI7_Select0 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_12;
    GPIO_InitStruct.mode = FL_GPIO_MODE_INPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin =(long unsigned int) NULL; 
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    EXTI_InitStruct.input = FL_GPIO_EXTI_INPUT_GROUP0;
    EXTI_InitStruct.triggerEdge = FL_GPIO_EXTI_TRIGGER_EDGE_RISING;
    EXTI_InitStruct.filter = FL_ENABLE;

    FL_EXTI_Init(FL_GPIO_EXTI_LINE_7, &EXTI_InitStruct);
}

/**
 * @brief  EXTI_Line6 Initialization function
 * @param  void
 * @retval None
 */
void MF_EXTI_Line6_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_EXTI_InitTypeDef    EXTI_InitStruct;

    /* PB10 EXTI6_Select2 */
    GPIO_InitStruct.pin = FL_GPIO_PIN_10;
    GPIO_InitStruct.mode = FL_GPIO_MODE_INPUT;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    EXTI_InitStruct.input = FL_GPIO_EXTI_INPUT_GROUP2;
    EXTI_InitStruct.triggerEdge = FL_GPIO_EXTI_TRIGGER_EDGE_RISING;
    EXTI_InitStruct.filter = FL_ENABLE;

    FL_EXTI_Init(FL_GPIO_EXTI_LINE_6, &EXTI_InitStruct);
}


#ifdef USE_UART4
/**
  * @brief  UART4 Initialization function
  * @param  void
  * @retval None
  */
void MF_UART4_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_UART_InitTypeDef    UART4_InitStruct;

    /* PA0 UART4_RX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_0;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* PA1 UART4_TX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_1;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    UART4_InitStruct.clockSrc = (long unsigned int)NULL;
    UART4_InitStruct.baudRate = UART4_BAUDRATE;
    UART4_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
    UART4_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
    UART4_InitStruct.parity = FL_LPUART_PARITY_NONE;
    UART4_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;

    FL_UART_Init(UART4, &UART4_InitStruct);
}

/**
  * @brief  UART4 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_UART4_Interrupt_Init(void)
{
    FL_UART_ClearFlag_RXBuffFull(UART4);
    FL_UART_EnableIT_RXBuffFull(UART4);
}
#endif
/**
  * @brief  SPI1 Initialization function
  * @param  void
  * @retval None
  */
void MF_SPI1_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_SPI_InitTypeDef    SPI1_InitStruct;

    /* PB8 SPI1_SSN */
//    GPIO_InitStruct.pin = FL_GPIO_PIN_8;
//    GPIO_InitStruct.mode = FL_GPIO_MODE_OUTPUT;
//    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
//    GPIO_InitStruct.pull = FL_DISABLE;
//    GPIO_InitStruct.remapPin = FL_DISABLE;
//    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* PB9 SPI1_SCK */
    GPIO_InitStruct.pin = FL_GPIO_PIN_9;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* PB10 SPI1_MISO */
    GPIO_InitStruct.pin = FL_GPIO_PIN_10;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* PB11 SPI1_MOSI */
    GPIO_InitStruct.pin = FL_GPIO_PIN_11;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    SPI1_InitStruct.transferMode = FL_SPI_TRANSFER_MODE_FULL_DUPLEX;
    SPI1_InitStruct.mode = FL_SPI_WORK_MODE_MASTER;
    SPI1_InitStruct.dataWidth = FL_SPI_DATA_WIDTH_8B;
    SPI1_InitStruct.clockPolarity = FL_SPI_POLARITY_NORMAL;
    SPI1_InitStruct.clockPhase = FL_SPI_PHASE_EDGE1;
    SPI1_InitStruct.softControl = FL_DISABLE;
    SPI1_InitStruct.baudRate = FL_SPI_BAUDRATE_DIV8;
    SPI1_InitStruct.bitOrder = FL_SPI_BIT_ORDER_MSB_FIRST;

    FL_SPI_Init(SPI1, &SPI1_InitStruct);
}

/**
  * @brief  RCC_XTHF_IO Initialization function
  * @param  void
  * @retval None
  */
void MF_RCC_XTHF_IO_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    /* PC2 RCC_XTHI */
    GPIO_InitStruct.pin = FL_GPIO_PIN_2;
    GPIO_InitStruct.mode = FL_GPIO_MODE_ANALOG;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    /* PC3 RCC_XTHO */
    GPIO_InitStruct.pin = FL_GPIO_PIN_3;
    GPIO_InitStruct.mode = FL_GPIO_MODE_ANALOG;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
}

#ifdef USE_UART1
/**
  * @brief  UART1 Initialization function
  * @param  void
  * @retval None
  */
void MF_UART1_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_UART_InitTypeDef    UART1_InitStruct;

    /* PB13 UART1_RX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_13;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* PB14 UART1_TX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_14;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    UART1_InitStruct.clockSrc = FL_RCC_UART1_CLK_SOURCE_APB1CLK;
    UART1_InitStruct.baudRate = UART1_BAUDRATE;
    UART1_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
    UART1_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
    UART1_InitStruct.parity = FL_UART_PARITY_NONE;
    UART1_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;

    FL_UART_Init(UART1, &UART1_InitStruct);
}

/**
  * @brief  UART1 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_UART1_Interrupt_Init(void)
{
    FL_UART_ClearFlag_RXBuffFull(UART1);
    FL_UART_EnableIT_RXBuffFull(UART1);
}
#endif


#ifdef USE_UART5
/**
  * @brief  UART5 Initialization function
  * @param  void
  * @retval None
  */
void MF_UART5_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_UART_InitTypeDef    UART5_InitStruct;
#if 0
    /* PC4 UART5_RX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_4;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    /* PC5 UART5_TX */
    GPIO_InitStruct.pin = FL_GPIO_PIN_5;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
#else
    GPIO_InitStruct.pin = FL_GPIO_PIN_0;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    GPIO_InitStruct.pin = FL_GPIO_PIN_1;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_ENABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOD, &GPIO_InitStruct);
#endif
    UART5_InitStruct.clockSrc =(long unsigned int) NULL;
    UART5_InitStruct.baudRate = UART5_BAUDRATE;
    UART5_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
    UART5_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
    UART5_InitStruct.parity = FL_UART_PARITY_NONE;
    UART5_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;

    FL_UART_Init(UART5, &UART5_InitStruct);
}

/**
  * @brief  UART5 Interrupt Initialization function
  * @param  void
  * @retval None
  */
void MF_UART5_Interrupt_Init(void)
{
    FL_UART_ClearFlag_RXBuffFull(UART5);
    FL_UART_EnableIT_RXBuffFull(UART5);
}
#endif
/**
  * @brief  SPI2 Initialization function
  * @param  void
  * @retval None
  */
void MF_SPI2_Init(void)
{
    FL_GPIO_InitTypeDef    GPIO_InitStruct;

    FL_SPI_InitTypeDef    SPI2_InitStruct;

    /* PC7 SPI2_SSN */
//    GPIO_InitStruct.pin = FL_GPIO_PIN_7;
//    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
//    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
//    GPIO_InitStruct.pull = FL_DISABLE;
//    GPIO_InitStruct.remapPin = FL_DISABLE;
//    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    /* PC8 SPI2_SCK */
    GPIO_InitStruct.pin = FL_GPIO_PIN_8;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    /* PC9 SPI2_MISO */
    GPIO_InitStruct.pin = FL_GPIO_PIN_9;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    /* PC10 SPI2_MOSI */
    GPIO_InitStruct.pin = FL_GPIO_PIN_10;
    GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
    GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
    GPIO_InitStruct.pull = FL_DISABLE;
    GPIO_InitStruct.remapPin = FL_DISABLE;
    FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    SPI2_InitStruct.transferMode = FL_SPI_TRANSFER_MODE_FULL_DUPLEX;
    SPI2_InitStruct.mode = FL_SPI_WORK_MODE_MASTER;
    SPI2_InitStruct.dataWidth = FL_SPI_DATA_WIDTH_8B;
    SPI2_InitStruct.clockPolarity = FL_SPI_POLARITY_NORMAL;
    SPI2_InitStruct.clockPhase = FL_SPI_PHASE_EDGE1;
    SPI2_InitStruct.softControl = FL_DISABLE;
    SPI2_InitStruct.baudRate = FL_SPI_BAUDRATE_DIV8;
    SPI2_InitStruct.bitOrder = FL_SPI_BIT_ORDER_MSB_FIRST;

    FL_SPI_Init(SPI2, &SPI2_InitStruct);
}

/**
  * @brief  NVIC Initialization function
  * @param  void
  * @retval None
  */
void MF_NVIC_Init(void)
{
    FL_NVIC_ConfigTypeDef    InterruptConfigStruct;

#ifdef USE_UART0
    InterruptConfigStruct.preemptPriority = 0x00;
    FL_NVIC_Init(&InterruptConfigStruct, UART0_IRQn);
#endif
    InterruptConfigStruct.preemptPriority = 0x01;
    FL_NVIC_Init(&InterruptConfigStruct, UART1_IRQn);

#ifdef USE_UART4
    InterruptConfigStruct.preemptPriority = 0x00;
    FL_NVIC_Init(&InterruptConfigStruct, UART4_IRQn);
#endif

#ifdef USE_UART5
    InterruptConfigStruct.preemptPriority = 0x00;
    FL_NVIC_Init(&InterruptConfigStruct, UART5_IRQn);
#endif

    InterruptConfigStruct.preemptPriority = 0x00;
    FL_NVIC_Init(&InterruptConfigStruct, BSTIM_IRQn);

    InterruptConfigStruct.preemptPriority = 0x00;
    FL_NVIC_Init(&InterruptConfigStruct, GPTIM0_IRQn);

//    InterruptConfigStruct.preemptPriority = 0x00;
//    FL_NVIC_Init(&InterruptConfigStruct, GPTIM1_IRQn);

//    InterruptConfigStruct.preemptPriority = 0x00;
//    FL_NVIC_Init(&InterruptConfigStruct, ATIM_IRQn);

    InterruptConfigStruct.preemptPriority = 0x00;
    FL_NVIC_Init(&InterruptConfigStruct, GPIO_IRQn);

#ifdef USE_LPUART0
    InterruptConfigStruct.preemptPriority = 0x00;
    FL_NVIC_Init(&InterruptConfigStruct, LPUART0_IRQn);
#endif
}


#if 0
/**
  * @brief  Clock Initialization.
  * @retval None
  */
void MF_Clock_Init(void)
{
    /* Initial Low Speed Clock */
    FL_RCC_SetLSCLKClockSource(FL_RCC_LSCLK_CLK_SOURCE_LPOSC);

    /* Initial RCHF */
    FL_RCC_RCHF_SetFrequency(FL_RCC_RCHF_FREQUENCY_8MHZ);
    FL_RCC_RCHF_Enable();

    /* Initial XTHF */
    MF_RCC_XTHF_IO_Init();
    FL_RCC_XTHF_WriteDriverStrength(0x7U);    /* 设置驱动强度为最大以便快速起振 */
    FL_RCC_XTHF_Enable();
    XTHFClock = 8000000; /*  外接晶体频率: 8MHz  */

    /* Initial PLL */
    FL_RCC_PLL_Disable();
    FL_RCC_PLL_SetClockSource(FL_RCC_PLL_CLK_SOURCE_XTHF);
    FL_RCC_PLL_SetPrescaler(FL_RCC_PLL_PSC_DIV8);
    FL_RCC_PLL_WriteMultiplier(63);    /* 输出64MHz */
    FL_RCC_PLL_SetOutputMultiplier(FL_RCC_PLL_OUTPUT_X1);
    FL_RCC_PLL_Enable();
    while(FL_RCC_IsActiveFlag_PLLReady() != FL_SET);

    /* Initial System Clock */
    FL_FLASH_SetReadWait(FLASH, FL_FLASH_READ_WAIT_2CYCLE);    /* 设置FLASH读等待为 2 个周期 */
    FL_RCC_SetSystemClockSource(FL_RCC_SYSTEM_CLK_SOURCE_PLL);    /* 设置系统主时钟为 PLL */
    FL_RCC_SetAHBPrescaler(FL_RCC_AHBCLK_PSC_DIV1);
    FL_RCC_SetAPB1Prescaler(FL_RCC_APB1CLK_PSC_DIV1);
    FL_RCC_SetAPB2Prescaler(FL_RCC_APB2CLK_PSC_DIV1);

    SystemCoreClockUpdate();
}
#else
/**
  * @brief  Clock Initialization.
  * @retval None
  */
void MF_Clock_Init(void)
{
    /* Initial Low Speed Clock */
    FL_RCC_SetLSCLKClockSource(FL_RCC_LSCLK_CLK_SOURCE_LPOSC);

    /* Initial RCHF */
    FL_RCC_RCHF_SetFrequency(FL_RCC_RCHF_FREQUENCY_8MHZ);
    FL_RCC_RCHF_Enable();

    /* Initial PLL */
    FL_RCC_PLL_Disable();
    FL_RCC_PLL_SetClockSource(FL_RCC_PLL_CLK_SOURCE_RCHF);
    FL_RCC_PLL_SetPrescaler(FL_RCC_PLL_PSC_DIV8);
    FL_RCC_PLL_WriteMultiplier(63);    /* 输出64MHz */
    FL_RCC_PLL_SetOutputMultiplier(FL_RCC_PLL_OUTPUT_X1);
    FL_RCC_PLL_Enable();
    while(FL_RCC_IsActiveFlag_PLLReady() != FL_SET);

    /* Initial System Clock */
    FL_FLASH_SetReadWait(FLASH, FL_FLASH_READ_WAIT_2CYCLE);    /* 设置FLASH读等待为 2 个周期 */
    FL_RCC_SetSystemClockSource(FL_RCC_SYSTEM_CLK_SOURCE_PLL);    /* 设置系统主时钟为 PLL */
    FL_RCC_SetAHBPrescaler(FL_RCC_AHBCLK_PSC_DIV1);
    FL_RCC_SetAPB1Prescaler(FL_RCC_APB1CLK_PSC_DIV1);
    FL_RCC_SetAPB2Prescaler(FL_RCC_APB2CLK_PSC_DIV1);

    SystemCoreClockUpdate();
}
#endif

void MF_Config_Init(void)
{
    /* Initial GPIO */
    MF_GPIO_Init();
    /* Initial IWDT */
    MF_IWDT_Init();

    /* Initial BSTIM32 */
    MF_BSTIM32_Init();
    MF_BSTIM32_Interrupt_Init();

    /* Initial GPTIM0 */
    MF_GPTIM0_TimerBase_Init();
    MF_GPTIM0_Interrupt_Init();

#if 0
    /* Initial GPTIM1 */
    MF_GPTIM1_TimerBase_Init();
    MF_GPTIM1_FL_GPTIM_CHANNEL_2_Channel2_Init();
#endif

#if 0
    /* Initial ATIM */
    MF_ATIM_TimerBase_Init();
    MF_ATIM_FL_ATIM_CHANNEL_1_Channel1_Init();
    MF_ATIM_FL_ATIM_CHANNEL_2_Channel2_Init();
#endif

#ifdef FL_RTC_DRIVER_ENABLED
    /* Initial RTC */
    MF_RTC_Init();
#endif

#ifdef USE_UART0
    /* Initial UART0 */
    MF_UART0_Init();
    MF_UART0_Interrupt_Init();
#endif
#ifdef USE_UART1
    /* Initial UART1 */
    MF_UART1_Init();
    MF_UART1_Interrupt_Init();
#endif
#ifdef USE_UART4
    /* Initial UART4 */
    MF_UART4_Init();
    MF_UART4_Interrupt_Init();
#endif
#ifdef USE_UART5
    /* Initial UART5 */
    MF_UART5_Init();
    MF_UART5_Interrupt_Init();
#endif
#ifdef USE_LPUART0
    /* Initial LPUART0 */
    MF_LPUART0_Init();
    MF_LPUART0_Interrupt_Init();
#endif

    /* Initial ADC */
#ifdef USE_ADC
    MF_ADC_Common_Init();
    MF_ADC_Sampling_Init();
#endif
    /* Initial EXTI */
//    MF_EXTI_Init();
//    MF_EXTI_Line4_Init();
//    MF_EXTI_Line7_Init();

    /* Initial SPI1 */
//    MF_SPI1_Init();

    /* Initial SPI2 */
//    MF_SPI2_Init();
    /* Initial NVIC */
    MF_NVIC_Init();
}
 
/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{

}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{

}
#endif /* USE_FULL_ASSERT */

/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
