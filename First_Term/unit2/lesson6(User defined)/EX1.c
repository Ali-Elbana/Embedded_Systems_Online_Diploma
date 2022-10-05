
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct 
{
	
	char 			name[100] 	;
	
	unsigned char 	rollNum 	;
	
	float 			marks 		;
	
} S_student;


int main ( void )
{

	S_student theStudent ;

	printf( "\nEnter information of students: \n\n" ) ;
	
	printf( "\nEnter the name: " ) ;
	gets( theStudent.name ) ;

	printf( "\nEnter the roll number: " ) ;
	scanf( "%d", &theStudent.rollNum ) ;

	printf( "\nEnter the marks: " ) ;
	scanf( "%f", &theStudent.marks ) ;


	printf( "\n\nDisplaying information: \n" ) ;
	printf( "\nThe name: %s", theStudent.name ) ;
	printf( "\nThe roll number: %d", theStudent.rollNum ) ;
	printf( "\nEnter the marks: %.2f", theStudent.marks ) ;
	
	return 0 ;
}