
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct 
{
	
	float feet ;
	
	float inch ;
	
} S_distance ;


int main ( void )
{

	system("cls") ;

	S_distance the1stDistance 	;
	S_distance the2ndDistance 	;
	S_distance result			;
	
	printf( "\nEnter information for the 1st distance: \n\n" ) ;
	
	printf( "\nEnter the feet: " ) ;
	scanf( "%f", &the1stDistance.feet ) ;

	printf( "\nEnter the inch: " ) ;
	scanf( "%f", &the1stDistance.inch ) ;


	printf( "\nEnter information for the 2nd distance: \n\n" ) ;
	
	printf( "\nEnter the feet: " ) ;
	scanf( "%f", &the2ndDistance.feet ) ;

	printf( "\nEnter the inch: " ) ;
	scanf( "%f", &the2ndDistance.inch ) ;
	
	// adding distances
   result.feet = the1stDistance.feet + the2ndDistance.feet;
   result.inch = the1stDistance.inch + the2ndDistance.inch;

   // convert inches to feet if greater than 12
   while ( result.inch >= 12.0 ) 
   {
      result.inch = result.inch - 12.0 ;
	  
      result.feet++ ;
   }
	
	printf( "\n\nSum of distances = %.0f' - %.3f\" \n", result.feet, result.inch ) ;
	
	return 0 ;
}