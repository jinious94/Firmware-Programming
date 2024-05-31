#include <stdio.h>

void quiz4_2_1() {
	int res = sizeof(short) > sizeof(long) ? 1 : 0;
	printf("%s \n", res == 1 ? "short" : "long");
}

void quiz4_2_2() {
	int seats = 70;
	int audience = 65;
	double rate;

	rate = (double)audience / (double)seats * 100;
	printf("입장률 : %.1lf%%\n", rate);
}

void quiz4_2_3() {
	int hour, min, sec;
	double time = 3.76;
	double res;

	hour = (int)time;
	res = time - hour;
	res = res * 60;
	min = (int)res;
	res = res - min;
	res = res * 60;
	sec = (int)res;
	printf("%.2lf시간은 %d시간 %d분 %d초 입니다. \n", time, hour, min, sec);
}