#include <stdio.h>
#include <string.h>


int main ( void )
{

	float L_f32Num1 	= 0 ;
	float L_f32Num2 	= 0 ;
	float L_f32Num3 	= 0 ;
	float L_f32MaxNum 	= 0 ;

	printf( "Enter three numbers: " ) ;	
	
	scanf( "%f", &L_f32Num1 ) ;
	scanf( "%f", &L_f32Num2 ) ;
	scanf( "%f", &L_f32Num3 ) ;
	
	if( L_f32Num1 > L_f32Num2 )
	{
		
		L_f32MaxNum =  L_f32Num1 ;
		
		if( L_f32MaxNum < L_f32Num3 )
		{
			L_f32MaxNum = L_f32Num3 ;
		}
		
		else
		{
			
			L_f32MaxNum = L_f32Num1 ;
			
		}
		
		
	}
	
	if( L_f32Num2 > L_f32Num1 )
	{
		
		L_f32MaxNum =  L_f32Num2 ;
		
		if( L_f32MaxNum < L_f32Num3 )
		{
			L_f32MaxNum = L_f32Num3 ;
		}
		
		else
		{
			
			L_f32MaxNum = L_f32Num2 ;
			
		}
		
		
	}

	printf( "Largest number: %.2f", L_f32MaxNum ) ;
	
}