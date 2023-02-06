#include <stdio.h>

int main()
{
	double x;

	printf("x의 값을 입력하시오: ");
	scanf_s("%lf", &x);

	printf("다항식의 값은 %lf입니다.", (3 * x * x * x) - (7 * x * x) + 9);

	return 0;
}