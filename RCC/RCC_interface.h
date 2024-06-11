
#ifndef _RCC_INTERFACE_H_
#define _RCC_INTERFACE_H_
#include	<stdint.h>
#include	"RCC_private.h"

/*RCC APB2ENR*/
#define TIMER2  0
#define TIMER3  1
#define TIMER4 2
#define TIMER5  3
#define TIMER6 4
#define TIMER7 5
/*Window watch dog timer*/
#define WWDG 11
#define SPI2 14
#define SPI3 15
#define USART2 17
#define USART3 18
#define USART4 19
#define USART5 20
#define I2C1 21
#define I2C2 22
#define CAN1 25
#define CAN2 26
#define BKP 27
#define PWR 28
#define DAC 29
/***********************************************/
/***********************************************/
/***********************************************/
/***********************************************/

/*RCC APB2ENR*/
#define AFIO_RST  0
#define GPIOA  2
#define GPIOB 3
#define DIOC  4
#define GPIOD 5
#define GPIOE 6
#define ADC1 9
#define ADC2 10
#define TIMER1 11
#define SPI1 12
#define USART1 14
/***********************************************/
/***********************************************/
/***********************************************/
/***********************************************/
/*BUSID*/
#define APB1 0
#define APB2 1
#define AHB 2

void RCC_voidInitSysClock( void );

void RCC_voidEnablePeripheralClock  ( uint8_t Copy_u8BusId  , uint8_t Copy_u8PeripheralId );
void RCC_voidDisablePeripheralClock ( uint8_t Copy_u8BusId  , uint8_t Copy_u8PeripheralId );



#endif