#include <stdio.h>

void main6_5() {
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
		if (sum > 30) break;
	}
	printf("������ �� : %d \n", sum);
	printf("���������� ���� �� : %d \n", i);
}