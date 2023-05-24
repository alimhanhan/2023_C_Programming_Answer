#include <stdio.h>

int main()
{
	double average = 0.0;
	double v = 0.0;	// v/n은 표준편차
	double sum = 0.0;
	double array[5] = { 0.0 };

	for (int i = 0; i < 5; i++)
	{
		printf("실수를 입력하시오: ");
		scanf_s("%lf", &array[i]);

		sum += array[i];
	}

	for (int k = 0; k < 5; k++)
	{
		v += ((array[k] - sum) * (array[k] - sum));
	}

	printf("\n평균: %.5lf\n", sum / 5.0);
	printf("표준 편차: %.5lf", v / 5.0);

	return 0;
}