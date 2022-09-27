#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void)
{
	
	uint32_t L_uint32NumOfElements   	= 0 ; 
	
	uint32_t L_uint32InsertedElement  	= 0 ;

	uint32_t L_uint32Location  			= 0 ;

	
	printf( "\nEnter the number of elements: " ) ;
	scanf ( "%d", &L_uint32NumOfElements ) ;
	
	uint32_t Array[1000] = {0} ;
	
	for( uint32_t Iterate = 0; Iterate < L_uint32NumOfElements; Iterate++ )
	{
		printf( "\nEnter element%d: ", Iterate+1 ) ;
		
		scanf( "%d", &Array[Iterate] ) ;
	}

	printf( "\nEnter the element to be inserted: " ) ;
	scanf ( "%d", &L_uint32InsertedElement ) ;
	
	printf( "\nEnter the element to be inserted: " ) ;
	scanf ( "%d", &L_uint32Location ) ;
	
	for( uint32_t Iterate = L_uint32NumOfElements; Iterate >= L_uint32Location; Iterate-- )
	{
		Array[Iterate] = Array[Iterate-1] ;	
	}

	Array[L_uint32Location-1] = L_uint32InsertedElement ;

	for( uint32_t Iterate = 0; Iterate < L_uint32NumOfElements+1; Iterate++ )
	{
		printf( "%d ", Array[Iterate] ) ;
	}


}