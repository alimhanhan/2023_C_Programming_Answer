#include <stdio.h>

int main()
{
	int first, second, tmp;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &first);

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &second);

	if (first < second)
	{
		tmp = first;
		first = second;
		second = tmp;
	}

	printf("�� ���� ���� %d�Դϴ�.", first + second);
	printf("�� ���� ���� %d�Դϴ�.", first - second);

	return 0;
}