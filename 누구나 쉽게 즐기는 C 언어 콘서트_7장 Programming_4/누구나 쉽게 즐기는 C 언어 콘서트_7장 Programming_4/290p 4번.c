#include <stdio.h>

int main()
{
	int array[] = { 0,0,0,0,0 };
	int max, min;

	for (int i = 0; i < 5; i++)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &array[i]);
	}

	max = array[0];
	min = array[0];

	for (int a = 1; a < 5; a++)
	{
		if (array[a] > array[a - 1])
		{
			max = array[a];
		}

		if (array[a] < array[a - 1])
		{
			min = array[a];
		}
	}

	printf("�ִ�: %d, �ּڰ�: %d", max, min);

	return 0;
}