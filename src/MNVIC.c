/*
 * NVIC.c
 *
 *      Author: Yasmeen
 */

#include "STD.h"
#include "BIT_Math.h"

#include "MNVIC_private.h"
#include "MNVIC_config.h"
#include "MNVIC_interface.h"


static uint8 Global_uint8IPR=0;

void MNVIC_VoidEnableInterrupt(uint8 Copy_uint8IntPos)
{
    NVIC->ISER[Copy_uint8IntPos/Reg_div] |=1<<(Copy_uint8IntPos%Reg_div);
}
void MNVIC_VoidDisableInterrupt(uint8 Copy_uint8IntPos)
{
	NVIC->ICER[Copy_uint8IntPos/Reg_div] |=1<<(Copy_uint8IntPos%Reg_div);
}
void MNVIC_VoidEnableInterruptPending(uint8 Copy_uint8IntPos)
{
	NVIC->ISPR[Copy_uint8IntPos/Reg_div] |=1<<(Copy_uint8IntPos%Reg_div);
}
void MNVIC_VoidDisableInterruptPending(uint8 Copy_uint8IntPos)
{
	NVIC->ICPR[Copy_uint8IntPos/Reg_div] |=1<<(Copy_uint8IntPos%Reg_div);
}

void MNVIC_uint8IsInterruptActive(uint8 Copy_uint8IntPos,uint8 *Copy_Read)  //To know if isr execute or no
{
	*Copy_Read=GET_BIT((NVIC->IABR[Copy_uint8IntPos/Reg_div]),(Copy_uint8IntPos%Reg_div));
}
void MNVIC_VoidSetInterruptPriority(uint8 Copy_uint8IntPos,uint8 Copy_uint8GroupNum,uint8 Copy_uint8SubGroupNum)
{
	switch(Global_uint8IPR){
	case Group16Sub0 :
		NVIC->IPR[Copy_uint8IntPos] = Copy_uint8GroupNum<<4  ;
		break;
	case Group8Sub2  :
		NVIC->IPR[Copy_uint8IntPos] = Copy_uint8GroupNum<<5 | Copy_uint8SubGroupNum<<4;
		break;
	case Group4Sub4  :
		NVIC->IPR[Copy_uint8IntPos] = Copy_uint8GroupNum<<6 | Copy_uint8SubGroupNum<<4;
		break;
	case Group2Sub8  :
		NVIC->IPR[Copy_uint8IntPos] = Copy_uint8GroupNum<<7 | Copy_uint8SubGroupNum<<4;
		break;
	case Group0Sub16 :
		NVIC->IPR[Copy_uint8IntPos] = Copy_uint8SubGroupNum<<4 ;
		break;
	default: break;
	}
}
void MNVIC_VoidSetInterruptGroupMode(MNVIC_Group_t Copy_uddtGroupMode)
{
	Global_uint8IPR=Copy_uddtGroupMode;    //ex save ib var. 4g & 4sub
	SCB_AIRCR =MNVIC_VECTKEY;
	uint32 Copy_u32Local =   MNVIC_VECTKEY | (Copy_uddtGroupMode<<8);
    SCB_AIRCR = Copy_u32Local ;
}
