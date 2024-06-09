#include"stdint.h"

#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(Reg,Bit)		Reg|=(1<<Bit)
#define CLR_BIT(Reg,Bit)		Reg&=~(1<<Bit)
#define GET_BIT(Reg,Bit)	(Reg&(1<<Bit))>>Bit
#define TOG_BIT(Reg,Bit)	Reg^=(1<<Bit)


#endif

