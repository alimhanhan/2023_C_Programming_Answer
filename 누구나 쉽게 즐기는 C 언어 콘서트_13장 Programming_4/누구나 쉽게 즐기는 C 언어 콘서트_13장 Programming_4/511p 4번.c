#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int big = 0;
	int* array;

	array = (int*)malloc(sizeof(int) * 20);

	for (int i = 0; i < 20; i++)
	{
		srand(time(NULL));
		array[i] = rand() % 100;
	}

	big = array[0];
	for (int i = 0; i < 19; i++)
	{
		if (array[i] < array[i + 1])
		{
			big = array[i + 1];
		}
	}

	printf("ÃÖ´ñ°ª: %d\n", big);

	free(array);
	return 0;
}