/*
 * MSYSTICK.c
 *
 *      Author: Yasmeen
 */

#include "STD.h"
#include "BIT_Math.h"
#include "MSYSTICK_private.h"
#include "MSYSTICK_config.h"
#include "MSYSTICK.h"



static void (*SetCallBack) (void) = NULL_PTR ;
static uint8 Mode_GLOBALE = 0 ;

void MSYSYTICK_voidInit(void)
{
#if (SYSTICK_Source == AHB)

	SYSTICK->STK_CTRL |= (1<<CLKSOURCE);

#elif (SYSTICK_Source == AHB_DIVIDEBY8)

	SYSTICK->STK_CTRL &= ~(1<<CLKSOURCE);

#endif

}

void MSYSYTICK_voidStart(uint32 Copy_u32Loadvalue)
{
	SYSTICK->STK_VAL = 0;
	SYSTICK->STK_LOAD = Copy_u32Loadvalue;
	SYSTICK->STK_CTRL |= (1<<ENABLE);

}

uint8   MSYSYTICK_voidReadFlag(void)
{
	return GET_BIT(SYSTICK->STK_CTRL,COUNT_FLAG);
}

void MSYSYTICK_voidCtrlIntState(SYSTICKState Copy_State )
{
	switch (Copy_State) {
	case SYSTICKEnable:
		SYSTICK->STK_CTRL |= (1<<TICK_INT);
		break;
	case SYSTICKDisable:
		SYSTICK->STK_CTRL &= ~(1<<TICK_INT);
		break;
	default:
		break;
	}

}

// 16MHZ --> /8 ---> 2MHZ
void MSYSYTICK_voidDelayUs(uint32 Copy_u32Delayvalue)
{
	MSYSYTICK_voidCtrlIntState(SYSTICKDisable);
	MSYSYTICK_voidStart(Copy_u32Delayvalue*2);
	while (MSYSYTICK_voidReadFlag() == 0);
	CLR_BIT(SYSTICK->STK_CTRL,0);
	SYSTICK->STK_LOAD = 0 ;
	SYSTICK->STK_VAL  = 0 ;
}

void MSYSYTICK_voidDelayms(uint32 Copy_u32Delayvalue)
{
	MSYSYTICK_voidCtrlIntState(SYSTICKDisable);
	MSYSYTICK_voidStart(Copy_u32Delayvalue*2000);
	while (MSYSYTICK_voidReadFlag() == 0);
	CLR_BIT(SYSTICK->STK_CTRL,0);
	SYSTICK->STK_LOAD = 0 ;
	SYSTICK->STK_VAL  = 0 ;
}

uint32  MSTK_u32GetElapsedTime(void)
{
	return (((SYSTICK->STK_LOAD)-(SYSTICK->STK_VAL))/3);
}

uint32  MSTK_u32GetRemainingTime(void)
{
	return SYSTICK->STK_VAL ;
}

void MSTK_voidSetInterval_single(uint32 Copy_u32Loadvalue, void (*CallbackFunction)(void))
{
	CLR_BIT(SYSTICK->STK_CTRL,0);
	SetCallBack=CallbackFunction;
	MSYSYTICK_voidStart(Copy_u32Loadvalue);
	Mode_GLOBALE = SINGLE_MODE ;

	//SetCallBack();

}
void MSTK_voidSetInterval_periodic(uint32 Copy_u32Loadvalue, void (*CallbackFunction)(void))
{
	SetCallBack=CallbackFunction;
	MSYSYTICK_voidStart(Copy_u32Loadvalue);
	Mode_GLOBALE = PERIODIC ;

}


void SysTick_Handler(void)
{
	if(SetCallBack!=NULL_PTR)
	{
		SetCallBack();
		if(Mode_GLOBALE==SINGLE_MODE)
		{
			SetCallBack = NULL_PTR;
		}
	}
	else
	{

	}
}
