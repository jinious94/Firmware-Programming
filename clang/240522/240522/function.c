#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ADD(X,Y)(X+Y)

int sum(x, y);
void print_hello();
void local();
void staticVar();

// ���������� �ʱ�ȭ���� �ʾƵ� 0���� �ʱ�ȭ ��
char ch;
int var;


int main_a() {
	// �Լ�
	/*int i = 5;
	int var = 10;
	printf("main �Լ����� �������� var�� �� : %d \n", var);
	if (i < 10) {
		local();
		int var = 30;
		printf("if�� ���� �������� var�� �� : %d \n", var);
	}

	printf("���� �������� var�� �� : %d \n", var);

	char cc = 'a' + 1;
	printf("cc : %c \n", cc);*/

	for (int i = 0; i < 3; i++) {
		local();
		staticVar();
		printf("\n\n");
	}

	return 0;
}

int sum(x, y) {
	int c;
	c = x + y;
	return c;
}

void print_hello() {
	printf("Hello World !! \n");
}

void local() {
	int count = 1;
	printf("local�Լ��� %d�� ȣ�� �Ǿ����ϴ�. \n", count++);
}

void staticVar() {
	static int static_count = 1;
	printf("staticVar�Լ��� %d�� ȣ�� �Ǿ����ϴ�. \n", static_count++);
}