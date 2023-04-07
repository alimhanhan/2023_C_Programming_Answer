#include <stdio.h>

int main()
{
	int num;

	printf("몇 번이나 반복할까요?: ");
	scanf_s("%d", &num);

	for (int i = num; i > 0; i--)
	{
		printf("안녕하세요?\n");
	}

	return 0;
}