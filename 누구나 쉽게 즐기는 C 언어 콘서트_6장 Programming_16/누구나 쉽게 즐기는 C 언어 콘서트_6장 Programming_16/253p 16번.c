#include <stdio.h>

int main() 
{
	int num;
	int prime = 0;

	printf("������ �Է��Ͻÿ�: ");
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
		printf("\n%d�� �Ҽ��Դϴ�.", num);
	}
	else
	{
		printf("\n%d�� �Ҽ��� �ƴմϴ�.", num);
	}

	return 0;
}