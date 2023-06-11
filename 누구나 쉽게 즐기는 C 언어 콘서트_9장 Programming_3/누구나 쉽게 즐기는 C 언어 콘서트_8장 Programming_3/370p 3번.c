#include <stdio.h>
#include <math.h>

void q(int a, int b, int c, double* xplus, double* xminus)
{
	double one = ((-b - sqrt(b * b - 4 * a * c)) / (2 * a));
	double two = ((-b + sqrt(b * b - 4 * a * c)) / (2 * a));

	*xplus = one;
	*xminus = two;

	printf("첫 번째 실근: %.5lf\n", one);
	printf("두 번째 실근: %.5lf\n", two);
}

int main()
{
	double xx1 = 0.0;
	double xx2 = 0.0;

	q(1, 0, -1, &xx1, &xx2);

	return 0;
}