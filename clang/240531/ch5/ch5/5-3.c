#include <stdio.h>

void main5_3() {
	int a = 0, b = 0;

	if (a > 0) {
		b = 1;
	}
	else if (a == 0) {
		b = 2;
	}
	else {
		b = 3;
	}

	printf("b : %d \n", b);
}