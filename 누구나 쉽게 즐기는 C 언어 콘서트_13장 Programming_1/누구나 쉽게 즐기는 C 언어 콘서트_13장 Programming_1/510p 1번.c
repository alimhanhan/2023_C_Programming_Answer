#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	double sum = 0.0;
	double *array;

	printf("��� ����: ");
	scanf_s("%d", &num);

	array = (double*)malloc(num * sizeof(double));

	for (int i = 0; i < num; i++)
	{
		printf("�迭 ��Ҹ� �Է��Ͻÿ�: ");
		scanf_s("%lf", &array[i]);

		sum += array[i];
	}

	printf("��: %.2lf\n", sum);

	free(array);

	return 0;
}