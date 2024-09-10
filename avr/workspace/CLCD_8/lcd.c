#include "lcd.h"

void LCD_Data(uint8_t data) {
	LCD_DATA_PORT = data; // 데이터 핀에 8비트 출력
}

void LCD_WritePin() {
	LCD_RW_PORT &= ~(1<<LCD_RW); // RW핀을 Low -> 쓰기모드 진입
}

void LCD_ReadPin() {
	LCD_RW_PORT |= (1<<LCD_RW); // RW핀을 High -> 읽기모드 진입
}

void LCD_EnablePin() {
	LCD_E_PORT &= ~(1<<LCD_E); // E핀을 Low로 설정 -> 쓰기모드
	LCD_E_PORT |=  (1<<LCD_E); // E핀을 High로 설정 -> 동작 신호를 전달
	LCD_E_PORT &= ~(1<<LCD_E); // E핀을 Low로 설정 -> 쓰기모드
	_delay_us(1600);
}

void LCD_WriteCommand(uint8_t commandData) {
	LCD_RS_PORT &= ~(1<<LCD_RS); // RS핀을 Low 설정 -> 명령어모드 진입
	LCD_WritePin();                // 데이터 쓰기모드
	LCD_Data(commandData);         // 명령어를 데이터 핀에 출력
	LCD_EnablePin();               // LCD 동작신호 전송
}

void LCD_WriteData(uint8_t charData) {
	LCD_RS_PORT |= (1<<LCD_RS);  // RS핀을 High 설정 -> 문자모드 진입
	LCD_WritePin();
	LCD_Data(charData);
	LCD_EnablePin();
}

void LCD_GotoXY(uint8_t row, uint8_t col) {
	col %= 16;
	row %= 2;
	uint8_t address = (0x40 * row) + col; // 주소 계산
	uint8_t command = 0x80 + address;     // 커맨드 값 계산(주소 설정)
	LCD_WriteCommand(command);            // 주소 커맨드 전송
}

void LCD_WriteString(char *str) {
	for (uint8_t i = 0; str[i]; i++) {
		LCD_WriteData(str[i]);         
	}
}

void LCD_WriteStringXY(uint8_t row, uint8_t col, char *str) {
	LCD_GotoXY(row, col);
	LCD_WriteString(str);
}

void LCDInit() {
	LCD_DATA_DDR = 0xff;
	LCD_RS_DDR |= (1<<LCD_RS);
	LCD_RW_DDR |= (1<<LCD_RW);
	LCD_E_DDR |= (1<<LCD_E);
	
	_delay_ms(20);
	LCD_WriteCommand(COMMAND_8_BIT_MODE);
	_delay_ms(5);
	LCD_WriteCommand(COMMAND_8_BIT_MODE);
	_delay_ms(5);
	LCD_WriteCommand(COMMAND_8_BIT_MODE);
	LCD_WriteCommand(COMMAND_8_BIT_MODE);
	LCD_WriteCommand(COMMAND_DISPLAY_OFF);
	LCD_WriteCommand(COMMAND_DISPLAY_CLEAR);
	LCD_WriteCommand(COMMAND_DISPLAY_ON);
	LCD_WriteCommand(COMMAND_ENTRY_MODE);
}
