#include <stdio.h>

int main()
{
	int num;

	while (1)
	{
		printf("�����͸� �Է��Ͻÿ�: ");
		scanf_s("%d", &num);

		for (int i = 0; i < num; i++)
		{
			printf("*");
		}

		printf("\n");
	}
	

	return 0;
}