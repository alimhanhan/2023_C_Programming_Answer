#include <stdio.h>

static int sum = 0;

void save(int amount)
{
	sum += amount;

	printf("���ݱ����� ������� %d�Դϴ�.\n", sum);
}

void draw(int amount)
{
	sum -= amount;

	printf("���ݱ����� ������� %d�Դϴ�.\n", sum);
}

int main()
{
	int num = 0;

	while (1)
	{
		int choose = 0;

		printf("\n����(1)�� ����(0) �� ������ �Ͻðڽ��ϱ�?(����� -1): ");
		scanf_s("%d", &choose);

		if (choose == -1)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else if (choose == 0)
		{
			printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1): ");
			scanf_s("%d", &num);

			draw(num);
		}
		else
		{
			printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1): ");
			scanf_s("%d", &num);

			save(num);
		}
	}

	return 0;
}