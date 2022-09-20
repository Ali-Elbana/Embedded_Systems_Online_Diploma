#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	
	char 	 L_s8String[7] 	; 
	
	uint32_t L_uint32FirstIndex = 0 ;
	
	char 	 L_c8Temp 			= 0 ;
	
	printf( "\nEnter a string: " ) 	;
	
	gets (L_s8String) ;
	
	uint32_t L_uint32LastIndex  = sizeof(L_s8String)/sizeof(char) ;
	
	for( L_uint32FirstIndex = 0; L_uint32FirstIndex < L_uint32LastIndex / 2; L_uint32FirstIndex++ )
	{
		L_c8Temp 						= L_s8String[L_uint32FirstIndex] 	;
		
		L_s8String[L_uint32FirstIndex] 	= L_s8String[L_uint32LastIndex - L_uint32FirstIndex - 1] 	;
		
		L_s8String[L_uint32LastIndex - L_uint32FirstIndex - 1] = L_c8Temp 							;
	}
	
	printf( "\nReverse string: %s\n ", L_s8String ) ;

}
