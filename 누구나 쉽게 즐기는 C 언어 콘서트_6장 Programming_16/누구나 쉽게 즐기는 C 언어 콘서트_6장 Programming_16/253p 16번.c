#include <stdio.h>

int main() 
{
	int num;
	int prime = 0;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	if (num == 2)
	{
		prime = 0;
	}

	for (int i = 2; i <= (num / 2); i++) 
	{
		if (num % i == 0) 
		{
			prime = 1;
			break;
		}
	}

	if (prime == 0)
	{
		printf("\n%d는 소수입니다.", num);
	}
	else
	{
		printf("\n%d는 소수가 아닙니다.", num);
	}

	return 0;
}