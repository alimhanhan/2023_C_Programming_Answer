#include <stdio.h>

int main()
{
	int num;
	int array[] = { 0,0,0,0,0,0,0,0,0,0 };
	int sum = 0;

	printf("�Է��� ������ ����: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d��° ��Ҹ� �Է��Ͻÿ�: ", i);
		scanf_s("%d", &array[i]);

		sum += array[i];
	}

	printf("��: %d", sum);

	return 0;
}