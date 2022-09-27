
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void PrintIntervalPrimes( int N1, int N2 ) ;

int main(void) 
{

    int N1, N2 ; 

	printf("Enter two intervals: ") ;
    scanf("%d %d",&N1,&N2) ;

	PrintIntervalPrimes( N1, N2 ) ;
	
	return 0 ;
}


void PrintIntervalPrimes( int N1, int N2 )
{
	
	for( int Num = N1 + 1; Num < N2; Num++ )
	{
		
		if( (Num == 2) || (Num == 3) )
		{
			printf("%d ", Num) ;
		}
       
		else if( (Num % 2 != 0) && (Num % 3 != 0) )
		{
			printf("%d ", Num) ;
		}
       
	}
   
}