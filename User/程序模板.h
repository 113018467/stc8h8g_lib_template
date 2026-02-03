
#ifndef	__XXXXX_H
#define	__XXXXX_H


#include	"Config.h"

/*!< 注释格式 */
typedef struct
{
	u8 Work;			/*!< 工作状态 */
	u8 Time;			/*!< 时间变量 */
  u8 Count;			/*!< 计数变量 */
	
  enum
  {
    IDLE=0,
    BUSY=!IDLE,
  } Busy;				/*!< 繁忙标志 */
	
} XXXXX_TypeDef;

extern void XXXXX_Init(void);
extern void XXXXX_Handler(void);
extern void XXXXX_Decrement(void);


#endif	/* __XXXXX_H */
