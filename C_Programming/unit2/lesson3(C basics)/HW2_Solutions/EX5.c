#include <stdio.h>
#include <string.h>


int main ( void )
{

	unsigned char L_u8Char = 0 ;

	printf( "Enter a character: " ) ;	
	
	scanf( "%c", &L_u8Char ) ;
	
	if( L_u8Char >= 'a' && L_u8Char <= 'z' || L_u8Char >= 'A' && L_u8Char <= 'Z' )
	{
		
		printf( "%c is an alphabet", L_u8Char ) ;
		
	}
	
	else
	{
		
		printf( "%c is not an alphabet", L_u8Char ) ;
		
	}
	
	
	
	
}


