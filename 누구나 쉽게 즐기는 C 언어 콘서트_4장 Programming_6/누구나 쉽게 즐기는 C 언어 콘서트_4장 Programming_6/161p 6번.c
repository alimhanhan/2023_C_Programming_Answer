#include <stdio.h>

int main()
{
	int num;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	printf("백의 자리 수: %d\n", num / 100);
	printf("십의 자리 수: %d\n", (num % 100) / 10);
	printf("일의 자리 수: %d", (num % 100) % 10);

	return 0;
}