#include <stdio.h>

int main()
{
	int num, sum;

	sum = 0;

	while (1)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &num);

		sum += num;

		if (num == 0)
		{
			printf("\n�հ�: %d", sum);
			break;
		}
	}

	return 0;
}