
#include <stdio.h>



int main ( void )
{
	
	
	
	int L_int32MyInteger = 0 ; 
	
	
	printf_s("Enter an integer you want to check: ");
	
	scanf_s( "%d", &L_int32MyInteger );
	
	if( L_int32MyInteger % 2 == 0 )
	{
		
		printf_s( "%d is even", L_int32MyInteger );
		
	}
	
	else
	{
		
		printf_s( "%d is odd", L_int32MyInteger );
		
	}
 
 
	
	
}