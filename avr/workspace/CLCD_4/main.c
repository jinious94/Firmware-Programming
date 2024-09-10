#include "lcd.h"

int main(void)
{
    LCDInit();

	LCD_GotoXY(0, 0);
	LCD_WriteString("Hello 4BIT");
	LCD_GotoXY(1, 0);
	LCD_WriteString("4BIT GOOD");

	
    while (1) 
    {

    }
}

