
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct 
{
	
	char 			name[100] 	;
	
	unsigned char 	rollNum 	;
	
	float 			marks 		;
	
} S_students ;


int main ( void )
{

	system( "cls" ) ;

	S_students theStudent[10] ;

	printf( "\nEnter information of the students: \n\n" ) ;
	for( int i = 0; i < 10; i++ )
	{
	
		printf( "\nFor roll number %d \n", i+1 ) ;
	
		printf( "Enter the name: " ) ;
		scanf( "%s", &theStudent[i].name ) ;
	
		printf( "\nEnter the marks: " ) ;
		scanf( "%f", &theStudent[i].marks ) ;
      
	}
	
	printf( "\n\nDisplaying information of students: \n" ) ;
	for( int i = 0; i < 10; i++ )
	{
		
		printf( "\nInformation for roll number %d ", i+1 ) ;
		printf( "\nThe name: %s", theStudent[i].name ) ;
		printf( "\nEnter the marks: %.2f", theStudent[i].marks ) ;
		
	}
	
	return 0 ;
}