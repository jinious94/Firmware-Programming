#ifndef BUTTON_H_
#define BUTTON_H_


// #define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>

#define LED_DDR DDRD
#define LED_PORT PORTD
#define BUTTON_DDR DDRE
#define BUTTON_PIN PINE
#define BUTTON_ON 4
#define BUTTON_OFF 6
#define BUTTON_TOGGLE 7

enum {PUSHED, RELEASED}; // PUSHED = 0, RELEASED = 1
enum {NO_ACT, ACT_PUSHED, ACT_RELEASED}; // NO_ACT = 0, ACT_PUSHED = 1, ACT_RELEASED = 2

typedef struct _button {
	volatile uint8_t *ddr;
	volatile uint8_t *pin;
	uint8_t btnPin;
	uint8_t prevState;
} Button;

void Button_Init(Button *button, volatile uint8_t *ddr, volatile uint8_t *pin, volatile uint8_t pinNumber);
uint8_t Button_getState(Button *button);



#endif /* BUTTON_H_ */