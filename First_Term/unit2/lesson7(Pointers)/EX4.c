
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main( void )
{

	system( "cls" ) ;

	int array[5] ;

	int *rev = array ;

	int i 	= 0 ;
	
	int n 	= 0 ;
	
	printf( "\nInput hte number of elements to store in the array: " ) ;
	scanf( "%d", &n ) ;
	
	printf( "\nInput %d numbers: ", n ) ;
	
	for( i = 0; i < n; i++ )
	{
		printf( "\nElement-%d: ", i+1 ) ;
		scanf( "%d", &array[i] ) ;
	}
	
	rev = &array[n-1] ;
	
	printf( "\nThe reverse order of the array elements: " ) ;
	for( i = n - 1; i >= 0; i-- )
	{
		printf( "\nElement-%d: ", i+1 ) ;
		printf( "%d", *rev ) ;
		rev-- ;
	}
	
	return 0 ;
}