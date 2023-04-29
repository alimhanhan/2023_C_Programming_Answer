#include <stdio.h>

int main()
{
	int num;

	while (1)
	{
		printf("데이터를 입력하시오: ");
		scanf_s("%d", &num);

		for (int i = 0; i < num; i++)
		{
			printf("*");
		}

		printf("\n");
	}
	

	return 0;
}