
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int Power( int num, int pownum ) ;

int main(void) 
{

    int num, pownum ;
	
	long int result ; 

	printf("\nEnter base number: ") ;
    scanf("%d",&num) ;
	
	printf("\nEnter power number(positive integer): ") ;
    scanf("%d",&pownum) ;

	result = Power( num, pownum ) ;
	
	printf("\n%d^%d = %ld ", num, pownum, result ) ;
	
	return 0 ;
}


int Power( int num, int pownum )
{
	
	if( pownum == 0 )
	{
		return 1 ;
	}
   
	else 
	{
		return num * Power( num, pownum - 1 ) ;
	}  
	
}