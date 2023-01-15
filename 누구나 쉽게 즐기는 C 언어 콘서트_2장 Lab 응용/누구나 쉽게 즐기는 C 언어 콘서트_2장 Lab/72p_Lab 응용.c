#include <stdio.h>

int main()
{
	int first = 0;
	int second = 0;

	printf("첫 번째 숫자를 입력하시오: ");
	scanf_s("%d", &first);

	printf("두 번째 숫자를 입력하시오: ");
	scanf_s("%d", &second);

	int sum = first + second;
	int min = first - second;
	int mul = first * second;

	if (second != 0)
	{
		int div = first / second;

		printf("두 수의 합: %d \n", sum);
		printf("두 수의 차: %d \n", min);
		printf("두 수의 곱: %d \n", mul);
		printf("두 수의 몫: %d", div);
	}
	else
	{
		printf("두 수의 합: %d \n", sum);
		printf("두 수의 차: %d \n", min);
		printf("두 수의 곱: %d \n", mul);
		printf("0으로 나눌 수 없습니다.");
	}

	return 0;
}