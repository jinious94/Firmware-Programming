#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

uint8_t ledArr[] = {
	0x81, // 0b 1000 0001
	0x42, // 0b 0100 0010
	0x24, // 0b 0010 0100
	0x18, // 0b 0001 1000
	0x24, // 0b 0010 0100
	0x42, // 0b 0100 0010
	//0x81  // 0b 1000 0001 
};

int main(void)
{
    DDRD = 0xff;
	while (1) 
    {
		for (uint8_t i = 0; i < 6; i++) {
			PORTD = ledArr[i];
			_delay_ms(300);
		}
		
			
    }
}

