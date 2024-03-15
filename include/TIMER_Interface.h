/*
 * TIMER_Interface.h
 *
 *      Author: Yasmeen
 */

#ifndef    GPTIM_INTERFACE_H
#define    GPTIM_INTERFACE_H

/********************TIM2********************/
void TIM2_voidInit(void);
void TIM2_voidSetBusyWait( uint32 Copy_u32Ticks );
void TIM2_voidSetIntervalSingle  ( uint32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void TIM2_voidSetIntervalPeriodic( uint32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void TIM2_voidStopInterval(void);
uint32  TIM2_u16GetElapsedTime(void);
uint32  TIM2_u16GetRemainingTime(void);

/********************TIM3********************/

void TIM3_voidInit(void);
void TIM3_voidSetBusyWait( uint32 Copy_u32Ticks );
void TIM3_voidSetIntervalSingle  ( uint32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void TIM3_voidSetIntervalPeriodic( uint32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void TIM3_voidStopInterval(void);
uint32  TIM3_u16GetElapsedTime(void);
uint32  TIM3_u16GetRemainingTime(void);

/********************TIM4********************/

void TIM4_voidInit(void);
void TIM4_voidSetBusyWait( uint32 Copy_u32Ticks );
void TIM4_voidSetIntervalSingle  ( uint32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void TIM4_voidSetIntervalPeriodic( uint32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void TIM4_voidStopInterval(void);
uint32  TIM4_u16GetElapsedTime(void);
uint32  TIM4_u16GetRemainingTime(void);


/********************CR1**********************/
#define   GPTIM_CEN           0
#define   GPTIM_UDIS          1
#define   GPTIM_URS           2
#define   GPTIM_OPM           3
#define   GPTIM_ARPE          7
/******************DIER***********************/
#define   GPTIM_UIE           0
/*******************EGR**************************/
#define   GPTIM_UG            0
/*******************SR***************************/
#define   GPTIM_UIF           0



#endif
