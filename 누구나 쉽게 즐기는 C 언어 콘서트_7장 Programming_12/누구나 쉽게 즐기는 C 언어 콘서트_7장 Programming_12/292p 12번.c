#include <stdio.h>

int main()
{
	int num, del;
	int array[100];

	printf("�Է��� ������ ����(100�� �̳���): ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d��° ��Ҹ� �Է��Ͻÿ�: ", i);
		scanf_s("%d", &array[i]);
	}

	printf("\n������ ��ġ: ");
	scanf_s("%d", &del);

	for (int i = 0; i < num; i++)
	{
		if (i == del)
		{
			for (int k = del; k < num; k++)
			{
				array[k] = array[k + 1];
			}
		}
	}

	printf("���ο� �迭: ");
	for (int i = 0; i < num - 1; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}