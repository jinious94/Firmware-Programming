#include "button.h"

int main(void)
{
    LED_DDR = 0xff;
	Button btnOn;
	Button btnOff;
	Button btnToggle;
	
	Button_Init(&btnOn, &BUTTON_DDR, &BUTTON_PIN, BUTTON_ON);
	Button_Init(&btnOff, &BUTTON_DDR, &BUTTON_PIN, BUTTON_OFF);
	Button_Init(&btnToggle, &BUTTON_DDR, &BUTTON_PIN, BUTTON_TOGGLE);
	
    while (1) 
    {
		if (Button_getState(&btnOn) == ACT_RELEASED) {
			LED_PORT = 0xff;
		}
		if (Button_getState(&btnOff) == ACT_RELEASED) {
			LED_PORT = 0x00;
		}
		if (Button_getState(&btnToggle) == ACT_RELEASED) {
			LED_PORT ^= 0xff;
		}
    }
}

