#include "led.h"

int main(void)
{
	ledInit();
	uint8_t ledData = 0x01;
    while (1) 
    {
		//for (uint8_t i = 0; i < 7; i++) {
			//ledLeftShift(&ledData);
			//_delay_ms(500);
		//}
		//
		//for (uint8_t i = 0; i < 7; i++) {
			//ledRightShift(&ledData);
			//_delay_ms(500);
		//}
		
		if ((PINE & (1<<5)) == 0) {
			ledLeftShift(&ledData);
			_delay_ms(500);
		} else if ((PINE & (1<<6)) == 0) {
			ledRightShift(&ledData);
			_delay_ms(500);
		}
		
    }
}


