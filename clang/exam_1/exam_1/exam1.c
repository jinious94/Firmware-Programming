#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define SQUARE(x) ((x)*(x))
#define APPLE 100

/// <summary>
/// ��ο��� ���
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
//	printf("char���� ����Ʈũ�� : %d \n", sizeof(char));
//	printf("int���� ����Ʈũ�� : %d \n", sizeof(int));
//	printf("long���� ����Ʈũ�� : %d \n", sizeof(long));
//	printf("double���� ����Ʈũ�� : %d \n", sizeof(double));
//
//	printf("ch�� ����Ʈũ�� : %d \n", sizeof(ch));
//	printf("num�� ����Ʈũ�� : %d \n", sizeof(num));
//	printf("x�� ����Ʈũ�� : %d \n", sizeof(x));
//
//	return 0;
//}

// ī�� ǥ���
// int manAge;

// �Ľ�Į ǥ���
// int ManAge;

// ������ũ ǥ���
// int man_age;

// �밡���� ǥ��� (������ Ÿ�� + ������)
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

	printf("���ڸ� �ϳ� �Է��ϼ���. \n");
	scanf("%d", &num);

	if (num > 0) {
		if (num <= 30) {
			printf("0���� ũ�� 30���� �۴�");
		} else {
			if (num <= 100) {
				printf("30���� ũ�� 100���� �۴�");
			} else {
				printf("100�ʰ��� \n");
			}
		}
	}else {
		printf("0���� �۳� \n");
	}*/




	//int num;

	//printf("�̼����� �� �����Ͻÿ�. \n");
	//printf("1 : ���� \n");
	//printf("2 : ���� \n");
	//printf("3 : ���� \n");
	//printf("4 : ���� �� ���� \n");
	//scanf("%d", &num);

	//switch (num) {
	//case 1:
	//	printf("�̼����� �󵵰� ����. ����ũ ����!! \n");
	//	break;
	//case 2:
	//	printf("�̼����� �󵵰� ����. ����ũ ���ÿ�!! \n");
	//	break;
	//case 3:
	//	printf("�̼����� �󵵰� ����. ��� ����ũ ���ÿ�!! \n");
	//	break;
	//case 4:
	//	printf("�̼����� �󵵰� ���� �� ����!! \n");
	//	break;
	//default:	// ���� ��� ���̽����� ������ ������ ����
	//	printf("�ȹٷ� �����ÿ�!!! \n");
	//	break;	// default ���� ����
	//}





	/*int weight = 80;
	int count = 0;

	while (weight > 60) {
		printf("���ð� ��ؼ� �컩�ÿ�!! \n");
		weight--;
		count++;
	}
	printf("�����մϴ�.. �컩��.. � �׸�!! \n");
	printf("%d �� ������ ��߳� \n", count);*/





	/*int weight = 80;
	int count = 0;

	for (weight = 80; weight > 60; weight--) {
		printf("���ð� ����� \n");
		count++;
	}
	printf("� ���ص� ��%d ���� \n", count);
	printf("%d �� ��߳� \n", count);*/





	/*int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("�ܺ� for�� ���� %d \n", i);
		for (int j = 0; j < 3; j++) {
			printf("���� for�� ���� %d \n", j);
		}
		printf("�ܺ� for�� �� %d \n", i);
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