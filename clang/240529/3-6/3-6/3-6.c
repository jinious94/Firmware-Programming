#include <stdio.h>
#include <string.h>

int main() {
	char fruit[20] = "strawberry";

	printf("딸기 : %s \n", fruit);

	printf("길이 : %d \n", strlen(fruit));
	printf("크기 : %d \n", sizeof(fruit));

	return 0;
}