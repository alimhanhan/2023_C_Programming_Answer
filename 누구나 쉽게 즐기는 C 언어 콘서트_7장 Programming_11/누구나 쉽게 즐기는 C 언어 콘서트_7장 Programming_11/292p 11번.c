#include <stdio.h>

int main()
{
	int num;
	int array[100];
	int new[100] = { 0 };

	printf("�Է��� ������ ����(100�� �̳���): ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d��° ��Ҹ� �Է��Ͻÿ�: ", i);
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < num; i++)
	{
		new[array[i]] += 1;
	}

	printf("\n");

	for (int a = 0; a <= num; a++)
	{
		if (new[a] != 0)
		{
			printf("%d ���� %d�� ����\n", a, new[a]);
		}
	}

	return 0;
}