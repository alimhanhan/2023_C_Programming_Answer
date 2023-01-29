#include <stdio.h>

int main()
{
	int one, two, three;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &one);

	printf("정수를 입력하시오: ");
	scanf_s("%d", &two);

	printf("정수를 입력하시오: ");
	scanf_s("%d", &three);

	int average = (one + two + three) / 3;

	printf("평균은 %d입니다.", average);

	return 0;
}