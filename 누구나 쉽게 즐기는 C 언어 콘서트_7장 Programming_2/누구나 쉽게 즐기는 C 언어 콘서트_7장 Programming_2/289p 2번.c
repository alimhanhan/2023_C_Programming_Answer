#include <stdio.h>

int main()
{
	int num;
	int array[] = { 0,0,0,0,0,0 };

	printf("입력할 정수의 개수: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 요소를 입력하시오: ", i);
		scanf_s("%d", &array[i]);
	}

	for (int i = num - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}

	return 0;
}