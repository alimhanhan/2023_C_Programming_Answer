#include <stdio.h>

int current_money = 0;

int main_home(int a)
{

	printf("\n************* Welcome to �ܼ�Ʈ ATM *************\n");
	printf("******* �ϳ��� �����Ͻÿ� *******\n");
	printf("<1> �ܰ� Ȯ��\n");
	printf("<2> �Ա�\n");
	printf("<3> ����\n");
	printf("<4> ����\n");

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

	printf("\n�Ա� �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &plus);

	current_money += plus;

	return current_money;
}

int sub()
{
	int min = 0;

	printf("\n��� �ݾ��� �Է��Ͻÿ�: ");
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
			printf("���� �ܰ�� %d���Դϴ�.\n", current());
		}
		else if (num == 2)
		{
			add();
			printf("���ο� �ܰ�� %d���Դϴ�.\n", current_money);
		}
		else if (num == 3)
		{
			sub();
			printf("���ο� �ܰ�� %d���Դϴ�.\n", current_money);
		}
		else
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
	}

	return 0;
}