#include <stdio.h>
#include <stdlib.h>

int monte()
{
	srand(time(NULL));
	int num = rand() % 2;

	return num;
}

int main()
{
	while (1)
	{
		int user = 0;

		printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1): ");
		scanf_s("%d", &user);

		if (user == -1)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}

		int a = monte();

		if (a == user)
		{
			printf("컴퓨터 승리\n");
		}
		else
		{
			printf("사용자 승리\n");
		}
	}

	return 0;
}
