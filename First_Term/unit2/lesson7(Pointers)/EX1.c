
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main( void )
{

	system( "cls" ) ;

	int m 	= 29 ;
	int *ab = &m ;
	
	printf( "\nAddress of m: %p", &m ) ;
	printf( "\nValue of m: %d"	, m ) ;
	
	printf( "\n\nNow ab is assigned with the address of m." ) ;
	printf( "\nAddress of ab: %p", ab  ) ;
	printf( "\nValue of ab: %d"	 , *ab ) ;
	
	m = 34 ;
	
	printf( "\n\nNow m is assigned with 34." ) ;
	printf( "\nAddress of ab: %p", ab  ) ;
	printf( "\nValue of ab: %d"	 , *ab ) ;
	
	*ab = 7 ;
	
	printf( "\n\nNow ab is assigned with 7." ) ;
	printf( "\nAddress of m: %p", &m ) ;
	printf( "\nValue of m: %d\n"	, m ) ;
	
	return 0 ;
}