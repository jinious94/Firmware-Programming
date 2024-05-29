#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	// DDRC의 5번 포트만 출력으로 설정
	DDRC |= (1<<DDRC5);
	PORTC &= ~(1<<PORTC5);
	TCCR0 |= (1<<CS02) | (1<<CS00); 
	TCNT0 = 255 - 249; // 6
	
    while (1) 
    {
		while((TIFR & 0x01) == 0){}
		PORTC = ~PORTC;
		TCNT0 = 6;
		TIFR = 0x01;
    }
}

