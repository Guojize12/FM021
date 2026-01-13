#ifndef __MF_UART_H
#define __MF_UART_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef USE_UART0
void MF_UART0_Init(void);
void MF_UART0_Interrupt_Init(void);
#endif
#ifdef USE_UART1
void MF_UART1_Init(void);
void MF_UART1_Interrupt_Init(void);
#endif
#ifdef USE_UART4
void MF_UART4_Init(void);
void MF_UART4_Interrupt_Init(void);
#endif
#ifdef USE_UART5
void MF_UART5_Init(void);
void MF_UART5_Interrupt_Init(void);
#endif
#ifdef USE_LPUART0
void MF_LPUART0_Init(void);
void MF_LPUART0_Interrupt_Init(void);
#endif

#ifdef __cplusplus
}
#endif

#endif // __MF_UART_H
