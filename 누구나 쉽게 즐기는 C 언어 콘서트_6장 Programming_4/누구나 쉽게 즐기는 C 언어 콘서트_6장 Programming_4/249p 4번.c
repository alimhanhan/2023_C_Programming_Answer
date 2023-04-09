#include <stdio.h>

int main()
{
	int num, sum;

	sum = 0;

	while (1)
	{
		printf("정수를 입력하시오: ");
		scanf_s("%d", &num);

		sum += num;

		if (num == 0)
		{
			printf("\n합계: %d", sum);
			break;
		}
	}

	return 0;
}