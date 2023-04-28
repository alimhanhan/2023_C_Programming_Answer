#include <stdio.h>

int main()
{
	int num;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	for (int n = num - 1; n >= 0; n--)
	{
		for (int i = 1; i <= num - n; i++)
		{
			printf("%d", i);
		}

		printf("\n");
	}

	return 0;
}