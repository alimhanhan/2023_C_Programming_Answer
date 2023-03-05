#include <stdio.h>

int main()
{
	int first, second, tmp;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &first);

	printf("정수를 입력하시오: ");
	scanf_s("%d", &second);

	if (first < second)
	{
		tmp = first;
		first = second;
		second = tmp;
	}

	printf("두 수의 합은 %d입니다.", first + second);
	printf("두 수의 차는 %d입니다.", first - second);

	return 0;
}