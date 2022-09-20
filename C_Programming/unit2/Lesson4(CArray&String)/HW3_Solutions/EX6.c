#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void)
{
	
	char L_s8String[100]  			; 
	
	char L_uint32searchedChar   = 0 ;
	
	uint32_t L_uint32Found  	= 0 ;

	printf( "\nEnter a string: " ) ;
	gets (L_s8String) ;
	
	printf( "\nEnter a character to find the frequency: " ) ;
	scanf ( "%c", &L_uint32searchedChar ) ;
	
	for( uint32_t Iterate = 0; L_s8String[Iterate] != '\0'; Iterate++ )
	{
		if( L_s8String[Iterate] == L_uint32searchedChar )
		{
			L_uint32Found ++ ;
		}
	}

	if( L_uint32Found > 0 )
	{
		printf( "\nFrequency of %c: %d\n ", L_uint32searchedChar, L_uint32Found ) ;
	}
	
	else
	{
		printf( "\nCharacter has not been found at the given string\n" ) ;
	}
	
}
