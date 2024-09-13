#include "button.h"

void Button_Init(Button *button, volatile uint8_t *ddr, volatile uint8_t *pin, volatile uint8_t pinNumber) {
	button -> ddr = ddr; // 생성한 버튼에 DDR값을 설정 (나의 경우 DDRE)
	button -> pin = pin; // 생성한 버튼에 PIN값을 설정 (나의 경우 PINE)
	button -> btnPin = pinNumber; // 몇번핀인지 설정 (각각 4, 6, 7)
	button -> prevState = RELEASED; // 1
	*button -> ddr &= ~(1 << button -> btnPin); // DDRE의 4, 6, 7을 입력인 '0'으로 설정
}

uint8_t Button_getState(Button *button) {
	uint8_t curState = *button->pin & (1 << button->btnPin); // 현재 button의 pin이 0이면 0, pin이 1이면 1 리턴
	if((curState == PUSHED) && (button->prevState == RELEASED)) {
		_delay_ms(50);
		button->prevState = PUSHED;
		return ACT_PUSHED;
	} else if ((curState != PUSHED) && (button->prevState == PUSHED)) {
		_delay_ms(50);
		button->prevState = RELEASED;
		return ACT_RELEASED;
	}
	
	return NO_ACT;
}