/*
 * LAB3part4.c
 *
 * Created: 13/05/2025 9:51:25 AM
 * Author : jstr633
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define TIME_DELAY 50


int main(void)
{
    /* Replace with your application code */
	DDRD = 0xFF;
	DDRC = 0x00;
	PORTD = 0x00;
	
	uint8_t curr = 0x00;
	
    while (1) 
    {
		if(PINC & (1 << PINC4))
		{
			if (curr == 255){
				curr = 254;
			}
			curr++;
			
		} 
		else {
			if (curr == 0){
				curr = 1;
			}
			curr--;
			
		
		
		}
		
		PORTD = curr;
		
		_delay_ms(TIME_DELAY);
	}
}

