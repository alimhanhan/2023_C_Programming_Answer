#include <stdio.h>
#include <stdlib.h>

int dice()
{
	int num = rand() % 6;
	return num;
}

int main()
{
	srand(time(NULL));

	int a = dice();
	int b = dice();
	int c = dice();
	int d = dice();
	int e = dice();
	int f = dice();
	int user_sum = a + b + c;
	int com_sum = d + c + f;

	printf("����� �ֻ��� = (%d, %d, %d) = %d\n", a, b, c, user_sum);
	printf("��ǻ�� �ֻ��� = (%d, %d, %d) = %d\n", d, e, f, com_sum);

	if (user_sum > com_sum)
	{
		printf("����� �¸�\n");
	}
	else if (user_sum == com_sum)
	{
		printf("�����ϴ�.\n");
	}
	else
	{
		printf("��ǻ�� �¸�\n");
	}

	return 0;
}