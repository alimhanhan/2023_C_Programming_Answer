#include <stdio.h>

int main()
{
	int first, second;

	printf("�ﰢ���� ���� 2��(��ĭ���� �и�): ");
	scanf_s("%d%d", &first, &second);

	int last = 180 - (first + second);

	printf("�� ��° ���� %d", last);

	return 0;
}