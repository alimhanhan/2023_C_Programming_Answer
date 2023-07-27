#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	double sum = 0.0;
	double *array;

	printf("요소 개수: ");
	scanf_s("%d", &num);

	array = (double*)malloc(num * sizeof(double));

	for (int i = 0; i < num; i++)
	{
		printf("배열 요소를 입력하시오: ");
		scanf_s("%lf", &array[i]);

		sum += array[i];
	}

	printf("합: %.2lf\n", sum);

	free(array);

	return 0;
}