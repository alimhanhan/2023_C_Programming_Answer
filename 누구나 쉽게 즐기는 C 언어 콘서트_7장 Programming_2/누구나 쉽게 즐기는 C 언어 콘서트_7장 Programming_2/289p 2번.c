#include <stdio.h>

int main()
{
	int num;
	int array[] = { 0,0,0,0,0,0 };

	printf("�Է��� ������ ����: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d��° ��Ҹ� �Է��Ͻÿ�: ", i);
		scanf_s("%d", &array[i]);
	}

	for (int i = num - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}

	return 0;
}