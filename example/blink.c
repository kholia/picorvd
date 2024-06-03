#include "ch32v003fun.h"
#include <stdio.h>

int main()
{
	SystemInit();

	// Enable GPIOs
	funGpioInitAll();

	funPinMode( PD6, GPIO_Speed_10MHz | GPIO_CNF_OUT_PP );

	while(1)
	{
		funDigitalWrite( PD6, FUN_HIGH );
		Delay_Ms( 250 );
		funDigitalWrite( PD6, FUN_LOW );
		Delay_Ms( 250 );
	}
}
