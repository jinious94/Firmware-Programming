#include "i2c.h"

void I2C_Init() {
	I2C_DDR |= (1 << I2C_SCL) | (1 << I2C_SDA); // 출력으로 설정
	TWBR = 72;   // 100kHz
	//TWBR = 32; // 200kHz
	//TWBR = 12; // 400kHz
}
void I2C_Start() {
	TWCR = (1 << TWINT) | (1 << TWSTA) | (1<<TWEN);
	while(!(TWCR & (1 << TWINT))); // TWINT 시점 결정
}
void I2C_Stop() {
	TWCR = (1 << TWINT) | (1 << TWEN) | (1 << TWSTO);
}
void I2C_TxData(uint8_t data) {
	TWDR = data;
	TWCR = (1 << TWINT) | (1 << TWEN);
	while(!(TWCR & (1 << TWINT))); // 전송 완료 대기
}
void I2C_TxByte(uint8_t devAddress, uint8_t data) {
	I2C_Start();
	I2C_TxData(devAddress);
	I2C_TxData(data);
	I2C_Stop();
}