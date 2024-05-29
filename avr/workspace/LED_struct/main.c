#include "led.h"

int main(void)
{
	// LED 구조체 인스턴스 생성 및 초기화
	LED led;
	led.port = &PORTD;
	led.pinNumber = 0;
	ledInit(&led);
	
    while (1) 
    {
		ledOn(&led);
		_delay_ms(400);
		ledOff(&led);
		_delay_ms(400);
    }
}

