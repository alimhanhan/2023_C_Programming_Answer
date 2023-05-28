#include <stdio.h>

void inverse_array(int* a, int size)
{
	printf("역순: ");

	for (int k = size - 1; k >= 0; k--)
	{
		printf("%d ", a[k]);
	}
}

int main()
{
	int array[5] = { 0 };

	printf("5개의 정수를 입력하시오: ");
	scanf_s("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);

	inverse_array(array, 5);

	return 0;
}