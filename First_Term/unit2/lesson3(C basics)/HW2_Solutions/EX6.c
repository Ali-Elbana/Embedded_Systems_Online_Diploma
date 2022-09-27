#include <stdio.h>
#include <string.h>


int main ( void )
{

	int L_int32Num 		= 0 ;
	
	int L_int32Sum 		= 0 ;
	
	int L_u32Iterator 	= 0 ;

	printf( "Enter an integer: " ) ;	
	scanf( "%d", &L_int32Num ) ;
	
	for( L_u32Iterator = 1; L_u32Iterator <= L_int32Num; L_u32Iterator++ )
	{
		
		L_int32Sum = L_int32Sum + L_u32Iterator ;
		
	}
	
	
	printf( "Sum = %d\n", L_int32Sum ) ;
	

	
}













