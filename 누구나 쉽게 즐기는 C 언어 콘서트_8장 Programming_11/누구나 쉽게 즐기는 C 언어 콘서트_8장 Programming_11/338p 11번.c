#include <stdio.h>

static int add = 1;
static int sub = 1;
static int mul = 1;
static int div = 1;

void calculator(int a, char k, int b)
{
	if (k == '+')
	{
		printf("������ �� %d�� ȣ��Ǿ����ϴ�.\n", add++);
		printf("���� ���: %d\n", a + b);
		
	}
	else if (k == '-')
	{
		printf("������ �� %d�� ȣ��Ǿ����ϴ�.\n", sub++);
		printf("���� ���: %d\n", a - b);
	}
	else if (k == '/')
	{
		printf("�������� �� %d�� ȣ��Ǿ����ϴ�.\n", div++);
		printf("���� ���: %d\n", a / b);
	}
	else
	{
		printf("������ �� %d�� ȣ��Ǿ����ϴ�.\n", mul++);
		printf("���� ���: %d\n", a * b);
	}
}

int main()
{
	while (1)
	{
		int x = 0;
		int y = 0;
		char cal;

		printf("\n������ �Է��Ͻÿ�.(����� Q): ");
		scanf_s("%d", &x);
		scanf_s("%c", &cal);
		scanf_s("%d", &y);

		if (cal == 'Q')
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		calculator(x, cal, y);
	}

	return 0;
}