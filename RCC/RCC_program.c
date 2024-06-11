#include "stdint.h"
#include "RCC_config.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "stm32f10x.h"


void RCC_voidEnablePeripheralClock  ( uint8_t Copy_u8BusId  , uint8_t Copy_u8PeripheralId ){
	
	switch(Copy_u8BusId){
		case APB1:
			RCC_APB1ENR|=(1<<Copy_u8PeripheralId);
			break;
		case APB2:
			RCC_APB2ENR|=(1<<Copy_u8PeripheralId);
			break;
		case AHB:
			RCC_AHBENR|=(1<<Copy_u8PeripheralId);
			break;
		
	
	}
}
void RCC_voidDisablePeripheralClock ( uint8_t Copy_u8BusId  , uint8_t Copy_u8PeripheralId ){
	switch(Copy_u8BusId){
		case APB1:
			RCC_APB1ENR&=~(1<<Copy_u8PeripheralId);
			break;
		case APB2:
			RCC_APB2ENR&=~(1<<Copy_u8PeripheralId);
			break;
		case AHB:
			RCC_AHBENR&=~(1<<Copy_u8PeripheralId);
			break;
		 }
}

