/*
 * IR.c
 *
 *  Author: Yasmeen
 */
#include "BIT_Math.h"
#include "STD.h"
#include "IR.h"
#include "MSYSTICK.h"


volatile uint8 startflag=0;   //to know falling edge is the first falling edge or no
volatile uint32 FramData[50]={0};  //fram =33 but it more
volatile uint8 EdgeCounter=0;
volatile uint8 Data=0;
uint8 i=0;
uint8 flag=0;

void voidPlay(void)
{
	switch(Data)
	{

	case 0:  //off

		break;

	case 142:  //1
			flag=1;
		break;

	case 134:  //2
			flag=2;
		break;

	case 143:  //3
			flag=3;
		break;

	case 146:  //4
			flag=4;
		break;

	case 135:  //5
			flag=5;
		break;

	case 147:  //6
			flag=6;
		break;

	case 150:  //7
			flag=7;
		break;

	case 130:  //8
			flag=8;
		break;
	case 151:  //9
			flag=9;
		break;
	}
}



void VoidTackAction()
{
	uint8 i;
	Data=0;
	if((FramData[0]>=10000)&&(FramData[0]<=15000))
	{
		for(i=0;i<8;i++)
		{
			//Data[17]->is the first byte in data
			if((FramData[17+i]>=2000) && (FramData[17+i]<=2400))
			{
				SET_BIT(Data,i);
			}
			else
			{
				CLR_BIT(Data,i);
			}
		}
			voidPlay();
	}
	else
	{
		//Invalid fram
	}
	startflag=0;
	FramData[0]=0;
	EdgeCounter=0;
	//asm("NOP");

}

void GetFram(void)
{

	if(startflag==0)  // it is a first falling edge
	{
		//start timer  ---> 1000000tick->1sec
		MSTK_voidSetInterval_single(1000000,VoidTackAction);  //time count for 1 sec and call fun VoidTackAction
		startflag=1;
		//flagout=1;
	}

	else
	{
		//to calculate the timercount
		FramData[EdgeCounter]=MSTK_u32GetElapsedTime();
		MSTK_voidSetInterval_single(1000000,VoidTackAction);
		EdgeCounter++;
	}
	//asm("NOP");
}


