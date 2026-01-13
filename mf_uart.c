#include "mf_uart.h"
#include "fm33lc0xx_fl.h"

// 串口0
#ifdef USE_UART0
void MF_UART0_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_UART_InitTypeDef UART0_InitStruct;
	GPIO_InitStruct.pin = FL_GPIO_PIN_2;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_ENABLE;
	GPIO_InitStruct.remapPin = FL_DISABLE;
	FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	GPIO_InitStruct.pin = FL_GPIO_PIN_3;
	GPIO_InitStruct.pull = FL_DISABLE;
	FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	UART0_InitStruct.clockSrc = FL_RCC_UART0_CLK_SOURCE_APB1CLK;
	UART0_InitStruct.baudRate = UART0_BAUDRATE;
	UART0_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
	UART0_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
	UART0_InitStruct.parity = FL_UART_PARITY_NONE;
	UART0_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;
	FL_UART_Init(UART0, &UART0_InitStruct);
}
void MF_UART0_Interrupt_Init(void)
{
	FL_UART_ClearFlag_RXBuffFull(UART0);
	FL_UART_EnableIT_RXBuffFull(UART0);
}
#endif
// 串口1
#ifdef USE_UART1
void MF_UART1_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_UART_InitTypeDef UART1_InitStruct;
	GPIO_InitStruct.pin = FL_GPIO_PIN_13;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_ENABLE;
	GPIO_InitStruct.remapPin = FL_DISABLE;
	FL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	GPIO_InitStruct.pin = FL_GPIO_PIN_14;
	FL_GPIO_Init(GPIOB, &GPIO_InitStruct);
	UART1_InitStruct.clockSrc = FL_RCC_UART1_CLK_SOURCE_APB1CLK;
	UART1_InitStruct.baudRate = UART1_BAUDRATE;
	UART1_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
	UART1_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
	UART1_InitStruct.parity = FL_UART_PARITY_NONE;
	UART1_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;
	FL_UART_Init(UART1, &UART1_InitStruct);
}
void MF_UART1_Interrupt_Init(void)
{
	FL_UART_ClearFlag_RXBuffFull(UART1);
	FL_UART_EnableIT_RXBuffFull(UART1);
}
#endif
// 串口4
#ifdef USE_UART4
void MF_UART4_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_UART_InitTypeDef UART4_InitStruct;
	GPIO_InitStruct.pin = FL_GPIO_PIN_0;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_ENABLE;
	GPIO_InitStruct.remapPin = FL_DISABLE;
	FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	GPIO_InitStruct.pin = FL_GPIO_PIN_1;
	FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	UART4_InitStruct.clockSrc = (long unsigned int)NULL;
	UART4_InitStruct.baudRate = UART4_BAUDRATE;
	UART4_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
	UART4_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
	UART4_InitStruct.parity = FL_LPUART_PARITY_NONE;
	UART4_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;
	FL_UART_Init(UART4, &UART4_InitStruct);
}
void MF_UART4_Interrupt_Init(void)
{
	FL_UART_ClearFlag_RXBuffFull(UART4);
	FL_UART_EnableIT_RXBuffFull(UART4);
}
#endif
// 串口5
#ifdef USE_UART5
void MF_UART5_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_UART_InitTypeDef UART5_InitStruct;
#if 0
	GPIO_InitStruct.pin = FL_GPIO_PIN_4;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_ENABLE;
	GPIO_InitStruct.remapPin = FL_DISABLE;
	FL_GPIO_Init(GPIOD, &GPIO_InitStruct);
	GPIO_InitStruct.pin = FL_GPIO_PIN_5;
	GPIO_InitStruct.pull = FL_DISABLE;
	FL_GPIO_Init(GPIOC, &GPIO_InitStruct);
#else
	GPIO_InitStruct.pin = FL_GPIO_PIN_0;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_ENABLE;
	GPIO_InitStruct.remapPin = FL_DISABLE;
	FL_GPIO_Init(GPIOD, &GPIO_InitStruct);
	GPIO_InitStruct.pin = FL_GPIO_PIN_1;
	FL_GPIO_Init(GPIOD, &GPIO_InitStruct);
#endif
	UART5_InitStruct.clockSrc = (long unsigned int)NULL;
	UART5_InitStruct.baudRate = UART5_BAUDRATE;
	UART5_InitStruct.dataWidth = FL_UART_DATA_WIDTH_8B;
	UART5_InitStruct.stopBits = FL_UART_STOP_BIT_WIDTH_1B;
	UART5_InitStruct.parity = FL_UART_PARITY_NONE;
	UART5_InitStruct.transferDirection = FL_UART_DIRECTION_TX_RX;
	FL_UART_Init(UART5, &UART5_InitStruct);
}
void MF_UART5_Interrupt_Init(void)
{
	FL_UART_ClearFlag_RXBuffFull(UART5);
	FL_UART_EnableIT_RXBuffFull(UART5);
}
#endif
// LPUART0
#ifdef USE_LPUART0
void MF_LPUART0_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_LPUART_InitTypeDef LPUART0_InitStruct;
	GPIO_InitStruct.pin = FL_GPIO_PIN_13;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_ENABLE;
	GPIO_InitStruct.remapPin = FL_ENABLE;
	FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	GPIO_InitStruct.pin = FL_GPIO_PIN_14;
	FL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	LPUART0_InitStruct.clockSrc = FL_RCC_LPUART_CLK_SOURCE_LSCLK;
	if(LPUART0_BAUDRATE == 9600)
		LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_9600;
	else if(LPUART0_BAUDRATE == 4800)
		LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_4800;
	else if(LPUART0_BAUDRATE == 2400)
		LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_2400;
	else if(LPUART0_BAUDRATE == 1200)
		LPUART0_InitStruct.baudRate = FL_LPUART_BAUDRATE_1200;
	LPUART0_InitStruct.dataWidth = FL_LPUART_DATA_WIDTH_8B;
	LPUART0_InitStruct.stopBits = FL_LPUART_STOP_BIT_WIDTH_1B;
	LPUART0_InitStruct.parity = FL_LPUART_PARITY_NONE;
	LPUART0_InitStruct.transferDirection = FL_LPUART_DIRECTION_TX_RX;
	FL_LPUART_Init(LPUART0, &LPUART0_InitStruct);
}
void MF_LPUART0_Interrupt_Init(void)
{
	FL_LPUART_ClearFlag_RXBuffFull(LPUART0);
	FL_LPUART_EnableIT_RXBuffFull(LPUART0);
}
#endif
// ...可继续补充其他串口相关实现
