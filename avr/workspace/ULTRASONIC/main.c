#include "uart0.h"
#include "lcd.h"

FILE OUTPUT = FDEV_SETUP_STREAM(UART0_Transmit, NULL, _FDEV_SETUP_WRITE);

void timerInit()
{
	TCCR1B |= (1<<CS12) | (1<<CS10);    // 16비트 타이머 1번, 분주비 1024 설정
}

void triggerPin()
{
	PORTD &= ~(1<<PORTD3);    // LOW PORTD1 -> PORTD3 1111 1101 -> 1111 0111
	_delay_us(1);
	PORTD |= (1<<PORTD3);    // HIGH
	_delay_us(10);
	PORTD &= ~(1<<PORTD3);    // LOW
}

uint8_t meanDistance()    // 거리 측정
{
	TCNT1 = 0;
	while (!(PIND & 0x04))    // echo pin 이 HIGH 까지 대기 0000 0001 -> 0000 0100
	{
		if (TCNT1 > 65000)
		{
			return;
		}
	}

	TCNT1 = 0;
	while (PIND & 0x04)    // echo pin 이 LOW 까지 대기 0000 0001 -> 0000 0100
	{
		if (TCNT1 > 65000)
		{
			break;
		}
	}

	double pulseWidth = 1000000.0 * TCNT1 * 1024 / 16000000;    // 1024분주한 것을 다시 원래대로
	// TCNT1의 값이 us 단위임
	// 거리 = 시간 * 속도 (속도: 340m/s)

	return pulseWidth / 58;
}

int main(void)
{
	uint8_t distance;

	stdout = &OUTPUT;

	UART0_Init();
	sei();

	DDRD |= 0x08;
	DDRD &= 0xfb;

	timerInit();
	
	// LCD 과제 Due 240911
	LCDInit();
	char buff[30];
	
	while (1)
	{
		triggerPin();
		distance = meanDistance();
		//printf("Distance : %d cm \r\n", distance);
		
		// LCD 과제 Due 240911
		sprintf(buff, "Distance: %-3d cm \r\n", distance);
		LCD_WriteStringXY(0, 0, buff);

		_delay_ms(500);
	}
}