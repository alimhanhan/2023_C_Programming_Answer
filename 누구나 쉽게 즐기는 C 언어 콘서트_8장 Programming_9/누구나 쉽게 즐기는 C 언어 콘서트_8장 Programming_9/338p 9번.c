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

		printf("��(0) �Ǵ� ��(1)�� �����Ͻÿ�(����� -1): ");
		scanf_s("%d", &user);

		if (user == -1)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		int a = monte();

		if (a == user)
		{
			printf("��ǻ�� �¸�\n");
		}
		else
		{
			printf("����� �¸�\n");
		}
	}

	return 0;
}
