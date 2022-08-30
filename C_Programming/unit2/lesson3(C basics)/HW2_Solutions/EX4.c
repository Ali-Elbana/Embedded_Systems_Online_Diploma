#include <stdio.h>
#include <string.h>


int main ( void )
{

	float L_f32Num = 0 ;
	
	printf( "Enter a number: " ) ;	
	
	scanf( "%f", &L_f32Num ) ;
	
	if( L_f32Num > 0 )
	{
		
		printf( "%.2f is positive", L_f32Num ) ;
		
	}
	
	else if( L_f32Num == 0 )
	{
		
		printf( "You entered zero" ) ;
		
	}
	
	else
	{
		
		printf( "%.2f is negative", L_f32Num ) ;
	 
	}
	
	
	
	
}