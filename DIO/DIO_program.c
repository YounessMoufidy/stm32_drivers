#include	<stdint.h>
#include	"DIO_interface.h"
#include	"DIO_private.h"
#include	"BIT_MATH.h"
#include "stm32f10x.h"

#ifndef _DIO_PROGRAM_H_
#define  _DIO_PROGRAM_H_

/*Mode is mode+config view the Data sheet*/

//configuring the pins
void MDIO_voidSetPinDirection  ( uint8_t Copy_u8Port , uint8_t Copy_u8Pin, uint8_t u8Copy_u8Mode){
	switch(Copy_u8Port )
	{
		case PA:
			if((Copy_u8Pin<=7)&&((Copy_u8Pin>=0))){
				GPIOA_CRL&=~(0b1111U<<(Copy_u8Pin*4));
				GPIOA_CRL|=(u8Copy_u8Mode<<(Copy_u8Pin*4));
			}
			else if((Copy_u8Pin>7)&&(Copy_u8Pin<=15)){
				GPIOA_CRH&=~(0b1111U<<(Copy_u8Pin*4));
				GPIOA_CRH|=(u8Copy_u8Mode<<((Copy_u8Pin-8)*4));
			}
			break;
		
		case PB:
			if((Copy_u8Pin<=7)&&((Copy_u8Pin>=0))){
				GPIOB_CRL&=~(0b1111U<<(Copy_u8Pin*4));
				GPIOB_CRL|=(u8Copy_u8Mode<<(Copy_u8Pin*4));
			}
			else if((Copy_u8Pin>7)&&((Copy_u8Pin<=15))){
				GPIOB_CRH&=~(0b111U<<(Copy_u8Pin*4));
				GPIOB_CRH|=(u8Copy_u8Mode<<((Copy_u8Pin-8)*4));
			}
			break;
		case PC:
			if((Copy_u8Pin<=7)&&(Copy_u8Pin>=0)){
				GPIOC_CRL&=~(0b1111U<<(Copy_u8Pin*4));
				GPIOC_CRL|=(u8Copy_u8Mode<<(Copy_u8Pin*4));
			}
			else if((Copy_u8Pin>7)&&(Copy_u8Pin<=15)){
				GPIOC_CRH&=~(0b1111U<<((Copy_u8Pin-8)*4));
				GPIOC_CRH|=(u8Copy_u8Mode<<((Copy_u8Pin-8)*4));
			}
			break;	
		
		default:
			break;
		
	}
}
void MDIO_voidSetPinValue      ( uint8_t Copy_u8Port , uint8_t Copy_u8Pin      , uint8_t u8Copy_u8Value   ){

	switch(Copy_u8Port){
		case PA:
			GPIOA_ODR|=((u8Copy_u8Value)<<(Copy_u8Pin));
			break;
		
		case PB:
			GPIOB_ODR|=(u8Copy_u8Value<<Copy_u8Pin);
			break;
			
		case PC:
			GPIOC_ODR|=(u8Copy_u8Value<<Copy_u8Pin);
			break;
	}
}


uint8_t   MDIO_u8GetPinValue( uint8_t Copy_u8Port , uint8_t Copy_u8Pin ){
	uint8_t Loc_value=0;
	switch(Copy_u8Port){
		case PA:
			Loc_value=(uint8_t)GET_BIT(GPIOA_IDR,Copy_u8Pin);
			break;
		case PB:
			Loc_value=(uint8_t)GET_BIT(GPIOB_IDR,Copy_u8Pin);
			break;
		case PC:
			Loc_value=(uint8_t)GET_BIT(GPIOC_IDR,Copy_u8Pin);
			break;
	}
	return Loc_value;

}


//void MDIO_voidSetPortDirection(uint8_t Copy_u8Port ,uint8_t Copy_u8Pin, uint8_t u8Copy_u8Mode):

void MDIO_voidSetPortValue(uint8_t Copy_u8Port ,uint8_t Copy_u8Position ,uint16_t Copy_u16Value){
		switch(Copy_u8Port){
			case PA:
				if(Copy_u8Position)
					GPIOA_ODR=(GPIOA_ODR&0x00FF)|Copy_u16Value;
				else if(!Copy_u8Position)
					GPIOA_ODR=(GPIOA_ODR&0xFF00)|Copy_u16Value;
				break;
			case PB:
				if(Copy_u8Position)
					GPIOB_ODR=(GPIOA_ODR&0x00FF)|Copy_u16Value;
				else if(!Copy_u8Position)
					GPIOB_ODR=(GPIOB_ODR&0xFF00)|Copy_u16Value;
				break;
			case PC:
				if(Copy_u8Position)
					GPIOC_ODR=(GPIOA_ODR&0x00FF)|Copy_u16Value;
				else if(!Copy_u8Position)
					GPIOC_ODR=(GPIOA_ODR&0xFF00)|Copy_u16Value;
				break;
			}
		}
int main(void){
	RCC->APB2ENR|=(1<<4);
	MDIO_voidSetPinDirection  (PC, 13, 0b0010);
	while(1){
		MDIO_voidSetPinValue      ( PC , 13      , 1   );
		//for(int i=0;i<400000;i++);
		//MDIO_voidSetPinValue      ( PC , 13      , 0   );
		//for(int i=0;i<400000;i++);
	}
		

}





#endif