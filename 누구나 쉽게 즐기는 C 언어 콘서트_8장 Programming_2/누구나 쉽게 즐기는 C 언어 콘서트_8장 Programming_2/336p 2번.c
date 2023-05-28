#include <stdio.h>

double get_bigger(double a, double b)
{
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &a);

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &b);

	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int x = 0;
	int y = 0;

	printf("더 큰 수는 %.3lf입니다.", get_bigger(x, y));

	return 0;
}