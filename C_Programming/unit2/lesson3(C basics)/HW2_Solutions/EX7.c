#include <stdio.h>
#include <string.h>


int main ( void )
{

	int 		L_int32Num 			= 0 ;
	
	long int 	L_int32Factorial 	= 1 ;
	
	int 		L_u32Iterator 		= 0 ;

	printf( "Enter an integer: " ) ;	
	scanf_s( "%ld", &L_int32Num ) ;
	
	
	if( L_int32Num == 0 )
	{
		
		L_int32Factorial = 1 ;
		
		printf( "Factorial = %d\n", L_int32Factorial ) ;
		
	}
	
	else if( L_int32Num < 0 )
	{
		
		printf( "Error!!! Factorial of negative number does not exist" ) ;
		
	}
	
	
	else
	{	
		for( L_u32Iterator = 1; L_u32Iterator <= L_int32Num; L_u32Iterator++ )
		{
			
			L_int32Factorial = L_int32Factorial * L_u32Iterator ;
			
		}
		
		printf( "Factorial = %d\n", L_int32Factorial ) ;
		
	}
	
	
	

	
}

