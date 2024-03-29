/*
 * MEXTI.c
 *
 *      Author: Yasmeen
 */


#include "STD.h"
#include "BIT_MATH.h"
#include "MEXTI_private.h"
#include "MEXTI_config.h"
#include "MEXTI_interface.h"


static void (*Global_EXTIPtr[16])(void);   //arr of pointer to function


void MEXTI_voidInerruptSetPort(EXTI_Line Copy_u8Line,EXTI_Port Copy_u8Port)
{

	SYSCFG->EXTICR[Copy_u8Line/Div_Fac] &= ~(Musk<<(4*(Copy_u8Line%Div_Fac)));
	SYSCFG->EXTICR[Copy_u8Line/Div_Fac] |= Copy_u8Port<<(4*(Copy_u8Line%Div_Fac));
}

void MEXTI_voidInterruptEnableDisable(EXTI_Line Copy_u8IntLine , EXTI_ENDis Copy_u8ENDis)
{

	switch (Copy_u8ENDis){
	case EXTI_Enable:
		EXTI->IMR |= 1<<(Copy_u8IntLine);
		break;
	case EXTI_Disable:
		EXTI->IMR &= ~(1<<(Copy_u8IntLine));
		break;
	default:  break;
	}


}
void MEXTI_voidInterruptTrigger(EXTI_Line Copy_u8IntLine,EXTI_Trigger Copy_u8Trig){
	switch (Copy_u8Trig){
		case EXTI_Falling:
			EXTI->FTSR |= 1<<(Copy_u8IntLine);
			EXTI->RTSR &= ~(1<<(Copy_u8IntLine));
			break;
		case EXTI_Rising:
			EXTI->RTSR |= 1<<(Copy_u8IntLine);
			EXTI->FTSR &= ~(1<<(Copy_u8IntLine));
			break;
		case EXTI_OnChange:
			EXTI->RTSR |= 1<<(Copy_u8IntLine);
			EXTI->FTSR |= 1<<(Copy_u8IntLine);
			break;
		default:  break;
	}
}

void MEXTI0_voidCallBack(void (*ptr)(void))
{
	Global_EXTIPtr[0]=ptr;
}

void MEXTI1_voidCallBack(void (*ptr)(void))
{
	Global_EXTIPtr[1]=ptr;
}

//_IRQHandler --->Must write like that
void EXTI0_IRQHandler(void)   //ISR
{
	Global_EXTIPtr[0]();
    EXTI->PR |=1;
}

void EXTI1_IRQHandler(void)
{
	Global_EXTIPtr[1]();
	  EXTI->PR |=1<<1;
}


