
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct 
{
	
	float real 		;
	
	float imaginary ;
	
} S_CompNum ;


int main ( void )
{

	system("cls") ;

	S_CompNum comp1 	;
	S_CompNum comp2 	;
	
	printf( "\nEnter information for the 1st complex number: \n" ) ;
	
	printf( "\nEnter the real and imaginary respectively: " ) ;
	scanf( "%f %f", &comp1.real, &comp1.imaginary ) ;

	printf( "\nEnter information for the 2nd complex number: \n" ) ;
	
	printf( "\nEnter the real and imaginary respectively: " ) ;
	scanf( "%f %f", &comp2.real, &comp2.imaginary ) ;

	printf( "\n\nSum = %.3f + %.3fi \n", comp1.real + comp2.real, comp1.imaginary + comp2.imaginary ) ;
	
	return 0 ;
}