#include <stdio.h>

void main4_11() {
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);
	
	printf("a:%d, b:%d \n", a, b);
	printf("res: %d \n", res);
}