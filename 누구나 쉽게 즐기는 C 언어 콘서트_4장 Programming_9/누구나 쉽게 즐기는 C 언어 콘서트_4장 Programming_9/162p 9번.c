#include <stdio.h>

int main()
{
	int num;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("LSB�� %d", num & 1);

	return 0;
}