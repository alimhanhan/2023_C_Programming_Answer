#include <stdio.h>

int main()
{
	int price, num;

	printf("��ǰ ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &price);

	printf("��ǰ�� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("�� ������ %d�Դϴ�.", num * price);

	return 0;
}