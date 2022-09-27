
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int Factorial( int N ) ;

int main(void) 
{

    int N ;
	
	long int factorial_result ; 

	printf("\nEnter a positive integer: ") ;
    scanf("%d",&N) ;

	factorial_result = Factorial( N ) ;
	
	printf("\nFactorial of %d = %ld ", N, factorial_result ) ;
	
	return 0 ;
}


int Factorial( int N )
{
	
	if( N <= 1 )
	{
		return 1 ;
	}
   
	else 
	{
		return N * Factorial( N - 1 ) ;
	}  
	
}