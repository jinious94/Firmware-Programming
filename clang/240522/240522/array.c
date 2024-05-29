#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//배열이란?
//-같은 데이터형의 연속된 유한 집합
//- 배열의 모든 요소는 연속된 메모리에 할당된다.
//
//배열의 선언
//int arr[10] -> int 크기의 방 10개를 연속된 공간에 생성
//
//배열의 크기는 0이 될 수 없다!
//int arr[0] -> X




int main_b() {
	/*int arr[5];
	int byte_size = 0;
	int size = 0;

	byte_size = sizeof(arr);
	printf("배열의 크기 : %d \n", byte_size);

	size = sizeof(arr) / sizeof(int);
	printf("배열 방의 개수: %d \n", size);*/




	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("arr의 3번방에 있는 원소는? : %d \n", arr[3]);




	/*int arr[3];
	arr[0] = 3;
	arr[1] = 5;
	arr[2] = 7;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("arr의 %d번방에 있는 원소는 ? : %d \n", i, arr[i]);
	}*/





	/*int i = 5;
	char c = 'A';
	int arr[5] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++) {
		printf("arr[%d]의 주소값 %X \n", i, &arr[i]);
	}*/


	


	int arr[5];
	int sum = 0;
	int avg;

	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생의 성적을 입력하시오 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum = sum + arr[i];
	}
	
	printf("전체 학생의 합 : %d \n\n", sum);
	//printf("학생들의 평균 : %d \n", sum / 5);

	avg = sum / 5;

	for (int i = 0; i < 5; i++) {
		printf("%d 번째 학생 : ", i + 1);
		
		if (arr[i] >= avg) {
			printf("합격 !! 추카 !! \n");
		}
		else {
			printf("불합격 !! \n");
		}
	}

	
	return 0;
}