#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	// DDR은 각 핀이 입력 또는 출력으로 동작하는지를 제어하는 레지스터입니다.
	DDRD = 0xff;
	
	// PORTE의 5번핀을 입력으로 설정
	DDRE &= ~(1<<5);
	
	
    while (1) 
    {
		// 풀업방식 => 평소 5v이다가 버튼을 누르면 0v
		if (PINE & (1<<5)){
			PORTD = 0xff;
		} else {
			PORTD = 0x00;
		}
		
    }
}

