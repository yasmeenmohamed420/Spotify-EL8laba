/*
 * MSYSTICK.h
 *
 *      Author: Yasmeen
 */

#ifndef MSYSTICK_H_
#define MSYSTICK_H_


#define SINGLE_MODE 1
#define PERIODIC 0

typedef enum
{
	SYSTICKEnable,
	SYSTICKDisable
}SYSTICKState;


// clock -> AHB  ****  AHB/8
void MSYSYTICK_voidInit(void);

void MSYSYTICK_voidStart(uint32 Copy_u32Loadvalue);

uint8   MSYSYTICK_voidReadFlag(void);

void MSYSYTICK_voidCtrlIntState(SYSTICKState Copy_State );

// 16MHZ --> /8 ---> 2MHZ
void MSYSYTICK_voidDelayUs(uint32 Copy_u32Delayvalue);

void MSYSYTICK_voidDelayms(uint32 Copy_u32Delayvalue);

uint32  MSTK_u32GetElapsedTime(void);

uint32  MSTK_u32GetRemainingTime(void);

void MSTK_voidSetInterval_single(uint32 Copy_u32Loadvalue, void (*CallbackFunction)(void));
void MSTK_voidSetInterval_periodic(uint32 Copy_u32Loadvalue, void (*CallbackFunction)(void));

#endif /* MSYSTICK_H_ */
