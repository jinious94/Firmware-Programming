#ifndef LED_H_
#define LED_H_


#include "common.h"

#define	LED_DDR DDRD
#define LED_PORT PORTD

void ledInit();
void ledLeftShift(uint8_t* data);
void ledRightShift(uint8_t* data);
void GPIO_output(uint8_t data);




#endif