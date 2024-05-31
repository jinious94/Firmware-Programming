#include <stdio.h>

void quiz4_1_3() {
	int kor = 3, eng = 5, mat = 4;
	int credits;
	double res;
	double kscore = 3.8;
	double escore = 4.4;
	double mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3;
	
	res = (credits >= 10 && grade > 4.0) ? 1 : 0;

	printf("res : %d \n", res);
}