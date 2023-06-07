#include <stdio.h>

int sum = 0;

int cal(int m)
{
	if (m >= 1)
	{
		sum += m * m * m;
		cal(m - 1);
	}
	else
	{
		return sum;
	}
}

int main()
{
	int num = 0;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	printf("%d\n", cal(num));

	return 0;
}