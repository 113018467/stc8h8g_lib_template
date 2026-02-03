
#ifndef	__UART_H
#define	__UART_H


#include	"Config.h"

#ifndef	Baudrate1
	#error "Undefined Baudrate1!!!"
#endif

extern void Uart_Init(void);


#endif	/* __UART_H */
