/*
 * GPIO.c
 *
 *      Author: Yasmeen
 */

#include "STD.h"
#include "BIT_Math.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "GPIO_interface.h"


void MGPIO_voidSet_Mode(uint32 PortNum, uint32 PinNum , uint32 Mode)
{
	if((PortNum==PortA && PinNum==GPIO_PIN_13 && PinNum==GPIO_PIN_14 && PinNum==GPIO_PIN_15) || (PortNum==PortB && PinNum==GPIO_PIN_2 && PinNum==GPIO_PIN_3 && PinNum==GPIO_PIN_4))
	{
		//do nothing
	}

	else
	{
		switch (PortNum)
		{
		case PortA:
			GPIOA->MODER&=~(3<<PinNum*2);
			GPIOA->MODER|=(Mode<<PinNum*2);
			break;

		case PortB:
			GPIOB->MODER&=~(3<<PinNum*2);
			GPIOB->MODER|=(Mode<<PinNum*2);
			break;

		case PortC:
			GPIOC->MODER&=~(3<<PinNum*2);
			GPIOC->MODER|=(Mode<<PinNum*2);
			break;
		default:
			break;
		}
	}
}

void MGPIO_voidSetPinMode(uint32 PortNum, uint32 PinNum , uint32 Mode , uint32 speed)
{

	if((PortNum==PortA && PinNum==GPIO_PIN_13 && PinNum==GPIO_PIN_14 && PinNum==GPIO_PIN_15) || (PortNum==PortB && PinNum==GPIO_PIN_2 && PinNum==GPIO_PIN_3 && PinNum==GPIO_PIN_4))
	{
		//do nothing
	}

	else
	{
		switch (PortNum)
		{
		case PortA:
			//MODE PUSHPULL
			GPIOA->OTYPER&=~(1<<PinNum);
			GPIOA->OTYPER|=(Mode<<PinNum);
			//SPEED
			GPIOA->OSPEEDR&=~(3<<PinNum*2);
			GPIOA->OSPEEDR|=(speed<<PinNum*2);
			break;

		case PortB:
			//MODE
			GPIOB->OTYPER&=~(1<<PinNum);
			GPIOB->OTYPER|=(Mode<<PinNum);
			//SPEED
			GPIOB->OSPEEDR&=~(3<<PinNum*2);
			GPIOB->OSPEEDR|=(speed<<PinNum*2);
			break;

		case PortC:
			//MODE
			GPIOC->OTYPER&=~(1<<PinNum);
			GPIOC->OTYPER|=(Mode<<PinNum);
			//SPEED
			GPIOC->OSPEEDR&=~(3<<PinNum*2);
			GPIOC->OSPEEDR|=(speed<<PinNum*2);
			break;
		default:
			break;
		}
	}
}

void MGPIO_voidSetPinValue(uint32 PortNum, uint32 PinNum , uint32 Value)
{
	if((PortNum==PortA && PinNum==GPIO_PIN_13 && PinNum==GPIO_PIN_14 && PinNum==GPIO_PIN_15) || (PortNum==PortB && PinNum==GPIO_PIN_2 && PinNum==GPIO_PIN_3 && PinNum==GPIO_PIN_4))
	{
		//do nothing
	}

	else
	{
		switch (PortNum)
		{
		case PortA:
			GPIOA->ODR&=~(1<<PinNum);
			GPIOA->ODR|=(Value<<PinNum);

			break;

		case PortB:
			GPIOB->ODR&=~(1<<PinNum);
			GPIOB->ODR|=(Value<<PinNum);

			break;

		case PortC:
			GPIOC->ODR&=~(1<<PinNum);
			GPIOC->ODR|=(Value<<PinNum);
			break;

		default:
			break;
		}
	}
}

void MGPI0_voidPUD(uint32 PortNum, uint32 PinNum , uint32 Mode)
{

	switch (PortNum)
	{
	case PortA:
		GPIOA->PUPDR&=~(1<<PinNum);
		GPIOA->PUPDR|=(Mode<<PinNum);

		break;

	case PortB:
		GPIOB->PUPDR&=~(1<<PinNum);
		GPIOB->PUPDR|=(Mode<<PinNum);

		break;

	case PortC:
		GPIOC->PUPDR&=~(1<<PinNum);
		GPIOC->PUPDR|=(Mode<<PinNum);
		break;

	default:
		break;
	}
}
uint32 MGPIO_GetPinValue(uint32 PortNum, uint32 PinNum )
{

	uint32 value=0;

	switch (PortNum)
	{
	case PortA:
		value= GET_BIT(GPIOA->IDR , PinNum);

		break;

	case PortB:
		value= GET_BIT(GPIOB->IDR , PinNum);

		break;

	case PortC:
		value= GET_BIT(GPIOB->IDR , PinNum);
		break;

	}
	return value;

}

void MGPIO_voidSetPinAltFn( uint8 Copy_u8PortNum ,uint8 Copy_u8PinNum, uint8 Copy_u8ALF )
{
	if(Copy_u8PinNum <=7)
	{
		switch(Copy_u8PortNum )
		{
			 case PortA  :
				 GPIOA->AFRL |=(uint32)(Copy_u8ALF <<(4* Copy_u8PinNum));
				 break ;
			 case PortB  :
				 GPIOA->AFRL |=(uint32)(Copy_u8ALF <<(4* Copy_u8PinNum));
				 break ;

			 default :
				 break ;
		}

	}
	else
	{
	switch(Copy_u8PortNum )
		{
			 case PortA  :
				 GPIOA->AFRH |=(uint32)(Copy_u8ALF <<(4* (Copy_u8PinNum % 8)));
				 break ;
			 case PortB  :
				 GPIOA->AFRH |=(uint32)(Copy_u8ALF <<(4* (Copy_u8PinNum % 8 )));
				 break ;
			 default :
				 break ;
		}


	}
}
