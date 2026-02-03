
#ifndef	__TICK_H
#define	__TICK_H


#include	"Config.h"

#define TICK_FRE				(1000UL)				// 设置 Tick 频率，单位为 Hz
#define TickTimeReload	TickTime=1000		// 1S 时间管理重新加载设置，1ms(Tick) * 1000 = 1s

extern u16 TickTime;

extern void Tick_Init(void);
extern void TickTime_Decrement(void);


#endif	/* __TICK_H */
