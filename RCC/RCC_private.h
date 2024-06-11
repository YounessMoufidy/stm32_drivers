#ifndef _RCC_PRIVATE_H_
#define _RCC_PRIVATE_H_


#define RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS  0x40021000 

#define RCC_CR_OFFSET 			0x00
#define RCC_CFGR_OFFSET 		0x04
#define RCC_CIR_OFFSET 			0x08
#define RCC_APB2RSTR_OFFSET 0x0C
#define RCC_APB1RSTR_OFFSET 0x10
#define RCC_AHBENR_OFFSET  	0x14
#define RCC_APB2ENR_OFFSET 	0x18
#define RCC_APB1ENR_OFFSET 	0x1C
#define RCC_BDCR_OFFSET 		0x20
#define RCC_CSR_OFFSET 			0x24
#define RCC_AHBRSTR_OFFSET 	0x28
#define RCC_CFGR2_OFFSET    0x2c

/*Clock control register (RCC_CR)*/
#define RCC_CR   *((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_CR_OFFSET))
/*Clock configuration register (RCC_CFGR)*/
#define RCC_CFGR   *((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_CFGR_OFFSET))
/*Clock interrupt register (RCC_CIR*/
#define RCC_CIR   *((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_CIR_OFFSET))
/*APB2 peripheral reset register (RCC_APB2RSTR)*/
#define RCC_APB2RSTR 	*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_APB2RSTR_OFFSET))
/*APB1 peripheral reset register (RCC_APB1RSTR)*/
#define RCC_APB1RSTR 	*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_APB1RSTR_OFFSET))
/*AHB peripheral clock enable register (RCC_AHBENR)*/
#define RCC_AHBENR 		*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_AHBENR_OFFSET))
/*APB2 peripheral clock enable register (RCC_APB2ENR)*/
#define RCC_APB2ENR 		*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_APB2ENR_OFFSET))
/*APB1 peripheral clock enable register (RCC_APB1ENR)*/
#define RCC_APB1ENR 		*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_APB1ENR_OFFSET))
/*Backup domain control register (RCC_BDCR)*/
#define RCC_BDCR 		*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_BDCR_OFFSET))
/*Control/status register (RCC_CSR)*/	
#define RCC_CSR 		*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_CSR_OFFSET))
/*AHB peripheral clock reset register (RCC_AHBRSTR)*/	
#define RCC_AHBRSTR 		*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_AHBRSTR_OFFSET))
/*Clock configuration register2 (RCC_CFGR2)*/
#define RCC_CFGR2 			*((volatile uint32_t *) (RESET_AND_CLOCK_CONTROL_RCC_BASE_ADDRESS +RCC_CFGR2_OFFSET))



#endif