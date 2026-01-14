#ifndef __MF_UART_H
#define __MF_UART_H

// 串口波特率全局定义
#define UART0_BAUDRATE 115200
#define UART1_BAUDRATE 9600
#define UART4_BAUDRATE 115200
#define UART5_BAUDRATE 115200
#define LPUART0_BAUDRATE 9600

#ifdef __cplusplus
extern "C" {
#endif

void MF_UART0_Init(void);
void MF_UART0_Interrupt_Init(void);
void MF_UART1_Init(void);
void MF_UART1_Interrupt_Init(void);
void MF_UART4_Init(void);
void MF_UART4_Interrupt_Init(void);
void MF_UART5_Init(void);
void MF_UART5_Interrupt_Init(void);
void MF_LPUART0_Init(void);
void MF_LPUART0_Interrupt_Init(void);

#ifdef __cplusplus
}
#endif

#endif // __MF_UART_H
