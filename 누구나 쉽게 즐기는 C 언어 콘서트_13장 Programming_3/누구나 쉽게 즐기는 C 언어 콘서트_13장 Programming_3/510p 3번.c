#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int* array;

	array = (int*)malloc(sizeof(int) * 20);

	for (int i = 0; i < 20; i++)
	{
		srand(time(NULL));
		array[i] = rand() % 100;

		sum += array[i];
	}

	printf("¼öµéÀÇ Æò±Õ: %d\n", sum / 20);

	free(array);
	return 0;
}