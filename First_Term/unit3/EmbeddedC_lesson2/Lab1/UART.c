

#include "UART.h"

#define UART0_DR *( (volatile unsigned int *) ( (unsigned int*)0x101F1000 ) )


void MUART_vSendString( unsigned char* A_pu8TxString )
{
	
	while( *A_pu8TxString != '\0' )
	{
		
		UART0_DR = (unsigned int) *A_pu8TxString ;
		
		A_pu8TxString++ ;
		
	}
	
}


















