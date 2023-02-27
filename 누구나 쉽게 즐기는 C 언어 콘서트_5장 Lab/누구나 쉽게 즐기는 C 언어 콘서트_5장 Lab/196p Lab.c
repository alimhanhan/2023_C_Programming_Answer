#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	double d, x1, x2, x3;

	printf("계수 a, b, c를 입력하시오: ");
	scanf_s("%d%d%d", &a, &b, &c);

	d = b * b - 4.0 * a * c;

	if (d == 0)
	{
		x3 = -b / (2 * a);

		printf("해당 이차 방정식은 중근 %lf을 가집니다.", x3);
	}
	else if (d > 0)
	{
		x1 = ((-b + sqrt(d)) / (2.0 * a));
		x2 = ((-b - sqrt(d)) / (2.0 * a));

		printf("첫 번째 실근 = %lf\n", x1);
		printf("두 번째 실근 = %lf\n", x2);
	}
	else
	{
		printf("허수근입니다.\n");
	}

	return 0;
}