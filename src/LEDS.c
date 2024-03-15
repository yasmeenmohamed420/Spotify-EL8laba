#include "BIT_Math.h"
#include "STD.h"
#include "GPIO_interface.h"

void Led_InitVoid(void)
{

	MGPIO_voidSet_Mode(PortA, GPIO_PIN_3,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortA, GPIO_PIN_3, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_12,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_12, Output_push_pull , LOW_SPEED);


	MGPIO_voidSet_Mode(PortB, GPIO_PIN_13,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_13, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_14,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_14, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortB, GPIO_PIN_13,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortB, GPIO_PIN_13, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortC, GPIO_PIN_14,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortC, GPIO_PIN_14, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortC, GPIO_PIN_13,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortC, GPIO_PIN_13, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortC, GPIO_PIN_15,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortC, GPIO_PIN_15, Output_push_pull , LOW_SPEED);
}
