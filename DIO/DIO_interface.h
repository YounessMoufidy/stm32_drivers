#include	<stdint.h>

#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H

#define PA 0
#define PB 1
#define PC 2


/*Configurations*/
/*Input modes*/
/*
00: Analog mode
01: Floating input (reset state)
10: Input with pull-up / pull-down
11: Reserved
*/

#define ANALOG_MODE 0b00
#define FLOATING_INPUT 0b01
#define INPUT_WITH_PULL_UP 0b10



/*
In output mode (MODE[1:0] > 00):
00: General purpose output push-pull
01: General purpose output Open-drain
10: Alternate function output Push-pull
11: Alternate function output Open-drain
*/

#define  DIO_OUTPUT_PUSH_PULL 0b00
#define  DIO_OUTPUT_OPEN_DRAIN 0b01
#define  AFIO_OUTPUT_PUSH_PULL 0b10
#define  AFIO_OPEN_DRAIN 0b11

/********************************************************************************************************************/
/************************************************************************************************************/
/*Configurations*/

/*
00: Input mode (reset state)
01: Output mode, max speed 10 MHz.
10: Output mode, max speed 2 MHz.
11: Output mode, max speed 50 MH

*/


#define  INPUT_MODE 0b00
#define 	OUTPUT_MODE_MAX_SPEED_10MHZ 0b01
#define 	OUTPUT_MODE_MAX_SPEED_2MHZ 0b10
#define 	OUTPUT_MODE_MAX_SPEED_50MHZ 0b11





/*    M for MCAL   */
void MDIO_voidSetPinDirection  ( uint8_t Copy_u8Port , uint8_t Copy_u8Pin      , uint8_t u8Copy_u8Mode    );
void MDIO_voidSetPinValue      ( uint8_t Copy_u8Port , uint8_t Copy_u8Pin      , uint8_t u8Copy_u8Value   );
uint8_t   MDIO_u8GetPinValue        ( uint8_t Copy_u8Port , uint8_t Copy_u8Pin                            );


void MDIO_voidSetPortDirection  ( uint8_t Copy_u8Port , uint8_t Copy_u8Pin      , uint8_t u8Copy_u8Mode    );
void MDIO_voidSetPortValue     ( uint8_t Copy_u8Port , uint8_t Copy_u8Position , uint16_t Copy_u16Value    );
uint16_t MDIO_u16GetPortValue      ( uint8_t Copy_u8Port , uint8_t Copy_u8Position            );








#endif