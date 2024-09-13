#include "uart0.h"

// 출력 스트림 <stdio.h> 표준
FILE OUTPUT = FDEV_SETUP_STREAM(UART0_Transmit, NULL, _FDEV_SETUP_WRITE);

char rxBuff[100] = {0}; // 수신 버퍼, 초기화
uint8_t rxFlag = 0;     // 수신 완료 플래그

ISR(USART0_RX_vect) {          // Rx 인터럽트가 발생하면 ISR 함수 호출
	static uint8_t rxHead = 0; // 수신된 데이터 인덱스
	uint8_t rxData = UDR0;
	
	if (rxData == '\n' || rxData == '\r') { // 수신 데이터가 개행 or 리턴이면
		rxBuff[rxHead] = '\0'; // 널 문자 추가
		rxHead = 0;
		rxFlag = 1;
	} else {
		rxBuff[rxHead] = rxData;
		rxHead++;
	}
	
}

int main(void)
{
	UART0_Init();
	uint8_t rxData;
	stdout = &OUTPUT;
	
	sei();
	
    while (1) 
    {
		if (rxFlag == 1) {
			rxFlag = 0;
			printf(rxBuff);
		}
    }
}

