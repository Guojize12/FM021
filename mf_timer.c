#include "mf_timer.h"
#include "fm33lc0xx_fl.h"


void MF_BSTIM32_Init(void)
{
	FL_BSTIM32_InitTypeDef BSTIM32_InitStruct;
	BSTIM32_InitStruct.prescaler = 639;
	BSTIM32_InitStruct.autoReload = 9;
	BSTIM32_InitStruct.autoReloadState = FL_ENABLE;
	BSTIM32_InitStruct.clockSource = FL_RCC_BSTIM32_CLK_SOURCE_APB2CLK;
	FL_BSTIM32_Init(BSTIM32, &BSTIM32_InitStruct);
}

void MF_BSTIM32_Interrupt_Init(void)
{
	FL_BSTIM32_ClearFlag_Update(BSTIM32);
	FL_BSTIM32_EnableIT_Update(BSTIM32);
}

void MF_GPTIM0_TimerBase_Init(void)
{
	FL_GPTIM_InitTypeDef TimerBase_InitStruct;
	TimerBase_InitStruct.prescaler = 63999;
	TimerBase_InitStruct.counterMode = FL_GPTIM_COUNTER_DIR_UP;
	TimerBase_InitStruct.autoReload = 59999;
	TimerBase_InitStruct.autoReloadState = FL_DISABLE;
	TimerBase_InitStruct.clockDivision = FL_GPTIM_CLK_DIVISION_DIV1;
	FL_GPTIM_Init(GPTIM0, &TimerBase_InitStruct);
}

void MF_GPTIM0_Interrupt_Init(void)
{
	FL_GPTIM_ClearFlag_Update(GPTIM0);
	FL_GPTIM_EnableIT_Update(GPTIM0);
}

void MF_GPTIM1_TimerBase_Init(void)
{
	FL_GPTIM_InitTypeDef TimerBase_InitStruct;
	TimerBase_InitStruct.prescaler = 6399;
	TimerBase_InitStruct.counterMode = FL_GPTIM_COUNTER_DIR_UP;
	TimerBase_InitStruct.autoReload = 199;
	TimerBase_InitStruct.autoReloadState = FL_DISABLE;
	TimerBase_InitStruct.clockDivision = FL_GPTIM_CLK_DIVISION_DIV1;
	FL_GPTIM_Init(GPTIM1, &TimerBase_InitStruct);
}

void MF_GPTIM1_FL_GPTIM_CHANNEL_1_Channel1_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_GPTIM_OC_InitTypeDef GPTIM1_InitStruct;
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

void MF_GPTIM1_FL_GPTIM_CHANNEL_2_Channel2_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_GPTIM_OC_InitTypeDef GPTIM1_InitStruct;
	GPIO_InitStruct.pin = FL_GPIO_PIN_1;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
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

void MF_ATIM_TimerBase_Init(void)
{
	FL_ATIM_InitTypeDef TimerBase_InitStruct;
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
	FL_ATIM_InitTypeDef TimerBase_InitStruct;
	TimerBase_InitStruct.clockSource = FL_RCC_ATIM_CLK_SOURCE_APB2CLK;
	TimerBase_InitStruct.prescaler = 6399;
	TimerBase_InitStruct.counterMode = FL_ATIM_COUNTER_DIR_UP;
	TimerBase_InitStruct.autoReload = 199;
	TimerBase_InitStruct.autoReloadState = FL_DISABLE;
	TimerBase_InitStruct.clockDivision = FL_ATIM_CLK_DIVISION_DIV1;
	TimerBase_InitStruct.repetitionCounter = 0;
	FL_ATIM_Init(ATIM, &TimerBase_InitStruct);
}

void MF_ATIM_FL_ATIM_CHANNEL_1_Channel1_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_ATIM_OC_InitTypeDef ATIM_InitStruct;
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

void MF_ATIM_FL_ATIM_CHANNEL_2_Channel2_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_ATIM_OC_InitTypeDef ATIM_InitStruct;
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

void MF_ATIM_FL_ATIM_CHANNEL_3_Channel3_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_ATIM_OC_InitTypeDef ATIM_InitStruct;
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

void MF_EXTI_Init(void)
{
	FL_EXTI_CommonInitTypeDef EXTI_InitStruct;
	EXTI_InitStruct.clockSource = FL_RCC_EXTI_CLK_SOURCE_HCLK;
	FL_EXTI_CommonInit(&EXTI_InitStruct);
}

void MF_EXTI_Line4_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_EXTI_InitTypeDef EXTI_InitStruct;
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

void MF_EXTI_Line6_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_EXTI_InitTypeDef EXTI_InitStruct;
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

void MF_EXTI_Line7_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_EXTI_InitTypeDef EXTI_InitStruct;
	GPIO_InitStruct.pin = FL_GPIO_PIN_12;
	GPIO_InitStruct.mode = FL_GPIO_MODE_INPUT;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_ENABLE;
	GPIO_InitStruct.remapPin = (long unsigned int)NULL;
	FL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	EXTI_InitStruct.input = FL_GPIO_EXTI_INPUT_GROUP0;
	EXTI_InitStruct.triggerEdge = FL_GPIO_EXTI_TRIGGER_EDGE_RISING;
	EXTI_InitStruct.filter = FL_ENABLE;
	FL_EXTI_Init(FL_GPIO_EXTI_LINE_7, &EXTI_InitStruct);
}

void MF_NVIC_Init(void)
{
	FL_NVIC_ConfigTypeDef InterruptConfigStruct;
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
	InterruptConfigStruct.preemptPriority = 0x00;
	FL_NVIC_Init(&InterruptConfigStruct, GPIO_IRQn);
#ifdef USE_LPUART0
	InterruptConfigStruct.preemptPriority = 0x00;
	FL_NVIC_Init(&InterruptConfigStruct, LPUART0_IRQn);
#endif
}
