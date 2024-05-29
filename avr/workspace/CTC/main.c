#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	// DDRB의 4번 포트만 출력으로 설정
	DDRB |= (1<<DDRB4);
	
	// 방법1: 직접 설정
	//TCCR0 = 0x1C;
	
	// 방법2: 각각의 값을 비트마스킹으로 설정
	//TCCR0 |= (1<<WGM01);
	//TCCR0 |= (1<<COM00);
	//TCCR0 |= (1<<CS02);
	
	// 방법3: 한 번에 비트마스킹 처리
	// 128분주
	TCCR0 |= (1<<WGM01) | (1<<COM00) | (1<<CS02) | (1<<CS00);
	
	OCR0 = 249;
	
	while (1) 
    {
		// OCR0 값이 0인지 아닌지 판단
		// 인터럽트가 발생하면 1이되면서 탈출
		// 인터럽트가 발생하지 않으면 while문 계속 지속
		while ((TIFR & 0x02) == 0){}
		TIFR = 0x02;
		OCR0 = 249;
    }
}

