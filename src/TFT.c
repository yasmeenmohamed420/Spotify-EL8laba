/*
 * TFT.c
 *
 *      Author: Yasmeen
 */

#include "STD.h"
#include "BIT_Math.h"
#include "TFT_private.h"
#include "TFT_config.h"
#include "TFT.h"
#include "GPIO_interface.h"
#include "SPI.h"
#include "TIMER_Interface.h"


static void TFT_Reset(void)
{
	MGPIO_voidSetPinValue(TFT_RESET_PORT, TFT_RESET_PIN , TFT_HIGH);
	TIM2_voidSetBusyWait(200);
	MGPIO_voidSetPinValue(TFT_RESET_PORT, TFT_RESET_PIN , TFT_LOW);
	TIM2_voidSetBusyWait(200);
	MGPIO_voidSetPinValue(TFT_RESET_PORT, TFT_RESET_PIN , TFT_HIGH);
	TIM2_voidSetBusyWait(200);
	MGPIO_voidSetPinValue(TFT_RESET_PORT, TFT_RESET_PIN , TFT_LOW);
	TIM2_voidSetBusyWait(200);
	MGPIO_voidSetPinValue(TFT_RESET_PORT, TFT_RESET_PIN , TFT_HIGH);
	TIM2_voidSetBusyWait(240000);  //120m
}


void TFT_Init(void)
{
	TFT_Reset();
	/* Sleep Out */
	TFT_WriteCmd(0x11);
	TIM2_voidSetBusyWait(20000);   //10m
	/* To Enter Color Mode*/
	TFT_WriteCmd(0x3A);
	/* Color Mode --> RGB565 */
	TFT_WriteData(0x05);
	/* Display On */
	TFT_WriteCmd(0x29);
}


static void TFT_WriteCmd(uint8 Cmd)
{
	MGPIO_voidSetPinValue(TFT_A0_PORT, TFT_A0_PIN , TFT_LOW);
	MSPI_u16Transceive(Cmd);
}

static void TFT_WriteData(uint8 Data)
{
	MGPIO_voidSetPinValue(TFT_A0_PORT, TFT_A0_PIN , TFT_HIGH);
	MSPI_u16Transceive(Data);
}

void TFT_Display(const uint16 *ptr)
{
	uint16 i;
	uint8 High, Low;
	/* Set x */
	TFT_WriteCmd(0x2A);
	TFT_WriteData(0);
	TFT_WriteData(0);
	TFT_WriteData(0);
	TFT_WriteData(127);

	/* Set y */
	TFT_WriteCmd(0x2B);
	TFT_WriteData(0);
	TFT_WriteData(0);
	TFT_WriteData(0);
	TFT_WriteData(159);

	/* Write On RAM */
	TFT_WriteCmd(0x2c);

	for(i=0;i<20480;i++)
	{
		High=~ptr[i]>>8;
		TFT_WriteData(High);
		Low= ~ptr[i];
		TFT_WriteData(Low);
	}

}

