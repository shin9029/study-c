#include <stdio.h>


//명시적 형변환 예제(cast)연산자

int main (void)
{
	int kor=85;
	int eng=81;
	int math= 64;
	int sum;
	double avarage;

	sum = kor + eng + math;
	avarage = (double)sum/3;

	printf ("합계: %d\t 평균: %f",sum,avarage);

	return 0;
}
