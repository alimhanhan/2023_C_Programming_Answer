#include <stdio.h>

int main()
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
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