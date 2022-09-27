#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main ( void )
{
	
	float 	 L_f32Matrix[100][1000] 	= {0} ;
	uint32_t L_uint32MatrixRows 		=  0  ;
	uint32_t L_uint32MatrixColumns 		=  0  ;
	
	printf( "\nEnter the rows of the matrix: " ) ;
	scanf ( "%d", &L_uint32MatrixRows ) ;
	
	printf( "\nEnter the columns of the matrix: " ) ;
	scanf ( "%d", &L_uint32MatrixColumns ) ;
	
	// Scan the arrays elements.
	printf( "\nEnter the elements of the matrix: \n" ) ;
	for( int32_t row = 0; row < L_uint32MatrixRows; row++  )
	{
		
		for( int32_t column = 0; column < L_uint32MatrixColumns; column++ )
		{
			printf( "\nEnter First Array%d%d: ", row+1, column+1 ) ;
			scanf ( "%f", &L_f32Matrix[row][column] ) ;
		}
		
	}


	printf( "\nThe entered matrix\n" ) ;
 	for( int32_t row = 0; row < L_uint32MatrixRows; row++  )
	{
		
		for( int32_t column = 0; column < L_uint32MatrixColumns; column++ )
		{
			printf( "%2.2f\t", L_f32Matrix[row][column] ) ;
		}
		
		printf( "\n" ) ;
	}

	
	printf( "\nThe transposed matrix\n" ) ;
 	for( int32_t column = 0; column < L_uint32MatrixColumns; column++ )
	{
		
		for( int32_t row = 0; row < L_uint32MatrixRows; row++  )
		{
			printf( "%2.2f\t", L_f32Matrix[row][column] ) ;
		}
		
		printf( "\n" ) ;
	}
	
	return 0 ;
}