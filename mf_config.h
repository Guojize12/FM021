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


/* USER CODE BEGIN Header */ 

/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MF_CONFIG_H
#define __MF_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
#include "fm33lc0xx_fl.h"
/* Exported functions prototypes ---------------------------------------------*/

// 拆分后的模块头文件
#include "mf_gpio.h"
#include "mf_uart.h"
#include "mf_timer.h"
#include "mf_adc.h"
#include "mf_spi.h"
#include "mf_iwdt.h"
#include "mf_rtc_clock.h"

void MF_Config_Init(void);
void Error_Handler(void);


#ifdef __cplusplus
}
#endif

#endif /* __MF_CONFIG_H */

/*************************(C) COPYRIGHT Fudan Microelectronics **** END OF FILE*************************/
