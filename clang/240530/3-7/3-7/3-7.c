#include <stdio.h>
#include <string.h>

int main() {
	char fruit[] = "strawberry";
	printf("%s \n", fruit);
	strcpy(fruit, "banana");
	printf("%s \n", fruit);

	return 0;
}