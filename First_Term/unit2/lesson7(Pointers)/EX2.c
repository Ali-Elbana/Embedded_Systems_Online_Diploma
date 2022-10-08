
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main( void )
{

	system( "cls" ) ;

	char *alpha = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" ;
	
	printf( "\nThe Alphabets are: \n" ) ;
	
	while( *alpha != '\0' )
	{
		printf( "%c", *alpha ) ;
		
		alpha++ ;
	}
	
	
	return 0 ;
}