#include <stdio.h>

int main()
{
	int a, b, c;
	int sum = 0;

	printf("���� ����: ");
	scanf_s("%d", &a);

	c = a;

	printf("���� ����: ");
	scanf_s("%d", &b);

	for (;a <= b; a++)
	{
		sum += a;
	}

	printf("%d���� %d������ ��: %d", c, b, sum);

	return 0;
}