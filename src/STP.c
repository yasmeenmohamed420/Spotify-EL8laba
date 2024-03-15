/*
 * STP.c
 *
 *      Author: Yasmeen
 */

#include "STD.h"
#include "BIT_Math.h"
#include "STP_Private.h"
#include "STP_Config.h"
#include "STP.h"
#include "GPIO_interface.h"
#include "TIMER_Interface.h"



void STP_SendSynch(uint16 DataSend)
{
	sint16 Counter;  //for avoid infinite loop
	uint8 Local_Bit;
	for(Counter=15; Counter>=0 ;Counter--)
	{
		/* Send bit by bit starting from MSB */
		Local_Bit = GET_BIT(DataSend,Counter);
		MGPIO_voidSetPinValue(STP_Serial_Data_Port,STP_Serial_Data_Pin,Local_Bit);

		/*Send Pulse to Shift CLK*/
		MGPIO_voidSetPinValue(STP_Shift_CLK_Port,STP_Shift_CLK_Pin,GPIO_HIGH);
		TIM2_voidSetBusyWait(2);
		MGPIO_voidSetPinValue(STP_Shift_CLK_Port,STP_Shift_CLK_Pin,GPIO_LOW);
		TIM2_voidSetBusyWait(2);
	}
	/*Send Pulse to Storage Clock*/
	MGPIO_voidSetPinValue(STP_Store_CLK_Port,STP_Store_CLK_Pin,GPIO_HIGH);
	TIM2_voidSetBusyWait(2);
	MGPIO_voidSetPinValue(STP_Store_CLK_Port,STP_Store_CLK_Pin,GPIO_LOW);
	TIM2_voidSetBusyWait(2);

}
