#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//����ü�� ����
//- ���� �ٸ� ���������� �������� �ϳ��� ��� ����ϴ� ���
//- ����� �������� ����� ����� ����
struct human {
	int age;
	int height;
	int weight;
};

struct TEST {
	int c;
	int* ptr;
};

int main_d() {
	
	/*struct human info = {90, 200, 100};
	printf("age : %d", info.age);*/


	//struct TEST t;
	//struct TEST* pt;

	//pt = &t;
	//pt->c = 30; // == (*pt).c = 30 == t.c = 30;

	//printf("t.c : %d \n", t.c);








	struct TEST t; // TEST Ÿ���� ���� ����
	struct TEST* pt; // TEST Ÿ���� ������ ���� ����
	int i = 0; // �Ϲ� ���� i�� 0���� �ʱ�ȭ

	pt = &t;
	// t�� ����� ptr�� i�� ����Ŵ
	t.ptr = &i;

	// t�� ����� ptr�� ����Ű�� i ���� 3����
	*t.ptr = 3;
	printf("i : %d \n", i);

	*pt->ptr = 4;
	printf("i : %d \n", i);

	return 0;
}

