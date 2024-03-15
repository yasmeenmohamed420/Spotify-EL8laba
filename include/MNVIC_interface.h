/*
 * NVIC.h
 *
 *      Author: Yasmeen
 */

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_


#define Reg_div 32

typedef enum
{
 Group16Sub0=3,
 Group8Sub2,
 Group4Sub4,
 Group2Sub8,
 Group0Sub16

}MNVIC_Group_t;

#define INTPos_EXTI0    6
#define INTPos_EXTI1    7
#define INTPos_EXTI2    8
#define INTPos_EXTI3    9
#define INTPos_EXTI4    10


void MNVIC_VoidEnableInterrupt(uint8 Copy_uint8IntPos) ;
void MNVIC_VoidDisableInterrupt(uint8 Copy_uint8IntPos) ;
void MNVIC_VoidEnableInterruptPending(uint8 Copy_uint8IntPos) ;
void MNVIC_VoidDisableInterruptPending(uint8 Copy_uint8IntPos) ;
void MNVIC_uint8IsInterruptActive(uint8 Copy_uint8IntPos,uint8 *Copy_Read) ;
void MNVIC_VoidSetInterruptGroupMode(MNVIC_Group_t Copy_uddtGroupMode) ;  //how many groups and sub groups in our micro
void MNVIC_VoidSetInterruptPriority(uint8 Copy_uint8IntPos,uint8 Copy_uint8GroupNum,uint8 Copy_uint8SubGroupNum) ;




#endif /* NVIC_INTERFACE_H_ */
