#include <stdio.h>

int main()
{
	int array[] = { 0,0,0,0,0 };
	int max, min;

	for (int i = 0; i < 5; i++)
	{
		printf("정수를 입력하시오: ");
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

	printf("최댓값: %d, 최솟값: %d", max, min);

	return 0;
}