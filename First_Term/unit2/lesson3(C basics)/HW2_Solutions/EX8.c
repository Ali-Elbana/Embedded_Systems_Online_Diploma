
#include <stdio.h>
#include <string.h>


int main ( void )
{

	unsigned char 	L_u8Operator	= '0' ;
	
	float 			L_f32Operand1	= 0 ;
	
	float 			L_f32Operand2	= 0 ;

	float 			L_f32Result		= 0 ;

	printf( "Enter operator either + or - or * or / : " ) ;	
	scanf_s( "%c", &L_u8Operator ) ;
	
	printf( "Enter two operands : " ) ;	
	scanf_s( "%f", &L_f32Operand1 ) ;
	scanf_s( "%f", &L_f32Operand2 ) ;



	switch( L_u8Operator )
	{
		
		case '+' : L_f32Result = L_f32Operand1 + L_f32Operand2 ; break;
		
		case '-' : L_f32Result = L_f32Operand1 - L_f32Operand2 ; break;
		
		case '*' : L_f32Result = L_f32Operand1 * L_f32Operand2 ; break;
		
		case '/' : L_f32Result = L_f32Operand1 / L_f32Operand2 ; break;
		
		default : printf( "Unknown Arithmetic operator, please try again" ) ; break;
	}


	if( L_u8Operator == '+' || L_u8Operator == '-' || L_u8Operator == '*' 
	|| L_u8Operator == '/' )
	{
		printf( "Result = %.1f\n", L_f32Result ) ;
	}
	
	
}













