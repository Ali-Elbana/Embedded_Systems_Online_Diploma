#include <stdio.h>
#include <string.h>


int main ( void )
{

	unsigned int L_u32IntegerNum1 = 0 ;
	unsigned int L_u32IntegerNum2 = 0 ;

	printf( "Enter two integers: " ) ;	
	
	scanf( "%d", &L_u32IntegerNum1 ) ;
	
	scanf( "%d", &L_u32IntegerNum2 ) ;
	
	printf( "Sum: %d", L_u32IntegerNum1 + L_u32IntegerNum2 ) ;
	
}