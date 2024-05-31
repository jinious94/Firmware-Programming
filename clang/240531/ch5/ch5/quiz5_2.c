#include <stdio.h>

void quiz5_2_2() {
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);

	switch (n % 3) {
		case 0:
			printf("거짓");
			break;

		default:
			printf("참");
			break;
	}
}

void quiz5_2_3() {
	int age = 25, chest = 95;
	char size;

	if (age < 20) {
		if (chest < 85) {
			size = 'S';
		}
		else if (chest >= 85 && chest < 95) {
			size = 'M';
		}
		else {
			size = 'L';
		}
	}
	else if (age >= 20) {
		if (chest < 90) {
			size = 'S';
		}
		else if (chest >= 90 && chest < 100) {
			size = 'M';
		}
		else {
			size = 'L';
		}
	}

	printf("사이즈는 %c입니다. \n", size);
}

void quiz5_2_4() {
	int a, b;
	char ch;
	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &a, &ch, &b);

	switch (ch) {
	case '+':
		printf("%d%c%d=%d \n", a, ch, b, a + b);
		break;
	case '-':
		printf("%d%c%d=%d \n", a, ch, b, a - b);
		break;
	case '*':
		printf("%d%c%d=%d \n", a, ch, b, a * b);
		break;
	case '/':
		printf("%d%c%d=%d \n", a, ch, b, a / b);
		break;
	}
}