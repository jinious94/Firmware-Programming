#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define SQUARE(x) ((x)*(x))
#define APPLE 100

/// <summary>
/// 헬로월드 찍기
/// </summary>
/// <returns></returns>
//int main() {
//	printf("%c \n", 0x61);
//
//	return 0;
//}

//int main() {
//	char ch;
//	int num;
//	double x;
//
//	printf("char형의 바이트크기 : %d \n", sizeof(char));
//	printf("int형의 바이트크기 : %d \n", sizeof(int));
//	printf("long형의 바이트크기 : %d \n", sizeof(long));
//	printf("double형의 바이트크기 : %d \n", sizeof(double));
//
//	printf("ch의 바이트크기 : %d \n", sizeof(ch));
//	printf("num의 바이트크기 : %d \n", sizeof(num));
//	printf("x의 바이트크기 : %d \n", sizeof(x));
//
//	return 0;
//}

// 카멜 표기법
// int manAge;

// 파스칼 표기법
// int ManAge;

// 스네이크 표기법
// int man_age;

// 헝가리안 표기법 (데이터 타입 + 변수명)
// String strName;
// byte bAge;

int main() {

	//unsigned short data = 0x0000; // 0000 0000 0000 0000
	//unsigned short msk1 = 0xf000; // 1111 0000 0000 0000
	//unsigned short msk2 = 0x0f00; // 0000 1111 0000 0000
	//unsigned short msk3 = 0x00f0; // 0000 0000 1111 0000
	//unsigned short msk4 = 0x000f; // 0000 0000 0000 1111

	//printf("Result 1 = %#.4x \n", data | msk1);
	//printf("Result 2 = %#.4x \n", data | msk2);
	//printf("Result 3 = %#.4x \n", data | msk3);
	//printf("Result 4 = %#.4x \n", data | msk4);





	/*int num = 0;

	printf("숫자를 하나 입력하세요. \n");
	scanf("%d", &num);

	if (num > 0) {
		if (num <= 30) {
			printf("0보다 크고 30보다 작다");
		} else {
			if (num <= 100) {
				printf("30보다 크고 100보다 작다");
			} else {
				printf("100초과네 \n");
			}
		}
	}else {
		printf("0보다 작네 \n");
	}*/




	//int num;

	//printf("미세먼지 농도 선택하시오. \n");
	//printf("1 : 좋음 \n");
	//printf("2 : 보통 \n");
	//printf("3 : 나쁨 \n");
	//printf("4 : 죽을 수 있음 \n");
	//scanf("%d", &num);

	//switch (num) {
	//case 1:
	//	printf("미세먼지 농도가 좋음. 마스크 벗어!! \n");
	//	break;
	//case 2:
	//	printf("미세먼지 농도가 보통. 마스크 쓰시오!! \n");
	//	break;
	//case 3:
	//	printf("미세먼지 농도가 나쁨. 비싼 마스크 쓰시오!! \n");
	//	break;
	//case 4:
	//	printf("미세먼지 농도가 죽을 수 있음!! \n");
	//	break;
	//default:	// 위에 어떠한 케이스에도 속하지 않으면 실행
	//	printf("똑바로 누르시오!!! \n");
	//	break;	// default 생략 가능
	//}





	/*int weight = 80;
	int count = 0;

	while (weight > 60) {
		printf("빡시게 운동해서 살빼시오!! \n");
		weight--;
		count++;
	}
	printf("축하합니다.. 살빼서.. 운동 그만!! \n");
	printf("%d 일 빡세게 운동했네 \n", count);*/





	/*int weight = 80;
	int count = 0;

	for (weight = 80; weight > 60; weight--) {
		printf("빡시게 운동하자 \n");
		count++;
	}
	printf("운동 안해도 됨%d 일차 \n", count);
	printf("%d 일 운동했네 \n", count);*/





	/*int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("외부 for문 시작 %d \n", i);
		for (int j = 0; j < 3; j++) {
			printf("내부 for문 수행 %d \n", j);
		}
		printf("외부 for문 끝 %d \n", i);
	}*/


	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 4 - i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}