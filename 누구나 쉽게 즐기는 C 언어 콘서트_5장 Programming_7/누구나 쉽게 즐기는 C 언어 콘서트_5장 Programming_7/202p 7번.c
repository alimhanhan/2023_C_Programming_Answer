#include <stdio.h>

int main()
{
	int a, b, c;

	printf("�ﰢ���� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a + b <= c || b + c <= a || a + c <= b)
	{
		printf("�ﰢ���� �ƴմϴ�.");
	}
	else
	{
		if (a == b || a == c || c == b)
		{
			if (a == b && b == c)
			{
				printf("���ﰢ��");
			}
			else
			{
				printf("�̵ �ﰢ��");
			}
			
		}
		else
		{
			printf("�Ϲ� �ﰢ��");
		}
	}

	return 0;
}