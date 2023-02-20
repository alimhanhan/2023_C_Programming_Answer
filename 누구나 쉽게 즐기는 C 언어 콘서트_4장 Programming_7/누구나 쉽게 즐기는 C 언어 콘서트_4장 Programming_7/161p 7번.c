#include <stdio.h>
#include <math.h>

int main()
{
	double x;

	printf("x의 값을 입력하시오: ");
	scanf_s("%lf", &x);

	printf("수식의 값은 %lf입니다.", (pow(x, 3) - 20) / (x - 7));

	return 0;
}