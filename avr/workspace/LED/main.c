#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff; // == 0b11111111; (D포트 전체를 출력으로 설정)    
	
	while (1) {
		PORTD = 0xff; // 8비트 전체를 출력 (High)
		_delay_ms(500); // 0.5초 동안 정지!!
		PORTD = 0x00; // 8비트 전체를 끔(Low)
		_delay_ms(500);	// 0.5초 동안 정지!!
    }
}

