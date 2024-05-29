#ifndef LED_H_
#define LED_H_


#include "common.h"

#define	LED_DDR DDRD
#define LED_PORT PORTD

// LED 구조체 정의
typedef struct {
	// volatile: 최적화한다고 스킵하지말고
	// 레지스터에 값을 제대로 넣어서 계산해라
	volatile uint8_t* port;
	uint8_t pinNumber;
}LED;


void ledInit();
void ledOn(LED* led);
void ledOff(LED* led);




#endif