#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�迭�̶�?
//-���� ���������� ���ӵ� ���� ����
//- �迭�� ��� ��Ҵ� ���ӵ� �޸𸮿� �Ҵ�ȴ�.
//
//�迭�� ����
//int arr[10] -> int ũ���� �� 10���� ���ӵ� ������ ����
//
//�迭�� ũ��� 0�� �� �� ����!
//int arr[0] -> X




int main_b() {
	/*int arr[5];
	int byte_size = 0;
	int size = 0;

	byte_size = sizeof(arr);
	printf("�迭�� ũ�� : %d \n", byte_size);

	size = sizeof(arr) / sizeof(int);
	printf("�迭 ���� ����: %d \n", size);*/




	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("arr�� 3���濡 �ִ� ���Ҵ�? : %d \n", arr[3]);




	/*int arr[3];
	arr[0] = 3;
	arr[1] = 5;
	arr[2] = 7;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("arr�� %d���濡 �ִ� ���Ҵ� ? : %d \n", i, arr[i]);
	}*/





	/*int i = 5;
	char c = 'A';
	int arr[5] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++) {
		printf("arr[%d]�� �ּҰ� %X \n", i, &arr[i]);
	}*/


	


	int arr[5];
	int sum = 0;
	int avg;

	for (int i = 0; i < 5; i++) {
		printf("%d��° �л��� ������ �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum = sum + arr[i];
	}
	
	printf("��ü �л��� �� : %d \n\n", sum);
	//printf("�л����� ��� : %d \n", sum / 5);

	avg = sum / 5;

	for (int i = 0; i < 5; i++) {
		printf("%d ��° �л� : ", i + 1);
		
		if (arr[i] >= avg) {
			printf("�հ� !! ��ī !! \n");
		}
		else {
			printf("���հ� !! \n");
		}
	}

	
	return 0;
}