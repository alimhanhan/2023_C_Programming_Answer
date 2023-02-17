#include <stdio.h>

int main()
{
	int first, second;

	printf("첫 번째 정수를 입력하시오: ");
	scanf_s("%d", &first);

	printf("두 번째 정수를 입력하시오: ");
	scanf_s("%d", &second);

	printf("몫은 %d이고 나머지는 %d입니다.", first / second, first % second);

	return 0;
}