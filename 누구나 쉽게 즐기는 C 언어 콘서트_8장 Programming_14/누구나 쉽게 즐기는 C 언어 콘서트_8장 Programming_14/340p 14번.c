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

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("%d\n", cal(num));

	return 0;
}