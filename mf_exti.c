#include "mf_exti.h"
#include "fm33lc0xx_fl.h"

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
