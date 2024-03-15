/*
 * MRCC_prg.c
 *
 *      Author: Yasmeen
 */

#include "STD.h"
#include "BIT_Math.h"

#include "MRCC_prv.h"
#include "MRCC_cfg.h"
#include "MRCC_int.h"



void MRCC_VOIDinit(void)
{
#if (SYS_CLK==RCC_HSE)
	//bypass -> crystal oscillator(2 pins) /RC (1 pin)
	RCC->CR &=~(1<<RCC_BYP);
	RCC->CR |=1<<RCC_HSEON;
	while(!GET_BIT(RCC->CR,RCC_HSERDY));
	RCC->CFGR &=SWITCH_MUSK;
	RCC->CFGR |=RCC_HSE;

#elif (SYS_CLK==HSI)
	RCC->CR |=1<<RCC_HSION;
	while(!GET_BIT(RCC->CR,RCC_HSIRDY));

#endif






}
void MRCC_VOIDenable(BUS copy_bus,uint16 copy_u16peripheral)
{
	switch(copy_bus)
	{
	case RCC_AHB1 :
		RCC->AHB1ENR |=1<<copy_u16peripheral;
		break;
	case RCC_AHB2 :
		RCC->AHB2ENR |=1<<copy_u16peripheral;
		break;
	case RCC_APB1 :
		RCC->APB1ENR |=1<<copy_u16peripheral;
		break;
	case RCC_APB2 :
		RCC->APB2ENR |=1<<copy_u16peripheral;
		break;
	default:break;


	}



}
void MRCC_VOIDdisable(BUS copy_bus,uint16 copy_u16peripheral)
{
	switch(copy_bus)
	{
	case RCC_AHB1 :
		RCC->AHB1ENR &=~(1<<copy_u16peripheral);
		break;
	case RCC_AHB2 :
		RCC->AHB2ENR &=~(1<<copy_u16peripheral);
		break;
	case RCC_APB1 :
		RCC->APB1ENR &=~(1<<copy_u16peripheral);
		break;
	case RCC_APB2 :
		RCC->APB2ENR &=~(1<<copy_u16peripheral);
		break;
	default:break;

	}
}


