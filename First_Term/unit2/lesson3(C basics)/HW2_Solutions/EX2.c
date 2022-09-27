#include <stdio.h>



int main ( void )
{
	
	
	
	unsigned char L_u8MyAlphabet = '0' ; 
	
	printf_s("Enter an alphabet you want to check: ");
	
	scanf_s( "%c", &L_u8MyAlphabet );
	
	if( L_u8MyAlphabet == 'a' || L_u8MyAlphabet == 'e' || L_u8MyAlphabet == 'i' ||
		L_u8MyAlphabet == 'o' || L_u8MyAlphabet == 'u' || L_u8MyAlphabet == 'A' || 
		L_u8MyAlphabet == 'E' || L_u8MyAlphabet == 'I' || L_u8MyAlphabet == 'O' || 
		L_u8MyAlphabet == 'U' )
	{
		
		printf_s( "%c is a vowel", L_u8MyAlphabet );
		
	}
	
	else
	{
		
		printf_s( "%c is a consonant", L_u8MyAlphabet );
		
	}
 
 
	
	
}