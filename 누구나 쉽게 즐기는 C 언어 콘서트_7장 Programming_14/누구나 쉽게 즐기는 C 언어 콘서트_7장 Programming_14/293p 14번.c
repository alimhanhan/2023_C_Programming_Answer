#include <stdio.h>

int main()
{
	double average = 0.0;
	double v = 0.0;	// v/n�� ǥ������
	double sum = 0.0;
	double array[5] = { 0.0 };

	for (int i = 0; i < 5; i++)
	{
		printf("�Ǽ��� �Է��Ͻÿ�: ");
		scanf_s("%lf", &array[i]);

		sum += array[i];
	}

	for (int k = 0; k < 5; k++)
	{
		v += ((array[k] - sum) * (array[k] - sum));
	}

	printf("\n���: %.5lf\n", sum / 5.0);
	printf("ǥ�� ����: %.5lf", v / 5.0);

	return 0;
}