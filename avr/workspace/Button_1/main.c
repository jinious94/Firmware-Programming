#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRD = 0xff;
	//DDRE &= ~(1<<DDRE5); // DDRE = 0b1110 1111;
	DDRE = 0x00; // PORTE 전체를 입력으로 설정
	
	
	uint8_t ledData = 0x01;
	uint8_t buttonData; // 버튼 입력을 받을 변수 설정
	int flag = 0; // Atmega128 에서는 int가 2byte임
	PORTD = 0x00; // LED가 꺼진 상태로 출발
	
    while (1) 
    {
		buttonData = PINE;
		
		if((buttonData & (1<<5)) == 0){ // 풀업이기 때문에 누르면 0
			ledData = (ledData >> 7) | (ledData << 1); // 전체가 다같이 움직이는게 아니라 하나만 움직이게 하기위해
			PORTD = ledData;
			_delay_ms(200);	
		}
		
		if ((buttonData & (1<<6)) == 0) {
			ledData = (ledData >> 1) | (ledData << 7);
			PORTD = ledData;
			_delay_ms(200);
		}
		
		if (flag == 0) {
			// 버튼을 누르면 flag는 1
			if((buttonData & (1<<7)) == 0) {
				flag = 1;
			} else {
				// 버튼을 안 누르면 flag는 0
				flag = 0;
			}
			
			if (flag == 1) {
				for (uint8_t i = 0 ; i < 5; i++) {
					PORTD = 0xff;
					_delay_ms(200);
					PORTD = 0x00;
					_delay_ms(200);
				}
				flag = 0;
			}
		}
		
    }
	
}

