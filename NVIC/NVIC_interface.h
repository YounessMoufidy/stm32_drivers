#include <stdint.h>








void MNVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber                                                  );
void MNVIC_voidDisableInterrupt (u8 Copy_u8IntNumber                                                  );
void MNVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber                                                  );
void MNVIC_voidClearPendingFlag (u8 Copy_u8IntNumber                                                  );
u8	 MNVIC_u8GetActiveFlag      (u8 Copy_u8IntNumber                                                  );
void MNVIC_voidSetPriority      (s8 Copy_s8INTID     , u8 Copy_u8GroupPriority ,u8 Copy_u8SubPriority );
void MNVIC_voidInit             (void                                                                 );
