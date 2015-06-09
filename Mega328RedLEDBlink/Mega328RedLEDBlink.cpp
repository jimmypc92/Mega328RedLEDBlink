/*
 * Mega328RedLEDBlink.cpp
 *
 * Created: 6/9/2015 12:19:13 PM
 *  Author: Jimmy
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

//Initializes an LED attached to Port B pin 0.
void LED_Init() {
	DDRB |= (1<<DDB0);
	PORTB|= (1<<DDB0);
}

void LED_blink() {
	PORTB ^= (1<<DDB0);
	_delay_ms(1000);
	PORTB ^= (1<<DDB0);
	_delay_ms(1000);
}

int main(void)
{
	
	LED_Init();
	
    while(1)
    {
        LED_blink();
    }
}