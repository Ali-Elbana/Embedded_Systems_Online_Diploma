#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void)
{
	
	char L_s8String[100]  			; 
	
	uint32_t L_uint32Counter  	= 0 ;

	printf( "\nEnter a string: " ) ;
	gets (L_s8String) ;
	
	for( uint32_t Iterate = 0; L_s8String[Iterate] != '\0'; Iterate++ )
	{
		L_uint32Counter ++ ;
	}

	if( L_uint32Counter > 0 )
	{
		printf( "\nLength of string: %d\n ", L_uint32Counter ) ;
	}
	
	else
	{
		printf( "\nString has not been entered yet\n" ) ;
	}
	
}
