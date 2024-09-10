#include "lcd.h"

int main(void)
{
    LCDInit();
	
	/*
	LCD_GotoXY(0, 0);
	LCD_WriteString("Hello AVR");
	LCD_GotoXY(1, 0);
	LCD_WriteString("Good ATmega128A");
	*/
	
	char buff[30];
	sprintf(buff, "Hello AVR");
	LCD_WriteStringXY(0, 0, buff);
	int count = 0;
	
    while (1) 
    {
		sprintf(buff, "count: %d", count++);
		LCD_WriteStringXY(1, 0, buff);
		_delay_ms(200);	
    }
}

