
#include "ARM_COTS/LIB/LSTD_TYPES.h"
#include "ARM_COTS/LIB/LBITMATH.h"

#include "ARM_COTS/MCAL/RCC/MRCC_interface.h"
#include "ARM_COTS/MCAL/GPIO/GPIO_interface.h"


int main(void)
{

	MRCC_vInit( ) ;

	MRCC_vEnablePeriphralCLK( RCC_AHB1, AHB1ENR_GPIOAEN ) ;

	MGPIOx_ConfigType LED =
	{

			.Port 			= GPIO_PORTA 		,

			.Pin 			= GPIOx_PIN1 		,

			.Mode 			= GPIOx_MODE_OUTPUT ,

			.OutputType 	= GPIOx_PUSHPULL 	,

			.OutputSpeed 	= GPIOx_LowSpeed 	,

			.InputType 		= GPIOx_NoPull

	} ;


	MGPIOx_vInit( &LED ) ;

	while( TRUE )
	{

		MGPIOx_vSetPinValue( LED.Port, LED.Pin, GPIOx_HIGH ) ;

		for( u8 i = 0; i < 5000; i++ )
		{
			asm( "NOP" ) ;
		}

		MGPIOx_vSetPinValue( LED.Port, LED.Pin, GPIOx_LOW  ) ;

		for( u8 i = 0; i < 5000; i++ )
		{
			asm( "NOP" ) ;
		}

	}


}

