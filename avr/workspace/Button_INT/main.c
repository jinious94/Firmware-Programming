#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(INT4_vect){
	for(int i = 0; i < 8; i++) {
		PORTD = 1<<i;
		_delay_ms(100);
	}

	//PORTD=0xff; // PORTD를 출력
	//_delay_ms(1000);
}

int main(void)
{
	DDRD = 0xff; //PORTD를 출력으로 설정
	DDRE &= ~(1<<4);	// DDRE의 4번 포트만 입력으로 설정
	//DDRE = 0x00;		// DDRE 포트 전체를 입력으로 설정
	
	sei(); // 전역 인터럽트 활성화
    
	EICRB = 0x02; // INT4번 하강엣지
	EIMSK = 0x10; // INT4번 인터럽트 인에이블
	
	
	
	while (1) 
    {
		PORTD = 0x00;
    }
}

