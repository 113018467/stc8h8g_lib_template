
#include	"Tick.h"
#include	"STC8G_H_Timer.h"
#include	"STC8G_H_NVIC.h"


u16 TickTime;

//========================================================================
// 函数: void	Tick_Init(void)
// 描述: 初始化程序.
// 参数: None.
// 返回: None.
// 版本: V1.0, 2012-10-22
//========================================================================
void Tick_Init(void)										// 1毫秒
{
	TIM_InitTypeDef TIM_InitStructure;		// 结构定义
	
	TickTimeReload;												// 对 TickTime 预置数据，尝试过上电初始化后，等待很久才有 TickTime 反应
	
	TIM_InitStructure.TIM_Mode      = TIM_16BitAutoReload;							// 指定工作模式,   TIM_16BitAutoReload,TIM_16Bit,TIM_8BitAutoReload,TIM_16BitAutoReloadNoMask
	TIM_InitStructure.TIM_ClkSource = TIM_CLOCK_1T;											// 指定时钟源,     TIM_CLOCK_1T,TIM_CLOCK_12T,TIM_CLOCK_Ext
	TIM_InitStructure.TIM_ClkOut    = DISABLE;													// 是否输出高速脉冲, ENABLE或DISABLE
	TIM_InitStructure.TIM_Value     = 65536UL - (MAIN_Fosc / TICK_FRE);	// 初值,
	TIM_InitStructure.TIM_Run       = ENABLE;														// 是否初始化后启动定时器, ENABLE或DISABLE
	Timer_Inilize(Timer0,&TIM_InitStructure);														// 初始化Timer0	  Timer0,Timer1,Timer2,Timer3,Timer4
	NVIC_Timer0_Init(ENABLE,Priority_0);																// 中断使能, ENABLE/DISABLE; 优先级(低到高) Priority_0,Priority_1,Priority_2,Priority_3

}

//========================================================================
// 函数: void	TickTime_Decrement(void)
// 描述: 减量程序.放置在Tick里处理时间操作
// 参数: None.
// 返回: None.
// 版本: V1.0, 2012-10-22
//========================================================================
void TickTime_Decrement(void)
{
  if(TickTime != 0)
	{ 
    TickTime--;
  }
}
