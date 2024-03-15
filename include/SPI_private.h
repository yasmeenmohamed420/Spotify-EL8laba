/*
 * SPI_private.h
 *
 *      Author: Yasmeen
 */

#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

#define SPI1_BASE_ADDRESS		0x40013000

#define  SPE  6
#define  BSY  7
#define  DFF  11
#define  CPOL 1
#define  CPHA 0
#define  MSTR 2
#define  LSBFIRST  7
#define  SSM  9
#define  SSI  8
#define  BR   3
#define SR_TXE  1
#define SR_RXNE 0

typedef struct
{
	uint32 CR1;
	uint32 CR2;
	uint32 SR;
	uint32 DR;
	uint32 CRCPR;
	uint32 RXCRCR;
	uint32 TXCRCR;
	uint32 I2SCFGR;
	uint32 I2SPR ;

}SPI_t;


#define SPI1	((volatile SPI_t*)SPI1_BASE_ADDRESS)

#endif /* SPI_PRIVATE_H_ */
