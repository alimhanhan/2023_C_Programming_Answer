#include <stdio.h>

int current_money = 0;

int main_home(int a)
{

	printf("\n************* Welcome to 콘서트 ATM *************\n");
	printf("******* 하나를 선택하시오 *******\n");
	printf("<1> 잔고 확인\n");
	printf("<2> 입금\n");
	printf("<3> 인출\n");
	printf("<4> 종료\n");

	scanf_s("%d", &a);

	return a;
}

int current()
{
	return current_money;
}

int add()
{
	int plus = 0;

	printf("\n입금 금액을 입력하시오: ");
	scanf_s("%d", &plus);

	current_money += plus;

	return current_money;
}

int sub()
{
	int min = 0;

	printf("\n출금 금액을 입력하시오: ");
	scanf_s("%d", &min);

	current_money -= min;

	return current_money;
}

int main()
{

	while (1)
	{
		int num = 0;
		int k = 0;

		num = main_home(k);

		if (num == 1)
		{
			printf("현재 잔고는 %d원입니다.\n", current());
		}
		else if (num == 2)
		{
			add();
			printf("새로운 잔고는 %d원입니다.\n", current_money);
		}
		else if (num == 3)
		{
			sub();
			printf("새로운 잔고는 %d원입니다.\n", current_money);
		}
		else
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}

	return 0;
}