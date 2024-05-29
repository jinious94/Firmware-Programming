#include "led.h"

void ledInit(LED* led) {
	*(led->port - 1) |= (1 << led->pinNumber);
	// *(led->port - 1) = *(led->port - 1) | (1 << led->pinNumber);
	// DDR 레지스터는 PORT 레지스터보다 주소가 1byte 낮게 위치하고 있다.
	// *(led->port - 1)을 이용해서 PORT 레지스터에서
	// DRR 레지스터를 접근 (데이터시트 참조요망)
	// |= (1 << led->pinNumber)을 통해 led->pinNumber로 지정된 포트에
	// 출력으로 설정함 (pinNumber로 지정된 포트를 1로 설정함)
}

void ledOn(LED* led) {
	*(led->port) |= (1 << led->pinNumber);
	// *(led->port) = *(led->port) | (1 << led->pinNumber); 
}

void ledOff(LED* led) {
	*(led->port) &= ~(1 << led->pinNumber);
	// *(led->port) = *(led->port) & ~(1 << led->pinNumber);
	// 내가 원하는 위치로 1을 보내고
	// 반전을 걸어 원하는 위치만 0으로 바꾸고 (나머지는 1)
	// &연산을 걸어 원하는 위치를 0으로 꺼버린다.
}