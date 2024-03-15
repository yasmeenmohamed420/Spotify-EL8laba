/*
 * NVIC_Private.h
 *
 *      Author: Yasmeen
 */

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_



#define MNVIC_BASE_ADRESS   (0xE000E100)


typedef struct
{
	uint32 ISER[8];
	uint32 reserved0[24];
	uint32 ICER[8];
	uint32 reserved1[24];
	uint32 ISPR[8];
	uint32 reserved2[24];
	uint32 ICPR[8];
	uint32 reserved3[24];
	uint32 IABR[8];
	uint32 resreved4[56];
	uint8 IPR[240];
	uint32 reserved5[580];
	uint32 STIR;
}NVIC_t;


#define NVIC              ((volatile NVIC_t*)MNVIC_BASE_ADRESS)
#define SCB_AIRCR         (*(volatile uint32*)0xE000ED0C)  //to divide in it num of group and sub group
#define MNVIC_VECTKEY     0X05FA0000



#endif /* NVIC_INTERFACE_H_ */
