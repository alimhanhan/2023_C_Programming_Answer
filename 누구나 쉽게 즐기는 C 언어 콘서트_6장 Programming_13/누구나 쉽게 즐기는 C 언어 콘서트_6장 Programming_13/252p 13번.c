#include <stdio.h>

int main()
{
	int num, fib, a, b;

	printf("몇 번째 항까지 구할까요?: ");
	scanf_s("%d", &num);

	printf("0, 1, ");
	a = 0;
	b = 1;

	for (int i = 3; i <= num; i++)
	{
		fib = a + b;
		printf("%d, ", fib);
		a = b;
		b = fib;
	}

	return 0;
}