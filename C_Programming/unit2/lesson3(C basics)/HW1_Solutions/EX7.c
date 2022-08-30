
#include <stdio.h>

int main ( void )
{

	unsigned int L_u32Num1 = 0 ;
	unsigned int L_u32Num2 = 0 ;

	printf( "Enter value of a: " ) ;	
	scanf( "%d", &L_u32Num1 ) ;
	
	printf( "Enter value of b: " ) ;	
	scanf( "%d", &L_u32Num2 ) ;
	
	L_u32Num1 =  L_u32Num1 ^ L_u32Num2 ;
	
	L_u32Num2 =  L_u32Num1 ^ L_u32Num2 ;
	
	L_u32Num1 =  L_u32Num1 ^ L_u32Num2 ;
	
	printf( "After swapping, value of a = %d\n", L_u32Num1 ) ;
	
	printf( "After swapping, value of b = %d", L_u32Num2 ) ;
	
	
	
}

