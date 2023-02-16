#include <stdio.h>

int main()
{
	double lan, math, eng, total, ave;

	printf("3과목의 점수를 입력하시오: ");
	scanf_s("%lf%lf%lf", &lan, &math, &eng);

	total = lan + math + eng;
	ave = total / 3;

	printf("총점: %.2lf\n", total);
	printf("평균: %.2lf", ave);

	return 0;
}