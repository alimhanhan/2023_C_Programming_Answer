#include <stdio.h>

int main()
{
	double one, two, fvalue;

	printf("2개의 실수를 입력하시오: ");
	scanf_s("%lf%lf", &one, &two);	   /* 여러 개의 수를 동시에 입력받을 때,
										scanf_s("%lf %lf", &one, &two);
										처럼 %lf와 %lf 사이를 띄우면 X */

	fvalue = one + two;

	printf("합의 정수부: %d", (int)fvalue);

	return 0;
}