
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct
{
	
	char *name ;
	
	int ID ;
	
} employee ;



int main( void )
{

	system( "cls" ) ;

	employee emp = { "Alex" , 1002 } ;

	employee *array[] = {&emp} ;

	employee **ptr = array ;

	printf( "\nEmployee name: %s", (**ptr).name ) ;
	
	printf( "\nEmployee ID: %d", (**ptr).ID ) ;

	return 0 ;
}