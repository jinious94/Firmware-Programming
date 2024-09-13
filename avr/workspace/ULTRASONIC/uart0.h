#ifndef UART0_H_
#define UART0_H_

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>

void UART0_Init();
void UART0_Transmit(char data);
unsigned UART0_Receive();

#endif