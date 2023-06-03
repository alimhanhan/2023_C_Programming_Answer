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

	printf("사용자 주사위 = (%d, %d, %d) = %d\n", a, b, c, user_sum);
	printf("컴퓨터 주사위 = (%d, %d, %d) = %d\n", d, e, f, com_sum);

	if (user_sum > com_sum)
	{
		printf("사용자 승리\n");
	}
	else if (user_sum == com_sum)
	{
		printf("비겼습니다.\n");
	}
	else
	{
		printf("컴퓨터 승리\n");
	}

	return 0;
}