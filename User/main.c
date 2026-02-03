
#include	"config.h"
#include	"Uart.h"
#include	"Tick.h"


//========================================================================
// 函数: void	main(void)
// 描述: 主函数程序.
// 参数: None.
// 返回: None.
// 版本: V1.0, 2012-10-22
//========================================================================
void main(void)
{
	// 初始化
	EAXSFR();			/* 扩展寄存器访问使能 */
	Uart_Init();	// 串口初始化，设置终端输出
	Tick_Init();	// Tick 初始化
	
	EA = 1;				// 开启总中断
	
	printf("STC8H8K64U UART1 Test Programme!\r\n");	//UART1发送一个字符串
//	PrintString1("STC8H8K64U UART1 Test Programme!\r\n");	//UART1发送一个字符串
	
	while (1)
	{

		
		
		
// 时间管理 ==============================================================
		if(TickTime == 0)
		{
			TickTimeReload;

			printf("STC8H8K64U UART1 Test Programme!!!\r\n");	//UART1发送一个字符串
			
		}
		
	}
}
