#include <stdio.h>

void quiz6_2_3() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) printf("*");
			else if (i + j == 4) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

void quiz6_2_4() {
	int n;
	int flag = 0;
	int cnt = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		flag = 0;

		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			printf("%d \t", i);
			cnt++;
			if (cnt % 5 == 0) printf("\n");
		}
	}
}