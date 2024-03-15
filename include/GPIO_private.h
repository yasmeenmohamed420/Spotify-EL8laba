/*
 * GPIO_private.h
 *
 *      Author: Yasmeen
 */

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_


#define BASE_ADDRESS_GPIOA      0x40020000
#define BASE_ADDRESS_GPIOB		0x40020400
#define BASE_ADDRESS_GPIOC      0x40020800


typedef struct
{
	uint32 MODER;
	uint32 OTYPER;
	uint32 OSPEEDR;
	uint32 PUPDR;
	uint32 IDR;
	uint32 ODR;
	uint32 BSRR;
	uint32 LCKR;
	uint32 AFRL;
	uint32 AFRH;


}GPIO_t;


#define GPIOA   ((volatile GPIO_t*)(BASE_ADDRESS_GPIOA))
#define GPIOB 	((volatile GPIO_t*)(BASE_ADDRESS_GPIOB))
#define GPIOC	((volatile GPIO_t*)(BASE_ADDRESS_GPIOC))

#endif /* GPIO_PRIVATE_H_ */
