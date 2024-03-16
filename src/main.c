#include "BIT_Math.h"
#include "STD.h"
#include "TFT.h"
#include "DAC_interface.h"
#include "tamer.h"
#include "Tamer_Imag.h"
#include "IR.h"
#include "LEDS.h"
#include "cairokee_Imag.h"
#include "file.h"
#include "amr_imag.h"
#include "hamaiy_imag.h"
#include "masarh_imag.h"
#include "STP.h"
#include "GPIO_interface.h"
#include "SPI.h"
#include "MRCC_int.h"
#include "TIMER_Interface.h"
#include "MEXTI_interface.h"
#include "MNVIC_interface.h"
#include "MSYSTICK.h"
#include "STP_Show.h"


extern uint8 flag;
uint8 Buttom=1;

void main()
{
	MRCC_VOIDinit();
	/*Enable CLK*/
	MRCC_VOIDenable(RCC_AHB1,AHB1_GPIOA);
	MRCC_VOIDenable(RCC_AHB1,AHB1_GPIOB);
	MRCC_VOIDenable(RCC_APB2 , APB2_SPI1);
	MRCC_VOIDenable(RCC_APB1 , APB1_TIM2);
	MRCC_VOIDenable(RCC_APB1 , APB1_TIM3);
	MRCC_VOIDenable(RCC_APB1 , APB1_TIM5);

	/*IR*/
	MGPIO_voidSet_Mode(PortA,GPIO_PIN_0 , INPUT_MODE);
	MGPIO_voidSetPinMode(PortA,GPIO_PIN_0 , NPUD , LOW_SPEED);  //floating

	//Leds
	Led_InitVoid();

	MEXTI_voidInerruptSetPort(EXTI_LineZero,EXTI_PortA);
	MEXTI0_voidCallBack(GetFram);
	MEXTI_voidInterruptEnableDisable(EXTI_LineZero , EXTI_Enable);
	MEXTI_voidInterruptTrigger(EXTI_LineZero,EXTI_Falling);

	MNVIC_VoidSetInterruptGroupMode(Group16Sub0);
	MNVIC_VoidSetInterruptPriority(INTPos_EXTI0,0,0);
	MNVIC_VoidEnableInterrupt(INTPos_EXTI0);
	MSYSYTICK_voidInit();

	TIM2_voidInit();  //timer
	TIM3_voidInit();

	/*TFT REST , A0*/
	MGPIO_voidSet_Mode(PortA, GPIO_PIN_1,OUTPUT_MODE);  //A0
	MGPIO_voidSetPinMode(PortA, GPIO_PIN_1, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortA, GPIO_PIN_2,OUTPUT_MODE);  //RST
	MGPIO_voidSetPinMode(PortA, GPIO_PIN_2, Output_push_pull , LOW_SPEED);

	/* SPI */
	MGPIO_voidSet_Mode(PortA, GPIO_PIN_4 , ALTERNATIVE_MODE);
	MGPIO_voidSet_Mode(PortA, GPIO_PIN_5 , ALTERNATIVE_MODE);
	MGPIO_voidSet_Mode(PortA, GPIO_PIN_6 , ALTERNATIVE_MODE);
	MGPIO_voidSet_Mode(PortA, GPIO_PIN_7 , ALTERNATIVE_MODE);
	MGPIO_voidSetPinAltFn(PortA,GPIO_PIN_4,_ALTFN_5);
	MGPIO_voidSetPinAltFn(PortA,GPIO_PIN_5,_ALTFN_5);
	MGPIO_voidSetPinAltFn(PortA,GPIO_PIN_6,_ALTFN_5);
	MGPIO_voidSetPinAltFn(PortA,GPIO_PIN_7,_ALTFN_5);

	MSPI_VoidInit();
	/*STP*/
	MGPIO_voidSet_Mode(PortA, GPIO_PIN_8,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortA, GPIO_PIN_8, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortA, GPIO_PIN_11,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortA, GPIO_PIN_11, Output_push_pull , LOW_SPEED);

	MGPIO_voidSet_Mode(PortA, GPIO_PIN_12,OUTPUT_MODE);
	MGPIO_voidSetPinMode(PortA, GPIO_PIN_12, Output_push_pull , LOW_SPEED);

	MSYSYTICK_voidCtrlIntState(SYSTICKEnable);
	MNVIC_VoidEnableInterrupt(29);
	MNVIC_VoidEnableInterrupt(30);

	TIM3_voidSetIntervalPeriodic(30000,SHOW_AMR);
	TIM5_voidSetIntervalPeriodic(30000,Show_Tamer);


	while(1)
	{
		switch(flag)
		{

		case 1:
			TFT_Init();
			for(uint8 i=0 ;i<8 ;i++)
			{
				NUM_One();
				TFT_Display(masarh_imag);
			}
			break ;

		case 2:
			TFT_Init();
			for(uint8 i=0 ;i<8 ;i++)
			{
				NUM_TWO();
				TFT_Display(hamaiy_imag);
			}
			break ;

		case 3:  //tamer

			TFT_Init();
			TFT_Display(tasmer);
			DAC_voidInit();
			DAC_voidSetData(tamer_raw, 43376);
			break ;

		case 4:  //amr diab
			TFT_Init();
			TFT_Display(amr_imag);
			DAC_voidInit();
			DAC_voidSetData(Amaran_raw, 39753);
			break ;
//
//		case 5:
//			NUM_Five();
//			TFT_Init();
//			TFT_Display(cairokee_imag);
//			break ;

//
//		case 6:
//			NUM_Six();
//			TFT_Init();
//			TFT_Display(amr_imag);
//			break ;
//
//		case 7:
//			NUM_Seven();
//			TFT_Init();
//			TFT_Display(tasmer);
//			break ;

		case 8:
			MGPIO_voidSetPinValue(PortA, GPIO_PIN_3,GPIO_HIGH );
			MGPIO_voidSetPinValue(PortB, GPIO_PIN_12,GPIO_HIGH );
			MGPIO_voidSetPinValue(PortB, GPIO_PIN_13,GPIO_HIGH );
			MGPIO_voidSetPinValue(PortB, GPIO_PIN_14,GPIO_HIGH );
			break ;

		case 9:
			MGPIO_voidSetPinValue(PortA, GPIO_PIN_3, GPIO_LOW);
			MGPIO_voidSetPinValue(PortB, GPIO_PIN_12,GPIO_LOW);
			MGPIO_voidSetPinValue(PortB, GPIO_PIN_13,GPIO_LOW);
			MGPIO_voidSetPinValue(PortB, GPIO_PIN_14,GPIO_LOW);
			break ;
		}
	}
}

