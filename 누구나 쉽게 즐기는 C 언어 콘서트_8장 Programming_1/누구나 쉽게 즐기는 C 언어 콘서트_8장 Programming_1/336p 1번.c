#include <stdio.h>

void cal(double a, double b)
{
	printf("x = ");
	scanf_s("%lf", &a);

	printf("y = ");
	scanf_s("%lf", &b);

	printf("f(x,y) = %.3lf\n\n", (1.5 * a) + (3.0 * b));
}

int main()
{
	while (1)
	{
		double x = 0;
		double y = 0;

		cal(x, y);
	}

	return 0;
}