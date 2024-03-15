/*
 * DAC_interface.h
 *
 *      Author: Yasmeen
 */

#ifndef DAC_INTERFACE_H_
#define DAC_INTERFACE_H_

volatile uint8 flagout;

#define PORTA  0
#define PORTB  1
#define PORTC  2


void DAC_voidInit(void);
void DAC_voidSetData(const uint8 *arr , uint32 arr_size);


#endif /* DAC_INTERFACE_H_ */
