#include <stdio.h>

int main()
{
	int num, n;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("n�� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("���ο� ��: %d", (1 << n) | num);

	return 0;
}