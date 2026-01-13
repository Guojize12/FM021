/* 包含头文件 ------------------------------------------------------------------*/
#include "mf_config.h"

/**
  * @brief  统一初始化入口，负责外设等模块的集中调度
  * @param  无
  * @retval 无
  */
void MF_Config_Init(void)
{
 
     MF_Clock_Init();
     MF_GPIO_Init();
     MF_EXTI_Init();
     MF_BSTIM32_Init();
     MF_GPTIM0_TimerBase_Init();
     MF_ADC_Common_Init();
     MF_ADC_Sampling_Init();
     MF_SPI1_Init();
     MF_SPI2_Init();
     MF_UART0_Init();
     MF_UART1_Init();
     MF_UART4_Init();
     MF_UART5_Init();
     MF_LPUART0_Init();
     MF_IWDT_Init();
     MF_RTC_Init();
     MF_NVIC_Init();
}

/**
  * @brief  错误处理函数
  * @retval 无
  */
void Error_Handler(void)
{
    // 可根据实际项目需求补充错误处理代码
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  用于报告断言错误发生的文件名和行号
  * @param  file: 指向源文件名的指针
  * @param  line: 断言发生的源代码行号
  * @retval 无
  */
void assert_failed(uint8_t *file, uint32_t line)
{
    // 可根据实际项目需求补充断言处理代码
}
#endif /* USE_FULL_ASSERT */