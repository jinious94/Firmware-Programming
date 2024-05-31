# include "led.h"

// LED Device에 대한 초기화
void ledInit() {
	LED_DDR = 0xff; // 출력방향 설정
	DDRE &= ~(1<<DDRE5) | ~(1<<DDRE6); // DDRE 5번과 6번 핀을 입력으로 설정
}

// LED 좌측 이동 함수
void ledLeftShift(uint8_t* data) {
	*data = (*data >> 7) | (*data << 1);
	GPIO_output(*data);
}

// LED 우측 이동 함수
void ledRightShift(uint8_t* data) {
	*data = (*data << 7) | (*data >> 1);
	GPIO_output(*data);
}

// LED 포트에 대한 데이터 출력 함수
void GPIO_output(uint8_t data) {
	LED_PORT = data;
}