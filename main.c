/**
  ****************************************************************************************************
  * @file    main.c
  * @author  FMSH Application Team
  * @brief   Header file of FL Module
  ****************************************************************************************************
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
  ****************************************************************************************************
  */

#include "main.h"
#include "fm33_assert.h"

extern void APP_START_Init(void);


/**    
* Chip Series: FM33LC0xx;
* FL Version: v2.3;
* Project Name: LC046_母板;
* Project Version: v2.3.0.0;
* Create Date: 2022-08-04;
*/

  
int main(void)
{
    /* Initialize FL Driver Library */
    FL_Init();

    /* Configure the system clock */
    MF_Clock_Init();
    
   
    /* Initialize all configured peripherals */
    MF_Config_Init();

	
    /* User app start. */
		APP_START_Init();
	
    while(1)
    {     

    }

}


