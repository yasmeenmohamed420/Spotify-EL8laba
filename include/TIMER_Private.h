/*
 * TIMER_Private.h
 *
 *      Author: Yasmeen
 */

#ifndef    BASICTIMERS_PRIVATE_H
#define    BASICTIMERS_PRIVATE_H
/****************TIM2*******************/

static volatile  uint32 Global2_u32Routine=0;
static volatile  uint32 Global2_u32Fraction;
static volatile  uint32 Global2_u32CopyRoutine;
static volatile  uint8  Global2_u8Flag=1;
/* Define Callback Global Variable */
static volatile void (*TIM2_CallBack)(void);
/* Define Variable for interval mode */
static volatile uint8 TIM2_u8ModeOfInterval;

/****************TIM3*******************/

static volatile  uint32 Global3_u32Routine=0;
static volatile  uint32 Global3_u32Fraction;
static volatile  uint32 Global3_u32CopyRoutine;
static volatile  uint8  Global3_u8Flag=1;
static volatile  void (*TIM3_CallBack)(void);
static volatile  uint8     TIM3_u8ModeOfInterval;

/****************TIM4*******************/

static volatile  uint32 Global4_u32Routine=0;
static volatile  uint32 Global4_u32Fraction;
static volatile  uint32 Global4_u32CopyRoutine;
static volatile  uint8  Global4_u8Flag=1;
static volatile  void (*TIM4_CallBack)(void);
static volatile  uint8     TIM4_u8ModeOfInterval;


/****************TIM5*******************/

static volatile  uint32 Global5_u32Routine=0;
static volatile  uint32 Global5_u32Fraction;
static volatile  uint32 Global5_u32CopyRoutine;
static volatile  uint8  Global5_u8Flag=1;
static volatile  void (*TIM5_CallBack)(void);
static volatile  uint8     TIM5_u8ModeOfInterval;




/*Interval Mode*/
#define    SINGLE_INTERVAL     0
#define    PERIODIC_INTERVAL   1

typedef struct
{
	volatile uint32 CR1;           /*00*/
	volatile uint32 CR2;           /*04*/
	volatile uint32 SMCR;          /*08*/
	volatile uint32 DIER;          /*0C*/
	volatile uint32 SR;            /*10*/
	volatile uint32 EGR;           /*14*/
	volatile uint32 CCMR1;         /*18*/
	volatile uint32 CCMR2;         /*1C*/
	volatile uint32 CCER;          /*20*/
	volatile uint32 CNT;           /*24*/
	volatile uint32 PSC;           /*28*/
	volatile uint32 ARR;           /*2C*/
	volatile uint32 Reserved1;     /*30*/
	volatile uint32 CCR1;          /*34*/
	volatile uint32 CCR2;          /*38*/
	volatile uint32 CCR3;          /*3C*/
	volatile uint32 CCR4;          /*40*/
	volatile uint32 Reserved2;     /*44*/
	volatile uint32 DCR;           /*48*/
	volatile uint32 DMAR;          /*4C*/
}TIM_t;
#define  TIM2    ((volatile TIM_t*)0x40000000)
#define  TIM3    ((volatile TIM_t*)0x40000400)
#define  TIM4    ((volatile TIM_t*)0x40000800)
#define  TIM5    ((volatile TIM_t*)0x40000C00)
#endif
