#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define FND_DATA_DDR DDRF
#define FND_SELECT_DDR DDRG
#define FND_DATA_PORT PORTF
#define FND_SELECT_PORT PORTG

void FND_Display(uint16_t data) {
	static uint8_t position = 0; // Digit position 변수 설정 및 초기화
	uint8_t fndData[] = {
		0x3F,
		0x06,
		0x5B,
		0x4F,
		0x66,
		0x6D,
		0x7D,
		0x27,
		0x7F,
		0x67
	};
	
	switch (position)
	{
		case 0:
		// 첫번째 자리 FND 출력 -> 0번핀 LOW / 1, 2, 3 HIGH
		// 전위차로 인해 0일때 출력되고, 1일땐 출력 x
		FND_SELECT_PORT &= ~(1<<0); // digit 1 (천의자리) Low 0xxx
		FND_SELECT_PORT |= (1<<1) | (1<<2) | (1<<3); // digit 1, 2, 3 High
		
		// 입력된 데이터의 천의자리를 구해서 FND에 출력
		FND_DATA_PORT = fndData[data / 1000];
		break;
		
		case 1:
		// 두번째 자리 FND 출력 -> 1번핀 LOW / 0, 2, 3 HIGH
		FND_SELECT_PORT &= ~(1<<1); // digit 2 (백의자리) Low
		FND_SELECT_PORT |= (1<<0) | (1<<2) | (1<<3); // digit 1, 3, 4 High
		
		// 입력된 데이터의 백의자리를 구해서 FND에 출력
		FND_DATA_PORT = fndData[data / 100 % 10];
		break;
		
		case 2:
		// 세번째 자리 FND 출력 -> 3번핀 LOW / 1, 2, 4 HIGH
		FND_SELECT_PORT &= ~(1<<2); // digit 3 Low
		FND_SELECT_PORT |= (1<<0) | (1<<1) | (1<<3); // digit 1, 2, 4 High
		
		// 입력된 데이터의 십의자리를 구해서 FND에 출력
		FND_DATA_PORT = fndData[data / 10 % 10];
		break;
		
		case 3:
		// 네번째 자리 FND 출력 -> 4번핀 LOW / 1, 2, 3 HIGH
		FND_SELECT_PORT &= ~(1<<3); // digit 4 Low
		FND_SELECT_PORT |= (1<<0) | (1<<1) | (1<<2); // digit 1, 2, 3 High
		
		// 입력된 데이터의 일의자리를 구해서 FND에 출력
		FND_DATA_PORT = fndData[data % 10];
		break;
	}
	
	position++; // 다음 자리로 이동하기 위해 포지션 증가
	position = position % 4; // 4자리 출력후에 다시 첫번째로 돌아가기 위해 4로 나눈 나머지
}


int main(void)
{
	FND_DATA_DDR = 0xff;
	FND_SELECT_DDR = 0xff;
	FND_SELECT_PORT = 0x00;
	
	uint16_t count = 0;
	uint32_t timeTick = 0;
	uint32_t prevTime = 0;
	
    while (1) 
    {
		FND_Display(count);
		if(timeTick - prevTime > 100) {
			prevTime = timeTick;
			count++;
		}
		
		_delay_ms(1); // 0.001초
		timeTick++;
    }
}

