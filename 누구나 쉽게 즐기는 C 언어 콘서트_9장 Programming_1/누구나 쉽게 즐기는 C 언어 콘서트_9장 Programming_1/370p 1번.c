#include <stdio.h>

int get_array_sum(int* A, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += A[i];
	}

	return sum;
}

int main()
{
	int data[10] = { 1,2,3,4,5,6,7,8,9 };
	int *p;

	p = data;

	printf("print_array()\n");
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", data[k]);
	}

	printf("\n배열 요소의 합: %d\n", get_array_sum(data, 10));

	return 0;
}