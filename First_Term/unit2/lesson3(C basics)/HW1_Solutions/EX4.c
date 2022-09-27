#include <stdio.h>
#include <string.h>


int main ( void )
{

	float L_f32Num1 = 0 ;
	float L_f32Num2 = 0 ;

	printf( "Enter two numbers: " ) ;	
	
	scanf( "%f", &L_f32Num1 ) ;
	
	scanf( "%f", &L_f32Num2 ) ;
	
	printf( "Product: %f", L_f32Num1 * L_f32Num2 ) ;
	
}