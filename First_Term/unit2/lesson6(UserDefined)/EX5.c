
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define CircleArea( radious )  ( 3.14 * (radious * radious) )

int main ( void )
{

	system( "cls" ) ;

	short radious  = 0 ;

	printf( "Enter the radious: " ) ;
	scanf( "%d", &radious ) ;

	printf( "\nArea = %.2f", (float)CircleArea( radious ) ) ;
	
	return 0 ;
}