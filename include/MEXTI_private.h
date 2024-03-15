/*
 * MEXTI_private.h
 *
 *      Author: Yasmeen
 */

#ifndef MEXTI_PRIVATE_H_
#define MEXTI_PRIVATE_H_

#define MEXTI_BASE_ADRESS (0x40013c00)
#define SYSCFG_BASE_ADRESS (0x40013800)

#define Div_Fac  4
#define Musk     15

typedef struct
{
	uint32 IMR;
	uint32 EMR;
	uint32 RTSR;
	uint32 FTSR;
	uint32 SWIER;
	uint32 PR;
}MEXTI_t;

typedef struct
{
	uint32 MEMRMP;
	uint32 PMC;
	uint32 EXTICR[4];
	uint32 Reserved[2];
	uint32 CMPCR;

}MSYSCFG_t;



#define EXTI        ((volatile MEXTI_t*)MEXTI_BASE_ADRESS)
#define SYSCFG      ((volatile MSYSCFG_t*)SYSCFG_BASE_ADRESS)





#endif /* MEXTI_PRIVATE_H_ */
