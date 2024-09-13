#include "uart0.h"

int main(void)
{   
	UART0_Init();
	LED_DDR = 0xff;
	char data;
	
    while (1) 
    {	
		data = UART0_Receive();
		if (data == 'a') {
			LED_ON();
			UART0_Transmit(data);
		} else if (data == 'b') {
			LED_OFF();
			UART0_Transmit(data);
		}
    }
}

