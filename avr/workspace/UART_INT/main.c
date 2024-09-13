#include "uart0.h"

// ��� ��Ʈ�� <stdio.h> ǥ��
FILE OUTPUT = FDEV_SETUP_STREAM(UART0_Transmit, NULL, _FDEV_SETUP_WRITE);

char rxBuff[100] = {0}; // ���� ����, �ʱ�ȭ
uint8_t rxFlag = 0;     // ���� �Ϸ� �÷���

ISR(USART0_RX_vect) {          // Rx ���ͷ�Ʈ�� �߻��ϸ� ISR �Լ� ȣ��
	static uint8_t rxHead = 0; // ���ŵ� ������ �ε���
	uint8_t rxData = UDR0;
	
	if (rxData == '\n' || rxData == '\r') { // ���� �����Ͱ� ���� or �����̸�
		rxBuff[rxHead] = '\0'; // �� ���� �߰�
		rxHead = 0;
		rxFlag = 1;
	} else {
		rxBuff[rxHead] = rxData;
		rxHead++;
	}
	
}

int main(void)
{
	UART0_Init();
	uint8_t rxData;
	stdout = &OUTPUT;
	
	sei();
	
    while (1) 
    {
		if (rxFlag == 1) {
			rxFlag = 0;
			printf(rxBuff);
		}
    }
}

