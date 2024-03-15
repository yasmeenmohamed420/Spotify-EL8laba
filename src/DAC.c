/*
 * DAC.c
 *
 *      Author: Yasmeen
 */
#include "STD.h"
#include "BIT_Math.h"
#include "DAC_interface.h"
#include "DAC_config.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "TIMER_Interface.h"



void DAC_voidInit()
{	/*DAC*/
	MGPIO_voidSet_Mode(PortB, GPIO_PIN_0,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_0, Output_push_pull , MEDIUM_SPEED);
	MGPIO_voidSet_Mode(PortB, GPIO_PIN_1,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_1, Output_push_pull , MEDIUM_SPEED);
	MGPIO_voidSet_Mode(PortB, GPIO_PIN_5,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_5, Output_push_pull , MEDIUM_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_6,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_6, Output_push_pull , MEDIUM_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_7,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_7, Output_push_pull , MEDIUM_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_8,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_8, Output_push_pull , MEDIUM_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_9,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_9, Output_push_pull , MEDIUM_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_10,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_10, Output_push_pull , MEDIUM_SPEED);

}

void DAC_voidSetData(const uint8 *arr, uint32 arr_size)
{
	static uint32 Data;
	for (Data=0 ; Data<=arr_size ; Data++)
	{
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_0,GET_BIT(arr[Data],GPIO_PIN_0));
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_1,GET_BIT(arr[Data],GPIO_PIN_1));
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_5,GET_BIT(arr[Data],GPIO_PIN_5));
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_6,GET_BIT(arr[Data],GPIO_PIN_6));
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_7,GET_BIT(arr[Data],GPIO_PIN_7));
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_8,GET_BIT(arr[Data],GPIO_PIN_8));
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_9,GET_BIT(arr[Data],GPIO_PIN_9));
		MGPIO_voidSetPinValue(PORTB,GPIO_PIN_10,GET_BIT(arr[Data],GPIO_PIN_10));
		TIM2_voidSetBusyWait(250);

	}

}
