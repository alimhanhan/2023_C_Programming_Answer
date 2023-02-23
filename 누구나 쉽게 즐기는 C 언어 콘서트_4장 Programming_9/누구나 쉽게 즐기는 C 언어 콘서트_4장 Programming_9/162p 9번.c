#include <stdio.h>

int main()
{
	int num;

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	printf("LSB는 %d", num & 1);

	return 0;
}