#include <stdio.h>

int main()
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("���� �ڸ� ��: %d\n", num / 100);
	printf("���� �ڸ� ��: %d\n", (num % 100) / 10);
	printf("���� �ڸ� ��: %d", (num % 100) % 10);

	return 0;
}