#include <stdio.h>

int main()
{
	int num, n;

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	printf("n를 입력하시오: ");
	scanf_s("%d", &n);

	printf("새로운 값: %d", (1 << n) | num);

	return 0;
}