#include "mf_adc.h"
#include "fm33lc0xx_fl.h"

void MF_ADC_Common_Init(void)
{
	FL_ADC_CommonInitTypeDef ADC_CommonInitStruct;
	ADC_CommonInitStruct.clockSource = FL_RCC_ADC_CLK_SOURCE_RCHF;
	ADC_CommonInitStruct.clockPrescaler = FL_RCC_ADC_PSC_DIV8;
	// FM33LC0xx无reference、continuousConvMode、dataAlignment成员，去除无效赋值
	FL_ADC_CommonInit(&ADC_CommonInitStruct);
}

void MF_ADC_Sampling_Init(void)
{
	FL_ADC_InitTypeDef Sampling_InitStruct;
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
