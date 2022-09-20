#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void)
{
	
	uint32_t L_uint32NumOfElements  = 0  ; 
	
	float L_uint32searchedElement  	= 0  ;
	
	uint32_t L_uint32Found  		= -1 ;

	printf( "\nEnter the number of elements: " ) ;
	scanf ( "%d", &L_uint32NumOfElements ) ;
	
	float Array[1000] = {0} ;
	
	for( uint32_t Iterate = 0; Iterate < L_uint32NumOfElements; Iterate++ )
	{
		printf( "\nEnter element%d: ", Iterate+1 ) ;
		
		scanf( "%f", &Array[Iterate] ) ;
	}

	printf( "\nEnter the element to be searched: " ) ;
	scanf ( "%f", &L_uint32searchedElement ) ;
	
	for( uint32_t Iterate = 0; Iterate < L_uint32NumOfElements; Iterate++ )
	{
		if( Array[Iterate] == L_uint32searchedElement )
		{
			L_uint32Found = Iterate + 1 ;
			
			break ;
		}
	}

	if( L_uint32Found > 0 )
	{
		printf( "\nNumber has been found at the location: %d\n ", L_uint32Found ) ;
	}
	
	else
	{
		printf( "\nNumber has not been found at the given array\n" ) ;
	}
	
}
