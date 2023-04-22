#include <stdio.h>

int main()
{
	int a, b, c;
	int sum = 0;

	printf("시작 정수: ");
	scanf_s("%d", &a);

	c = a;

	printf("종료 정수: ");
	scanf_s("%d", &b);

	for (;a <= b; a++)
	{
		sum += a;
	}

	printf("%d에서 %d까지의 합: %d", c, b, sum);

	return 0;
}