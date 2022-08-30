#include <stdio.h>
#include <string.h>


int main ( void )
{

	float L_f32Num1 = 0 ;
	float L_f32Num2 = 0 ;
	float l_f32Temp = 0 ;

	printf( "Enter value of a: " ) ;	
	scanf( "%f", &L_f32Num1 ) ;
	
	printf( "Enter value of b: " ) ;	
	scanf( "%f", &L_f32Num2 ) ;
	
	l_f32Temp =  L_f32Num1 ;
	
	L_f32Num1 =  L_f32Num2 ;
	
	L_f32Num2 =  l_f32Temp ;
	
	printf( "After swapping, value of a = %.2f\n", L_f32Num1 ) ;
	
	printf( "After swapping, value of b = %.1f", L_f32Num2 ) ;
	
	
	
}













