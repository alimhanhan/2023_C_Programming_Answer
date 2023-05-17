#include <stdio.h>

int main()
{
	int array[10][10] = { 0 };
	int i, x;

	for (int i = 0; i < 10; i++)
	{
		for (int x = 0; x < 10; x++)
		{
			array[i][x] = (i + 1) * (x + 1);
		}
	}

	printf("알고 싶은 구구단을 입력하시오(예: 9 3): ");
	scanf_s("%d %d", &i, &x);

	printf("%d X %d = %d", i, x, array[i-1][x-1]);

	return 0;
}