#include <stdio.h>

void quiz5_1_1() {
	int a = 3;

	if (a < 0) {
		a = -a;
	}

	printf("1. %d \n", a);

	if (a % 2 == 0) {
		a = 2;
	}
	else {
		a = 1;
	}

	printf("2. %d \n", a);
}

void quiz5_1_2() {
	int chest = 95;
	char size;

	if (chest <= 90) {
		size = 'S';
	}
	else if (chest > 90 && chest <= 100) {
		size = 'M';
	}
	else {
		size = 'L';
	}
}

void quiz5_1_3() {
	double height = 179.5;
	double weight = 75.0;

	if ((height >= 187.5) && (weight < 80)) {
		printf("ok \n");
	}
	else {
		printf("cancel \n");
	}
}