
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main ( void )
{
	
	float First2DArray [2][2] = {0} ;
	
	float Second2DArray[2][2] = {0} ;
	
	float sum = 0 ; 
	
	// Scan the arrays elements.
	printf( "\nEnter the elements of 1st matrix\n" ) ;
	for( int32_t row1 = 0; row1 < 2; row1++  )
	{
		
		for( int32_t column1 = 0; column1 < 2; column1++ )
		{
			printf( "\nEnter First Array%d%d: ", row1+1, column1+1 ) ;
			fflush( stdout ) ;		fflush( stdin ) ;
			scanf ( "%f", &First2DArray[row1][column1] ) ;
		}
		
	}

	printf( "\nEnter the elements of 2nd matrix\n" ) ;
 	for( int32_t row2 = 0; row2 < 2; row2++  )
	{
		
		for( int32_t column2 = 0; column2 < 2; column2++ )
		{
			printf( "\nEnter Second Array%d%d: ", row2+1, column2+1 ) ;
			fflush( stdout ) ;		fflush( stdin ) ;
			scanf ( "%f", &Second2DArray[row2][column2] ) ;
		}
		
	}

	
	// Sum of the elements.
	printf( "\nSum of the Matrix: ") ;
	printf( "\nEnter the elements of 2nd matrix\n" ) ;
 	for( int32_t row = 0; row < 2; row++  )
	{
		
		for( int32_t column = 0; column < 2; column++ )
		{
			sum = First2DArray[row][column] + Second2DArray[row][column] ;
			printf( "%2.2f\t", sum ) ;
			sum = 0 ;
		}
		
		printf( "\n" ) ;
	}

	return 0 ;
}