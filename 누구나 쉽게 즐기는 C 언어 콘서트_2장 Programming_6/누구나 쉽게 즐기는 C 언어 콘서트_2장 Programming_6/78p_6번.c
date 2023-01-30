#include <stdio.h>

int main()
{
	int first, second;

	printf("삼각형의 내각 2개(빈칸으로 분리): ");
	scanf_s("%d%d", &first, &second);

	int last = 180 - (first + second);

	printf("세 번째 각은 %d", last);

	return 0;
}