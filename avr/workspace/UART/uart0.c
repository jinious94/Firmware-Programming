#include "uart0.h"

// 9600bps 설정
// 2배속 모드
// 비동기, 8비트 데이터, 패리티비트x, 스탑비트 1bit
void UART0_Init() {
	UBRR0H = 0;
	UBRR0L = 207;
	
	UCSR0A |= (1<<U2X0);  // 2배속
	UCSR0C |= 0x06;       // 어차피 1, 1이라 써도되고 안써도 됨 => 비동기, 8비트 데이터, 패리티비트x, 스탑비트 1bit
	
	UCSR0B |= (1<<RXEN0); // 수신 가능
	UCSR0B |= (1<<TXEN0);  // 송신 가능
}
void UART0_Transmit(char data) {
	while(!(UCSR0A & (1<<UDRE0))); // 송신 가능한지 체크 -> UDR 비어있는지 -> 받을 준비가 되어있으면 1, 준비가 안되어 있으면 0
	UDR0 = data;
}
unsigned UART0_Receive() {
	while(!(UCSR0A & (1<<RXC0))); // 수신 대기
	
	return UDR0; // 수신이 끝나면 UDR0으로 리턴
}

void LED_ON() {
	LED_PORT |= (1 << LED_PIN);
}
void LED_OFF() {
	LED_PORT &= ~(1 << LED_PIN);
}
