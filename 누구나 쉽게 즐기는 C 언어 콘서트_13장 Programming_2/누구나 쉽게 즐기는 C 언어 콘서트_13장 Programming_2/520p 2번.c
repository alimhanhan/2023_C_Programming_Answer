#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	double big = 0.0;
	double* array;

	printf("��� ����: ");
	scanf_s("%d", &num);

	array = (double*)malloc(sizeof(double) * num);
	for (int i = 0; i < num; i++)
	{
		printf("��� %d: ", i + 1);
		scanf_s("%lf", &array[i]);
	}
	
	for (int i = 0; i < num - 1; i++)
	{
		if (array[i] < array[i + 1])
		{
			big = array[i + 1];
		}
	}

	printf("�ִ�: %.2lf\n", big);

	free(array);

	return 0;
}