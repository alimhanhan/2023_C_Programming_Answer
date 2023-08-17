#include <stdio.h>
#include "add.h"

int main()
{
	int a = 0;
	int b = 0;

	printf("정수 2개를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	printf("두 수의 합: %d\n", add(a, b));
	
	return 0;
}