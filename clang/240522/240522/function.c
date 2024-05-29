#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ADD(X,Y)(X+Y)

int sum(x, y);
void print_hello();
void local();
void staticVar();

// 전역변수는 초기화하지 않아도 0으로 초기화 됨
char ch;
int var;


int main_a() {
	// 함수
	/*int i = 5;
	int var = 10;
	printf("main 함수내의 지역변수 var의 값 : %d \n", var);
	if (i < 10) {
		local();
		int var = 30;
		printf("if문 내의 지역변수 var의 값 : %d \n", var);
	}

	printf("현재 지역변수 var의 값 : %d \n", var);

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
	printf("local함수가 %d번 호출 되었습니다. \n", count++);
}

void staticVar() {
	static int static_count = 1;
	printf("staticVar함수가 %d번 호출 되었습니다. \n", static_count++);
}