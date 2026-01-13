#ifndef __MF_TIMER_H
#define __MF_TIMER_H

#ifdef __cplusplus
extern "C" {
#endif

void MF_BSTIM32_Init(void);
void MF_BSTIM32_Interrupt_Init(void);
void MF_GPTIM0_TimerBase_Init(void);
void MF_GPTIM0_Interrupt_Init(void);
void MF_GPTIM1_TimerBase_Init(void);
void MF_GPTIM1_FL_GPTIM_CHANNEL_1_Channel1_Init(void);
void MF_GPTIM1_FL_GPTIM_CHANNEL_2_Channel2_Init(void);
void MF_ATIM_TimerBase_Init(void);
void MF_ATIM_TimerBase_Init1(void);
void MF_ATIM_FL_ATIM_CHANNEL_1_Channel1_Init(void);
void MF_ATIM_FL_ATIM_CHANNEL_2_Channel2_Init(void);
void MF_ATIM_FL_ATIM_CHANNEL_3_Channel3_Init(void);
void MF_EXTI_Init(void);
void MF_EXTI_Line4_Init(void);
void MF_EXTI_Line6_Init(void);
void MF_EXTI_Line7_Init(void);
void MF_NVIC_Init(void);

#ifdef __cplusplus
}
#endif

#endif // __MF_TIMER_H
