#include "i2c_lcd.h"

uint8_t I2C_LCD_Data;

void LCD_Data4bit(uint8_t data) {
	I2C_LCD_Data = (I2C_LCD_Data & 0x0f) | (data & 0xf0);          // 상위 4비트를 먼저 클리어 한 후에 출력
	LCD_EnablePin();                                                 // LCD 동작 신호 전송
	I2C_LCD_Data = (I2C_LCD_Data & 0x0f) | ((data & 0x0f) << 4);   // 상위 4비트를 먼저 클리어 한 후 에 하위 4비트를 상위 4비트로 만든 후 출력
	LCD_EnablePin();                                                 // LCD 동작 신호 전송
}

void LCD_EnablePin() {
	I2C_LCD_Data &= ~(1 << LCD_E); // Low
	I2C_TxByte(LCD_DEV_ADDR, I2C_LCD_Data);
	
	I2C_LCD_Data |= (1 << LCD_E); // High
	I2C_TxByte(LCD_DEV_ADDR, I2C_LCD_Data);
	
	I2C_LCD_Data &= ~(1 << LCD_E); // Low
	I2C_TxByte(LCD_DEV_ADDR, I2C_LCD_Data);
	
	_delay_us(1600); // 대기
}

void LCD_WriteCommand(uint8_t commandData) {
	I2C_LCD_Data &= ~(1 << LCD_RS);
	I2C_LCD_Data &= ~(1 << LCD_RW);
	LCD_Data4bit(commandData);
}

void LCD_WriteData(uint8_t charData) {
	I2C_LCD_Data |= (1 << LCD_RS);
	I2C_LCD_Data &= ~(1 << LCD_RW);
	LCD_Data4bit(charData);	
}

void LCD_BacklightOn() {
	I2C_LCD_Data |= (1 << LCD_BACKLIGHT);
	I2C_TxByte(LCD_DEV_ADDR, I2C_LCD_Data);
}

void LCD_GotoXY(uint8_t row, uint8_t col) {
	col %= 16;
	row %= 2;
	uint8_t address = (0x40 * row) + col; // 주소 계산
	uint8_t command = 0x80 + address;     // 커맨드 값 계산(주소 설정)
	LCD_WriteCommand(command);
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

void LCD_Init() {
	I2C_Init();
	
	_delay_ms(20);             // 초기화 대기 시간(충분한 대기 시간 필요)
	LCD_WriteCommand(0x03);    // 4비트 모드 설정
	_delay_ms(5);              // 초기화 대기 시간
	LCD_WriteCommand(0x03);    // 8비트 모드 설정
	_delay_ms(5);              // 초기화 대기 시간
	LCD_WriteCommand(0x03);    // 8비트 모드 설정
	LCD_WriteCommand(0x02);    // 8비트 모드 설정
	
	LCD_WriteCommand(COMMAND_4_BIT_MODE);
	
	LCD_WriteCommand(COMMAND_DISPLAY_OFF);   // 화면 OFF
	LCD_WriteCommand(COMMAND_DISPLAY_CLEAR); // 화면 CLEAR
	LCD_WriteCommand(COMMAND_DISPLAY_ON);    // 화면 ON
	LCD_WriteCommand(COMMAND_ENTRY_MODE);
	LCD_BacklightOn();
}