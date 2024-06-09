



#ifndef _DIO_PRIVATE_H_
#define  _DIO_PRIVATE_H_
#include	<stdint.h>
/*Register definition*/

//registers Base Address
#define BASE_ADRESS_PORTA			0x40010800
#define BASE_ADRESS_PORTB			0x40010C00
#define BASE_ADRESS_PORTC			0x40011000

//registers_offset
#define CRL_Offset  0x00000000
#define CRH_Offset  0x00000004
#define IDR_Offset  0x00000008
#define ODR_Offset  0x0000000C
#define BSRR_Offset 0x00000010
#define BRR_Offset 	0x00000014
#define LCKR_Offset 0x00000018

/***********************************************************************/
/*Port A registers*/
#define GPIOA_CRL   *((volatile uint32_t*) (BASE_ADRESS_PORTA+CRL_Offset))
#define GPIOA_CRH   *((volatile uint32_t*) (BASE_ADRESS_PORTA+CRH_Offset))
#define GPIOA_IDR   *((volatile uint32_t*) (BASE_ADRESS_PORTA+IDR_Offset))	
#define GPIOA_ODR   *((volatile uint32_t*) (BASE_ADRESS_PORTA+ODR_Offset))	
#define GPIOA_BSRR   *((volatile uint32_t*) (BASE_ADRESS_PORTA+BSRR_Offset))	
#define GPIOA_BRR   *((volatile uint32_t*) (BASE_ADRESS_PORTA+BRR_Offset))
#define GPIOA_LCKR   *((volatile uint32_t*) (BASE_ADRESS_PORTA+LCKR_Offset))	
/***********************************************************************/
/*Port B registers*/
#define GPIOB_CRL   * ((volatile uint32_t*) (BASE_ADRESS_PORTB+CRL_Offset))
#define GPIOB_CRH   * ((volatile uint32_t*) (BASE_ADRESS_PORTB+CRH_Offset))
#define GPIOB_IDR   * ((volatile uint32_t*) (BASE_ADRESS_PORTB+IDR_Offset	))
#define GPIOB_ODR   * ((volatile uint32_t*) (BASE_ADRESS_PORTB+ODR_Offset))	
#define GPIOB_BSRR   *((volatile uint32_t*) (BASE_ADRESS_PORTB+BSRR_Offset))	
#define GPIOB_BRR   * ((volatile uint32_t*) (BASE_ADRESS_PORTB+BRR_Offset)	
#define GPIOB_LCKR   *((volatile uint32_t*) (BASE_ADRESS_PORTB+LCKR_Offset)	


/***********************************************************************/
/*Port C registers*/
#define GPIOC_CRL   	*	((volatile uint32_t*) (BASE_ADRESS_PORTC+CRL_Offset))
#define GPIOC_CRH   	*	((volatile uint32_t*) (BASE_ADRESS_PORTC+CRH_Offset))
#define GPIOC_IDR   	*	((volatile uint32_t*) (BASE_ADRESS_PORTC+IDR_Offset))	
#define GPIOC_ODR   	*	((volatile uint32_t*) (BASE_ADRESS_PORTC+ODR_Offset))	
#define GPIOC_BSRR   	*	((volatile uint32_t*) (BASE_ADRESS_PORTC+BSRR_Offset))	
#define GPIOC_BRR   	*	((volatile uint32_t*) (BASE_ADRESS_PORTC+BRR_Offset))
#define GPIOC_LCKR   *((volatile uint32_t*) (BASE_ADRESS_PORTC+LCKR_Offset	))

























#endif