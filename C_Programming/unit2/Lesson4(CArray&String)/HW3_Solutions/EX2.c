#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main ( void )
{
	
	uint32_t L_uint32NumOfElements = 0 ; 
	
	float L_uint32Sum = 0 ; 
	
	printf( "\nEnter the number of data: " ) ;
	scanf ( "%d", &L_uint32NumOfElements ) ;
	
	float Array[1000] = {0} ;
	
	for( uint32_t Iterate = 0; Iterate < L_uint32NumOfElements; Iterate++ )
	{
		printf( "Enter number%d: ", Iterate+1 ) ;
		
		scanf( "%f", &Array[Iterate] ) ;
		
		L_uint32Sum += (float)Array[Iterate] ;
	}
	
	printf( "Average = %.2f\n", (float)L_uint32Sum / (float)L_uint32NumOfElements ) ;
	
}