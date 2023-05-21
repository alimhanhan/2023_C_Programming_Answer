#include <stdio.h>

int main()
{
	int num, del;
	int array[100];

	printf("입력할 정수의 개수(100개 이내로): ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 요소를 입력하시오: ", i);
		scanf_s("%d", &array[i]);
	}

	printf("\n삭제할 위치: ");
	scanf_s("%d", &del);

	for (int i = 0; i < num; i++)
	{
		if (i == del)
		{
			for (int k = del; k < num; k++)
			{
				array[k] = array[k + 1];
			}
		}
	}

	printf("새로운 배열: ");
	for (int i = 0; i < num - 1; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}