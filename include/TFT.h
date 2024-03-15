/*
 * TFT.h
 *
 *      Author: Yasmeen
 */

#ifndef TFT_H_
#define TFT_H_

#define  PortA    0
#define  PortB    1
#define  PortC    2

#define TFT_LOW  0
#define TFT_HIGH  1

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


void TFT_Init(void);
void TFT_Display(const uint16 *ptr);


#endif /* TFT_H_ */
