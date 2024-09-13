
#ifndef UART0_H_
#define UART0_H_

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


#define LED_DDR DDRD
#define LED_PORT PORTD
#define LED_PIN 0

void UART0_Init();
void UART0_Transmit(char data);
unsigned UART0_Receive();
void LED_ON();
void LED_OFF();

#endif