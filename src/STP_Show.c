/*
 *		STP_Show.c
 *
 *      Author: Yasmeen
 */

#include "STD.h"
#include "BIT_Math.h"
#include "STP.h"
#include "STP_Show.h"
#include "TIMER_Interface.h"
#include "MSYSTICK.h"


extern uint8 flag;

void Hamoksha(void)
{
					STP_SendSynch(0xFE1C);
					STP_SendSynch(0xFD14);
					STP_SendSynch(0xFB9C);
					STP_SendSynch(0xF748);
					STP_SendSynch(0xEF3E);
					STP_SendSynch(0xDF09);
					STP_SendSynch(0xBF1C);
					STP_SendSynch(0x7F22);
					MSYSYTICK_voidDelayms(150);

					/////////////////////////////////////////////////////////////////

					STP_SendSynch(0xFE0E);
					//
					STP_SendSynch(0xFD0A);
					//
					STP_SendSynch(0xFB4E);
					//
					STP_SendSynch(0xF724);
					//
					STP_SendSynch(0xEF1F);
					//
					STP_SendSynch(0xDF84);
					//
					STP_SendSynch(0xBF0E);
					//
					STP_SendSynch(0x7F11);
					MSYSYTICK_voidDelayms(150);

					////////////////////////////////////////////////
					STP_SendSynch(0xFE07);
					//
					STP_SendSynch(0xFD05);
					//
					STP_SendSynch(0xFB27);
					//
					STP_SendSynch(0xF712);
					//
					STP_SendSynch(0xEF8F);
					//
					STP_SendSynch(0xDF42);
					//
					STP_SendSynch(0xBF07);
					//
					STP_SendSynch(0x7F88);
					MSYSYTICK_voidDelayms(150);

					//////////////////////////////////////////////
					STP_SendSynch(0xFE83);
					//
					STP_SendSynch(0xFD82);
					//
					STP_SendSynch(0xFB93);
					//
					STP_SendSynch(0xF709);
					//
					STP_SendSynch(0xEFC7);
					//
					STP_SendSynch(0xDF21);
					//
					STP_SendSynch(0xBF83);
					//
					STP_SendSynch(0x7F44);
					MSYSYTICK_voidDelayms(150);

					/////////////////////////////////////////////
					STP_SendSynch(0xFEC1);
					//
					STP_SendSynch(0xFD41);
					//
					STP_SendSynch(0xFBC9);
					//
					STP_SendSynch(0xF784);
					//
					STP_SendSynch(0xEFE3);
					//
					STP_SendSynch(0xDF90);
					//
					STP_SendSynch(0xBFC1);
					//
					STP_SendSynch(0x7F22);
					MSYSYTICK_voidDelayms(150);

					////////////////////////////////////////////
					STP_SendSynch(0xFEE0);
					//
					STP_SendSynch(0xFDA0);
					//
					STP_SendSynch(0xFBE4);
					//
					STP_SendSynch(0xF742);
					//
					STP_SendSynch(0xEFF1);
					//
					STP_SendSynch(0xDF48);
					//
					STP_SendSynch(0xBFE0);
					//
					STP_SendSynch(0x7F11);
					MSYSYTICK_voidDelayms(150);

					////////////////////////////////////////////
					STP_SendSynch(0xFE70);
					//
					STP_SendSynch(0xFD50);
					//
					STP_SendSynch(0xFB72);
					//
					STP_SendSynch(0xF721);
					//
					STP_SendSynch(0xEFF8);
					//
					STP_SendSynch(0xDF24);
					//
					STP_SendSynch(0xBF70);
					//
					STP_SendSynch(0x7F88);
					MSYSYTICK_voidDelayms(150);


					////////////////////////////////////////////
					STP_SendSynch(0xFE38);
					//
					STP_SendSynch(0xFD28);
					//
					STP_SendSynch(0xFB39);
					//
					STP_SendSynch(0xF790);
					//
					STP_SendSynch(0xEF7C);
					//
					STP_SendSynch(0xDF12);
					//
					STP_SendSynch(0xBF38);
					//
					STP_SendSynch(0x7F44);
					MSYSYTICK_voidDelayms(150);

					////////////////////////////////////////////
					STP_SendSynch(0xFE1C);
					//
					STP_SendSynch(0xFD14);
					//
					STP_SendSynch(0xFB9C);
					//
					STP_SendSynch(0xF748);
					//
					STP_SendSynch(0xEF3E);
					//
					STP_SendSynch(0xDF09);
					//
					STP_SendSynch(0xBF1C);
					//
					STP_SendSynch(0x7F22);
					MSYSYTICK_voidDelayms(150);

}

void NoteMusic(void)
{
	for(int i=0;i<2;i++)
	{
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD0C);
		//
		STP_SendSynch(0xFB1C);
		//
		STP_SendSynch(0xF714);
		//
		STP_SendSynch(0xEF04);
		//
		STP_SendSynch(0xDF07);
		//
		STP_SendSynch(0xBF07);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);
		/////////////////////////////////////////////////////////////////

		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD06);
		//
		STP_SendSynch(0xFB0E);
		//
		STP_SendSynch(0xF70A);
		//
		STP_SendSynch(0xEF02);
		//
		STP_SendSynch(0xDF83);
		//
		STP_SendSynch(0xBF83);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);

		////////////////////////////////////////////////
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD03);
		//
		STP_SendSynch(0xFB07);
		//
		STP_SendSynch(0xF705);
		//
		STP_SendSynch(0xEF01);
		//
		STP_SendSynch(0xDFC1);
		//
		STP_SendSynch(0xBFC1);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);

		//////////////////////////////////////////////
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD81);
		//
		STP_SendSynch(0xFB83);
		//
		STP_SendSynch(0xF782);
		//
		STP_SendSynch(0xEF80);
		//
		STP_SendSynch(0xDFE0);
		//
		STP_SendSynch(0xBFE0);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);
		////////
		/////////////////////////////////////////////
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFDC0);
		//
		STP_SendSynch(0xFBC1);
		//
		STP_SendSynch(0xF741);
		//
		STP_SendSynch(0xEF40);
		//
		STP_SendSynch(0xDF70);
		//
		STP_SendSynch(0xBF70);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);

		////////////////////////////////////////////
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD60);
		//
		STP_SendSynch(0xFBE0);
		//
		STP_SendSynch(0xF7A0);
		//
		STP_SendSynch(0xEF20);
		//
		STP_SendSynch(0xDF38);
		//
		STP_SendSynch(0xBF38);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);

		////////////////////////////////////////////
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD30);
		//
		STP_SendSynch(0xFB70);
		//
		STP_SendSynch(0xF750);
		//
		STP_SendSynch(0xEF10);
		//
		STP_SendSynch(0xDF1C);
		//
		STP_SendSynch(0xBF1C);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);


		////////////////////////////////////////////
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD18);
		//
		STP_SendSynch(0xFB38);
		//
		STP_SendSynch(0xF728);
		//
		STP_SendSynch(0xEF08);
		//
		STP_SendSynch(0xDF0E);
		//
		STP_SendSynch(0xBF0E);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);

		//music note
		////////////////////////////////////////////
		STP_SendSynch(0xFE00);
		//
		STP_SendSynch(0xFD0C);
		//
		STP_SendSynch(0xFB1C);
		//
		STP_SendSynch(0xF714);
		//
		STP_SendSynch(0xEF04);
		//
		STP_SendSynch(0xDF07);
		//
		STP_SendSynch(0xBF07);
		//
		STP_SendSynch(0x7F00);
		MSYSYTICK_voidDelayms(150);

	}
}


void SHOW_AMR(void)
{
	static uint8 counter2=0;
	if(flag==4)
	{
		if(counter2<=10)
			{
				STP_SendSynch(0xFEF8);
				STP_SendSynch(0xFD24);
				STP_SendSynch(0xFB22);
				STP_SendSynch(0xF722);
				STP_SendSynch(0xEF24);
				STP_SendSynch(0xDFF8);
				STP_SendSynch(0xBF00);
			}

			else if(counter2<=20)
			{
				STP_SendSynch(0xFE24);
				STP_SendSynch(0xFD22);
				STP_SendSynch(0xFB22);
				STP_SendSynch(0xF724);
				STP_SendSynch(0xEFF8);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0xBFFC);
			}

			else if(counter2<=30)
			{
				STP_SendSynch(0xFE22);
				STP_SendSynch(0xFD22);
				STP_SendSynch(0xFB24);
				STP_SendSynch(0xF7F8);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFFC);
				STP_SendSynch(0xBF04);
			}

			else if(counter2<=40)
			{
				STP_SendSynch(0xFE22);
				STP_SendSynch(0xFD24);
				STP_SendSynch(0xFBF8);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFFC);
				STP_SendSynch(0xBF04);
				STP_SendSynch(0xBF08);
			}

			else if(counter2<=50)
			{
				STP_SendSynch(0xFE24);
				STP_SendSynch(0xFDF8);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFFC);
				STP_SendSynch(0xDF04);
				STP_SendSynch(0xBF08);
				STP_SendSynch(0xBFF0);
			}

			else if(counter2<=60)
			{
				STP_SendSynch(0xFEF8);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7FC);
				STP_SendSynch(0xEF04);
				STP_SendSynch(0xDF08);
				STP_SendSynch(0xBFF0);
				STP_SendSynch(0xBF08);
			}

			else if(counter2<=70)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBFC);
				STP_SendSynch(0xF704);
				STP_SendSynch(0xEF08);
				STP_SendSynch(0xDFF0);
				STP_SendSynch(0xBF08);
				STP_SendSynch(0xBF04);
			}

			else if(counter2<=80)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDFC);
				STP_SendSynch(0xFB04);
				STP_SendSynch(0xF708);
				STP_SendSynch(0xEFF0);
				STP_SendSynch(0xDF08);
				STP_SendSynch(0xBF04);
				STP_SendSynch(0xBFFC);
			}
			else if(counter2<=90)
			{
				STP_SendSynch(0xFEFC);
				STP_SendSynch(0xFD04);
				STP_SendSynch(0xFB08);
				STP_SendSynch(0xF7F0);
				STP_SendSynch(0xEF08);
				STP_SendSynch(0xDF04);
				STP_SendSynch(0xBFFC);
				STP_SendSynch(0xBF00);
			}

			else if(counter2<=100)
			{
				STP_SendSynch(0xFE04);
				STP_SendSynch(0xFD08);
				STP_SendSynch(0xFBF0);
				STP_SendSynch(0xF708);
				STP_SendSynch(0xEF04);
				STP_SendSynch(0xDFFC);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0xBFFC);

			}

			else if(counter2<=110)
			{
				STP_SendSynch(0xFE08);
				STP_SendSynch(0xFDF0);
				STP_SendSynch(0xFB08);
				STP_SendSynch(0xF704);
				STP_SendSynch(0xEFFC);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFFC);
				STP_SendSynch(0xBF24);

			}

			else if(counter2<=120)
			{
				STP_SendSynch(0xFEF0);
				STP_SendSynch(0xFD08);
				STP_SendSynch(0xFB04);
				STP_SendSynch(0xF7FC);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFFC);
				STP_SendSynch(0xBF24);
				STP_SendSynch(0xBF24);
			}

			else if(counter2<=130)
			{
				STP_SendSynch(0xFE08);
				STP_SendSynch(0xFD04);
				STP_SendSynch(0xFBFC);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFFC);
				STP_SendSynch(0xDF24);
				STP_SendSynch(0xBF24);
				STP_SendSynch(0xBF58);
			}

			else if(counter2<=140)
			{
				STP_SendSynch(0xFE04);
				STP_SendSynch(0xFDFC);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7FC);
				STP_SendSynch(0xEF24);
				STP_SendSynch(0xDF24);
				STP_SendSynch(0xBF58);
				STP_SendSynch(0xBF80);
			}

			else if(counter2<=150)
			{

				STP_SendSynch(0xFEFC);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBFC);
				STP_SendSynch(0xF724);
				STP_SendSynch(0xEF24);
				STP_SendSynch(0xDF58);
				STP_SendSynch(0xBF80);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0xBF80);
			}

			else if(counter2<=160)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDFC);
				STP_SendSynch(0xFB24);
				STP_SendSynch(0xF724);
				STP_SendSynch(0xEF58);
				STP_SendSynch(0xDF80);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0xBFFC);
			}

			else if(counter2<=170)
			{
				STP_SendSynch(0xFEFC);
				STP_SendSynch(0xFD24);
				STP_SendSynch(0xFB24);
				STP_SendSynch(0xF758);
				STP_SendSynch(0xEF80);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFFC);
				STP_SendSynch(0xBF54);
			}

			else if(counter2<=180)
			{
				STP_SendSynch(0xFE24);
				STP_SendSynch(0xFD24);
				STP_SendSynch(0xFB58);
				STP_SendSynch(0xF780);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFFC);
				STP_SendSynch(0xBF84);
				STP_SendSynch(0xBF48);
			}

			else if(counter2<=190)
			{
				STP_SendSynch(0xFE24);
				STP_SendSynch(0xFD58);
				STP_SendSynch(0xFB80);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFFC);
				STP_SendSynch(0xDF84);
				STP_SendSynch(0xBF48);
				STP_SendSynch(0xBF30);
			}
			else if(counter2<=200)
			{
				STP_SendSynch(0xFE58);
				STP_SendSynch(0xFD80);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7FC);
				STP_SendSynch(0xEF84);
				STP_SendSynch(0xDF48);
				STP_SendSynch(0xBF30);
				STP_SendSynch(0xBF00);
			}

			else if(counter2<=210)
			{
				STP_SendSynch(0xFE80);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBFC);
				STP_SendSynch(0xF784);
				STP_SendSynch(0xEF48);
				STP_SendSynch(0xDF30);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0xBFF4);
			}

			else if(counter2<=220)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDFC);
				STP_SendSynch(0xFB84);
				STP_SendSynch(0xF748);
				STP_SendSynch(0xEF30);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFF4);
				STP_SendSynch(0xBF00);
			}

			else if(counter2<=230)
			{
				STP_SendSynch(0xFEFC);
				STP_SendSynch(0xFD84);
				STP_SendSynch(0xFB48);
				STP_SendSynch(0xF730);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFF4);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0xBFF0);
			}
			else if(counter2<=240)
			{
				STP_SendSynch(0xFE84);
				STP_SendSynch(0xFD48);
				STP_SendSynch(0xFB30);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFF4);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFF0);
				STP_SendSynch(0xBF28);
			}

			else if(counter2<=250)
			{
				STP_SendSynch(0xFE48);
				STP_SendSynch(0xFD30);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7F4);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFF0);
				STP_SendSynch(0xBF28);
				STP_SendSynch(0xBF24);
			}

			else if(counter2<=260)
			{
				STP_SendSynch(0xFE30);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBF4);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFF0);
				STP_SendSynch(0xDF28);
				STP_SendSynch(0xBF24);
				STP_SendSynch(0xBF28);
			}

			else if(counter2<=270)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDF4);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7F0);
				STP_SendSynch(0xEF28);
				STP_SendSynch(0xDF24);
				STP_SendSynch(0xBF28);
				STP_SendSynch(0xBFF0);
			}

			else if(counter2<=280)
			{
				STP_SendSynch(0xFEF4);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBF0);
				STP_SendSynch(0xF728);
				STP_SendSynch(0xEF24);
				STP_SendSynch(0xDF28);
				STP_SendSynch(0xBFF0);
				STP_SendSynch(0xBF00);
			}

			else if(counter2<=290)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDF4);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7F0);
				STP_SendSynch(0xEF28);
				STP_SendSynch(0xDF24);
				STP_SendSynch(0xBF28);
				STP_SendSynch(0xBFF0);
			}

			else if(counter2<=300)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDF0);
				STP_SendSynch(0xFB28);
				STP_SendSynch(0xF724);
				STP_SendSynch(0xEF28);
				STP_SendSynch(0xDFF0);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0xBFFC);
			}

			else if(counter2<=310)
			{
				STP_SendSynch(0xFEF0);
				STP_SendSynch(0xFD28);
				STP_SendSynch(0xFB24);
				STP_SendSynch(0xF728);
				STP_SendSynch(0xEFF0);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFFC);
				STP_SendSynch(0xBF90);
			}

			else if(counter2<=320)
			{
				STP_SendSynch(0xFE28);
				STP_SendSynch(0xFD24);
				STP_SendSynch(0xFB28);
				STP_SendSynch(0xF7F0);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFFC);
				STP_SendSynch(0xBF90);
				STP_SendSynch(0xBFF0);
			}
			else if( counter2>250)
			{
				counter2=0;
			}

		counter2++;
	}
}

void Show_Tamer(void)
{
	static uint8 counter1=0;
	if(flag==3)
	{
		if(counter1<=10)
			{
				STP_SendSynch(0xFEFC);
				STP_SendSynch(0xFD24);
				STP_SendSynch(0xFBD8);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFF0);
				STP_SendSynch(0xDF28);
				STP_SendSynch(0xBF28);
				STP_SendSynch(0x7FF0);

			}

			else if(counter1<=20)
			{

				STP_SendSynch(0xFE24);
				STP_SendSynch(0xFDD8);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7F0);
				STP_SendSynch(0xEF28);
				STP_SendSynch(0xDF28);
				STP_SendSynch(0xBFF0);
				STP_SendSynch(0x7F00);
			}
			else if(counter1<=30)
			{
				STP_SendSynch(0xFED8);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBF0);
				STP_SendSynch(0xF728);
				STP_SendSynch(0xEF28);
				STP_SendSynch(0xDFF0);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0x7FB8);
			}
			else if(counter1<=30)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDF0);
				STP_SendSynch(0xFB28);
				STP_SendSynch(0xF728);
				STP_SendSynch(0xEFF0);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFB8);
				STP_SendSynch(0x7FA8);
			}
			else if(counter1<=40)
			{
				STP_SendSynch(0xFEF0);
				STP_SendSynch(0xFD28);
				STP_SendSynch(0xFB28);
				STP_SendSynch(0xF7F0);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFB8);
				STP_SendSynch(0xBFA8);
				STP_SendSynch(0x7F84);
			}
			else if(counter1<=50)
			{
				STP_SendSynch(0xFE28);
				STP_SendSynch(0xFD28);
				STP_SendSynch(0xFBF0);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFB8);
				STP_SendSynch(0xDFA8);
				STP_SendSynch(0xBF84);
				STP_SendSynch(0x7F00);
			}
			else if(counter1<=60)
			{
				STP_SendSynch(0xFE28);
				STP_SendSynch(0xFDF0);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7B8);
				STP_SendSynch(0xEFA8);
				STP_SendSynch(0xDF84);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0x7FF8);
			}
			else if(counter1<=70)
			{
				STP_SendSynch(0xFEF0);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBB8);
				STP_SendSynch(0xF7A8);
				STP_SendSynch(0xEF84);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFF8);
				STP_SendSynch(0x7F20);
			}
			else if(counter1<=80)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDB8);
				STP_SendSynch(0xFBA8);
				STP_SendSynch(0xF784);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFF8);
				STP_SendSynch(0xBF20);
				STP_SendSynch(0x7F20);
			}
			else if(counter1<=90)
			{
				STP_SendSynch(0xFEB8);
				STP_SendSynch(0xFDA8);
				STP_SendSynch(0xFB84);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFF8);
				STP_SendSynch(0xDF20);
				STP_SendSynch(0xBF20);
				STP_SendSynch(0x7FF8);

			}
			else if(counter1<=100)
			{

				STP_SendSynch(0xFEA8);
				STP_SendSynch(0xFD84);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7F8);
				STP_SendSynch(0xEF20);
				STP_SendSynch(0xDF20);
				STP_SendSynch(0xBFF8);
				STP_SendSynch(0x7F00);

			}
			else if(counter1<=110)
			{
				STP_SendSynch(0xFE84);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBF8);
				STP_SendSynch(0xF720);
				STP_SendSynch(0xEF20);
				STP_SendSynch(0xDFF8);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0x7F60);
			}
			else if(counter1<=120)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDF8);
				STP_SendSynch(0xFB20);
				STP_SendSynch(0xF720);
				STP_SendSynch(0xEFF8);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBF60);
				STP_SendSynch(0x7F90);
			}
			else if(counter1<=130)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDF8);
				STP_SendSynch(0xFB20);
				STP_SendSynch(0xF720);
				STP_SendSynch(0xEFF8);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBF60);
				STP_SendSynch(0x7F90);
			}
			else if(counter1<=140)
			{
				STP_SendSynch(0xFEF8);
				STP_SendSynch(0xFD20);
				STP_SendSynch(0xFB20);
				STP_SendSynch(0xF7F8);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDF60);
				STP_SendSynch(0xBF90);
				STP_SendSynch(0x7F90);
			}

			else if(counter1<=150)
			{
				STP_SendSynch(0xFE20);
				STP_SendSynch(0xFD20);
				STP_SendSynch(0xFBF8);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEF60);
				STP_SendSynch(0xDF90);
				STP_SendSynch(0xBF90);
				STP_SendSynch(0x7F60);
			}
			else if(counter1<=160)
			{
				STP_SendSynch(0xFE20);
				STP_SendSynch(0xFDF8);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF760);
				STP_SendSynch(0xEF90);
				STP_SendSynch(0xDF90);
				STP_SendSynch(0xBF60);
				STP_SendSynch(0x7F00);
			}
			else if(counter1<=170)
			{
				STP_SendSynch(0xFEF8);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFB60);
				STP_SendSynch(0xF790);
				STP_SendSynch(0xEF90);
				STP_SendSynch(0xDF60);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0x7FE0);
			}
			else if(counter1<=180)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFD60);
				STP_SendSynch(0xFB90);
				STP_SendSynch(0xF790);
				STP_SendSynch(0xEF60);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFE0);
				STP_SendSynch(0x7F80);
			}

			else if(counter1<=180)
			{
				STP_SendSynch(0xFE60);
				STP_SendSynch(0xFD90);
				STP_SendSynch(0xFB90);
				STP_SendSynch(0xF760);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFE0);
				STP_SendSynch(0xBF80);
				STP_SendSynch(0x7F80);
			}

			else if(counter1<=190)
			{
				STP_SendSynch(0xFE90);
				STP_SendSynch(0xFD90);
				STP_SendSynch(0xFB60);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFE0);
				STP_SendSynch(0xDF80);
				STP_SendSynch(0xBF80);
				STP_SendSynch(0x7FE0);

			}

			else if(counter1<=200)
			{
				STP_SendSynch(0xFE90);
				STP_SendSynch(0xFD60);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7E0);
				STP_SendSynch(0xEF80);
				STP_SendSynch(0xDF80);
				STP_SendSynch(0xBFE0);
				STP_SendSynch(0x7F00);
			}

			else if(counter1<=210)
			{
				STP_SendSynch(0xFE60);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBE0);
				STP_SendSynch(0xF780);
				STP_SendSynch(0xEF80);
				STP_SendSynch(0xDFE0);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0x7FFC);
			}

			else if(counter1<=220)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDE0);
				STP_SendSynch(0xFB80);
				STP_SendSynch(0xF780);
				STP_SendSynch(0xEFE0);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFFC);
				STP_SendSynch(0x7F24);
			}

			else if(counter1<=230)
			{
				STP_SendSynch(0xFEE0);
				STP_SendSynch(0xFD80);
				STP_SendSynch(0xFB80);
				STP_SendSynch(0xF7E0);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFFC);
				STP_SendSynch(0xBF24);
				STP_SendSynch(0x7FD8);
			}

			else if(counter1<=240)
			{
				STP_SendSynch(0xFE80);
				STP_SendSynch(0xFD80);
				STP_SendSynch(0xFBE0);
				STP_SendSynch(0xF700);
				STP_SendSynch(0xEFFC);
				STP_SendSynch(0xDF24);
				STP_SendSynch(0xBFD8);
				STP_SendSynch(0x7F00);
			}

			else if(counter1<=250)
			{
				STP_SendSynch(0xFE80);
				STP_SendSynch(0xFDE0);
				STP_SendSynch(0xFB00);
				STP_SendSynch(0xF7FC);
				STP_SendSynch(0xEF24);
				STP_SendSynch(0xDFD8);
				STP_SendSynch(0xBF00);
				STP_SendSynch(0x7FF0);
			}

			else if(counter1<=260)
			{
				STP_SendSynch(0xFEE0);
				STP_SendSynch(0xFD00);
				STP_SendSynch(0xFBFC);
				STP_SendSynch(0xF724);
				STP_SendSynch(0xEFD8);
				STP_SendSynch(0xDF00);
				STP_SendSynch(0xBFF0);
				STP_SendSynch(0x7F28);
			}

			else if(counter1<=270)
			{
				STP_SendSynch(0xFE00);
				STP_SendSynch(0xFDFC);
				STP_SendSynch(0xFB24);
				STP_SendSynch(0xF7D8);
				STP_SendSynch(0xEF00);
				STP_SendSynch(0xDFF0);
				STP_SendSynch(0xBF28);
				STP_SendSynch(0x7F28);
			}
			else
			{
				counter1=0;
			}

			counter1++;
		}

	}

void NUM_One(void)
{
	STP_SendSynch(0xFE00);
	STP_SendSynch(0xFD00);
	STP_SendSynch(0xFB46);
	STP_SendSynch(0xF743);
	STP_SendSynch(0xEF7F);
	STP_SendSynch(0xDF40);
	STP_SendSynch(0xBF40);
	STP_SendSynch(0xBF00);
	TIM2_voidSetBusyWait(300);
}

void NUM_TWO(void)
{
	STP_SendSynch(0xFE00);
	STP_SendSynch(0xFD79);
	STP_SendSynch(0xFB49);
	STP_SendSynch(0xF749);
	STP_SendSynch(0xEF49);
	STP_SendSynch(0xDF4F);
	STP_SendSynch(0xBF00);
	STP_SendSynch(0xBF00);
	TIM2_voidSetBusyWait(300);

}

void NUM_Three(void)
{
	STP_SendSynch(0xFE00);
	STP_SendSynch(0xFD49);
	STP_SendSynch(0xFB49);
	STP_SendSynch(0xF749);
	STP_SendSynch(0xEF49);
	STP_SendSynch(0xDF7F);
	STP_SendSynch(0xBF00);
	STP_SendSynch(0xBF00);
	TIM2_voidSetBusyWait(300);
}

void NUM_Four(void)
{
	STP_SendSynch(0xFE00);
	STP_SendSynch(0xFD00);
	STP_SendSynch(0xFB1E);
	STP_SendSynch(0xF710);
	STP_SendSynch(0xEF10);
	STP_SendSynch(0xDFFE);
	STP_SendSynch(0xBF00);
	STP_SendSynch(0xBF00);
	TIM2_voidSetBusyWait(300);
}

void NUM_Five(void)
{
	STP_SendSynch(0xFE00);
	STP_SendSynch(0xFD3C);
	STP_SendSynch(0xFB04);
	STP_SendSynch(0xF704);
	STP_SendSynch(0xEF3C);
	STP_SendSynch(0xDF20);
	STP_SendSynch(0xBF20);
	STP_SendSynch(0xBF3C);
	TIM2_voidSetBusyWait(300);
}

void NUM_Six(void)
{
	STP_SendSynch(0xFE00);
	STP_SendSynch(0xFD3C);
	STP_SendSynch(0xFB04);
	STP_SendSynch(0xF73C);
	STP_SendSynch(0xEF24);
	STP_SendSynch(0xDF24);
	STP_SendSynch(0xBF3C);
	STP_SendSynch(0xBF00);
	TIM2_voidSetBusyWait(300);
}


