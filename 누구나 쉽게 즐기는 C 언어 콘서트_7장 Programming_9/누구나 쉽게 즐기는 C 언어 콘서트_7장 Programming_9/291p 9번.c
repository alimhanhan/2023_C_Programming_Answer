#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int most, num;
	int array[10] = { 0 };

	srand(time(NULL));
	
	for (int i = 0; i < 100; i++)
	{
		num = rand() % 10;

		for (int k = 0; k < 10; k++)
		{
			if (num == k)
			{
				array[k]++;
			}
		}
	}

	for (int a = 1; a < 10; a++)
	{
		if (array[a] > array[a - 1])
		{
			most = a;
		}
	}

	printf("가장 많이 생성된 수: %d", most);

	return 0;
}