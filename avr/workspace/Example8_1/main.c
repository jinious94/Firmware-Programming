#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB |= 0x07; // PORTB의 하위 3비트를 출력으로 설정
	DDRF &= ~0x07; // PORTF의 하위 3비트를 입력으로 설정
	
	PORTF |= 0x01;
	// PORTF의 0번 핀을 HIGH로 설정한다.
	// 이를 통해 내부 풀업 저항이 활성화된다.
	// 버튼을 사용하여 마이크로컨트롤러의 입력을 읽는다고 가정할 경우,
	// 버튼이 눌려지지 않으면 입력 핀은 외부에서 HIGH 신호를 받는다.
	// 하지만 버튼을 누르면 버튼이 GND에 연결되면서 LOW신호가
	// 입력핀에 전달된다.
	
    while (1) 
    {
		PORTB = (PORTB & 0xF8) + (PINF & 0x07);
    }
}

