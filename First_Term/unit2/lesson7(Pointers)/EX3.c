
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main( void )
{

	system( "cls" ) ;

	char str[11] ;

	char *rev = str ;
	
	int len = 0 ;
	
	int i 	= 1 ;
	
	printf( "\nInput a string: " ) ;
	scanf( "%s", str ) ;
	
	len = strlen( str ) ;
	
	printf( "\nReverse of the string is: " ) ;
	
	rev = rev + len - 1 ; // point to the last character in the string.
	
	// Loop until it reaches the first address in the original str.
	while( rev != str - 1 )
	{
		printf( "%c", *rev ) ;
		
		rev-- ;
	}
	
	return 0 ;
}