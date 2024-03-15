/*
 * GPIO_interface.h
 *
 *      Author: Yasmeen
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_


#define GPIO_LOW  0
#define GPIO_HIGH  1

#define  PortA    0
#define  PortB    1
#define  PortC    2


#define GPIO_PIN_0		0
#define GPIO_PIN_1		1
#define GPIO_PIN_2      2
#define GPIO_PIN_3      3
#define GPIO_PIN_4      4
#define GPIO_PIN_5      5
#define GPIO_PIN_6      6
#define GPIO_PIN_7      7
#define GPIO_PIN_8      8
#define GPIO_PIN_9      9
#define GPIO_PIN_10     10
#define GPIO_PIN_11     11
#define GPIO_PIN_12     12
#define GPIO_PIN_13     13
#define GPIO_PIN_14     14
#define GPIO_PIN_15     15


/****************MODE************************************/
#define INPUT_MODE           0
#define OUTPUT_MODE			 1
#define ALTERNATIVE_MODE     2
#define ANALOG_MODE			 3

/****************MODE*******************************/
#define Output_push_pull     0
#define Output_open_drain    1


/*****************SPEED****************************/
#define  LOW_SPEED            0
#define  MEDIUM_SPEED         1
#define  HIGH_SPEED           2
#define  VERY_HIGH_SPEED      3

/*******************PUD**********************/
#define   NPUD       0
#define   Pull_up    1
#define   Pull_down  2
#define   Reserved   3

/*******************************************************************************************************/
/*                                      Macros ALTF                                                    */
/*******************************************************************************************************/

#define _ALTFN_0           0b0000
#define _ALTFN_1           0b0001
#define _ALTFN_2           0b0010
#define _ALTFN_3           0b0011
#define _ALTFN_4           0b0100
#define _ALTFN_5           0b0101
#define _ALTFN_6           0b0110
#define _ALTFN_7           0b0111
#define _ALTFN_8           0b1000
#define _ALTFN_9           0b1001
#define _ALTFN_10          0b1010
#define _ALTFN_11          0b1011
#define _ALTFN_12          0b1100
#define _ALTFN_13          0b1101
#define _ALTFN_14          0b1110
#define _ALTFN_15          0b1111

void MGPIO_voidSet_Mode(uint32 PortNum, uint32 PinNum , uint32 Mode);
void MGPIO_voidSetPinMode(uint32 PortNum, uint32 PinNum , uint32 Mode , uint32 Speed);
void MGPIO_voidSetPinValue(uint32 PortNum, uint32 PinNum , uint32 Value);
void MGPI0_voidPUD(uint32 PortNum, uint32 PinNum , uint32 Mode);
uint32 MGPIO_GetPinValue(uint32 PortNum, uint32 PinNum );
void MGPIO_voidSetPinAltFn( uint8 Copy_u8PortNum ,uint8 Copy_u8PinNum, uint8 Copy_u8ALF );
#endif /* GPIO_PRIVATE_H_ */
