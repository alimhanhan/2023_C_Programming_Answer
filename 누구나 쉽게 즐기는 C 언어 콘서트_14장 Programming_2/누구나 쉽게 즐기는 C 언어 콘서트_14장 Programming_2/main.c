#include <stdio.h>
#include "add.h"

int main()
{
	int a = 0;
	int b = 0;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	printf("�� ���� ��: %d\n", add(a, b));
	
	return 0;
}