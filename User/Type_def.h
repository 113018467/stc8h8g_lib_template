/*---------------------------------------------------------------------*/
/* --- STC MCU Limited ------------------------------------------------*/
/* --- STC 1T Series MCU Demo Programme -------------------------------*/
/* --- Mobile: (86)13922805190 ----------------------------------------*/
/* --- Fax: 86-0513-55012956,55012947,55012969 ------------------------*/
/* --- Tel: 86-0513-55012928,55012929,55012966 ------------------------*/
/* --- Web: www.STCAI.com ---------------------------------------------*/
/* --- BBS: www.STCAIMCU.com  -----------------------------------------*/
/* --- QQ:  800003751 -------------------------------------------------*/
/* 如果要在程序中使用此代码,请在程序中注明使用了STC的资料及程序            */
/*---------------------------------------------------------------------*/

#ifndef		__TYPE_DEF_H
#define		__TYPE_DEF_H

//========================================================================
//                               类型定义
//========================================================================
typedef unsigned char   u8;     //  8 bits 
typedef unsigned int    u16;    // 16 bits 
typedef unsigned long   u32;    // 32 bits 

typedef signed char     int8;   //  8 bits 
typedef signed int      int16;  // 16 bits 
typedef signed long     int32;  // 32 bits 

typedef unsigned char   uint8;  //  8 bits 
typedef unsigned int    uint16; // 16 bits 
typedef unsigned long   uint32; // 32 bits 

/*
 * 'signed' is redundant below, except for 'signed char' and if
 * the typedef is used to declare a bitfield.
 */

    /* 7.18.1.1 */

    /* exact-width signed integer types */
typedef   signed          char int8_t;
typedef   signed          int int16_t;
typedef   signed          long int32_t;
//typedef   signed       __INT64 int64_t;

    /* exact-width unsigned integer types */
typedef unsigned          char uint8_t;
typedef unsigned          int uint16_t;
typedef unsigned          long uint32_t;
//typedef unsigned       __INT64 uint64_t;

    /* 7.18.2.1 */

    /* minimum values of exact-width signed integer types */
#define INT8_MIN                   -128
#define INT16_MIN                -32768
#define INT32_MIN          (~0x7fffffff)   /* -2147483648 is unsigned */
#define INT64_MIN  __INT64_C(~0x7fffffffffffffff) /* -9223372036854775808 is unsigned */

    /* maximum values of exact-width signed integer types */
#define INT8_MAX                    127
#define INT16_MAX                 32767
#define INT32_MAX            2147483647
#define INT64_MAX  __INT64_C(9223372036854775807)

    /* maximum values of exact-width unsigned integer types */
#define UINT8_MAX                   255
#define UINT16_MAX                65535
#define UINT32_MAX           4294967295u
#define UINT64_MAX __UINT64_C(18446744073709551615)

//========================================================================
//定义常量
//========================================================================
#define	TRUE	1
#define	FALSE	0

//===================================================
#define	NULL	0
//#define	NULL					((void *) 0)

//===================================================
#define	Priority_0			0	//中断优先级为 0 级（最低级）
#define	Priority_1			1	//中断优先级为 1 级（较低级）
#define	Priority_2			2	//中断优先级为 2 级（较高级）
#define	Priority_3			3	//中断优先级为 3 级（最高级）

#define ENABLE		1
#define DISABLE		0

#define SUCCESS		0
#define FAIL			(-1)

//===================================================

#define	I2C_Mode_Master			1
#define	I2C_Mode_Slave			0

#define	PIE			0x20	//1: 比较结果由0变1, 产生上升沿中断
#define	NIE			0x10	//1: 比较结果由1变0, 产生下降沿中断

#define	PWMA	128
#define	PWMB	129

//===================================================

#endif	/* __TYPE_DEF_H */
