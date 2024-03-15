/*
 * MSYSTICK_private.h
 *
 *      Author: Yasmeen
 */

#ifndef MSYSTICK_PRIVATE_H_
#define MSYSTICK_PRIVATE_H_

#define SYSTICK_BASE_ADDRESS 0xE000E010

#define COUNT_FLAG 16
#define CLKSOURCE 2
#define TICK_INT 1
#define ENABLE 0

#define AHB 0
#define AHB_DIVIDEBY8 1

typedef struct
{
	uint32 STK_CTRL;
	uint32 STK_LOAD;
	uint32 STK_VAL;
	uint32 STK_CALIB;


}SYSTICK_t;


#define SYSTICK ((volatile SYSTICK_t *) (SYSTICK_BASE_ADDRESS))

#endif /* MSYSTICK_PRIVATE_H_ */
