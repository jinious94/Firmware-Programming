#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define LED_DDR DDRD // LED bar 제어를 위한 방향 설정
#define LED_PORT PORTD // LED bar 켜고 끄기위한 포트 정의

int main(void)
{
	LED_DDR = 0xff; // == 0b11111111, 방향 설정(출력/입력)
    while (1) 
    {
		//for (uint8_t i = 0; i < 8; i++) {
			//LED_PORT = 0x01 << i; // 0b00000001에서 1이 하나씩 왼쪽으로
			//_delay_ms(200);
		//}
		//for (uint8_t i = 0; i < 6; i++) {
			//LED_PORT = 0x40 >> i; // 0b01000000에서 1이 하나씩 오른쪽으로
			//_delay_ms(200);
		//}
		//for (uint8_t i = 0; i < 5; i++) {
			//LED_PORT = 0b01010101;
			//_delay_ms(200);
			//LED_PORT = 0b10101010;
			//_delay_ms(200);
		//}

		for (uint8_t i = 0; i < 4; i++) {
			LED_PORT = ((0x01 << i) | (0x80 >> i));
			_delay_ms(200);
		}

		for (uint8_t i = 0; i < 2; i++) {
			LED_PORT = ((0x04 >> i) | (0x20 << i));
			_delay_ms(200);
		}
	}
}

