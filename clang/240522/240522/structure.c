#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//구조체의 정의
//- 서로 다른 데이터형의 변수들을 하나로 묶어서 사용하는 기능
//- 사용자 정의형을 만드는 방법을 제공
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








	struct TEST t; // TEST 타입의 변수 선언
	struct TEST* pt; // TEST 타입의 포인터 변수 선언
	int i = 0; // 일반 변수 i에 0으로 초기화

	pt = &t;
	// t의 멤버인 ptr은 i를 가리킴
	t.ptr = &i;

	// t의 멤버인 ptr이 가리키는 i 값에 3대입
	*t.ptr = 3;
	printf("i : %d \n", i);

	*pt->ptr = 4;
	printf("i : %d \n", i);

	return 0;
}

