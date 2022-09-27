
# include <stdio.h>
 

void reverse(char *str) ;


int main( void )
{
   char a[16] ;
   
   printf( "\nEnter a sentence: " ) ;
   gets(a) ;
   
   reverse(a);
   
   return 0;
}


void reverse(char *str)
{
   if( *str )
   {
       reverse( str+1 ) ;
	   
       printf( "%c", *str ) ;
   }
}
