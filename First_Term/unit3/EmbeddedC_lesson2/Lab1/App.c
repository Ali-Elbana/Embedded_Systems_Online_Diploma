

#include "UART.h"


char G_s8Buffer[100] = "Learn-in-depth<Ali El-bana>" ;

int main(void)
{
	
	MUART_vSendString( G_s8Buffer ) ;	 
	
}


