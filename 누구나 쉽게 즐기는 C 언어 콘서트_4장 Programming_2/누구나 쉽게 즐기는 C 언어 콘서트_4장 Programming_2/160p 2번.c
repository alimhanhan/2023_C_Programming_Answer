#include <stdio.h>

int main()
{
	int x, y, z;

	printf("������ 3�� �Է��Ͻÿ�: ");
	scanf_s("%d%d%d", &x, &y, &z);

	printf("%d * %d - %d = %d", x, y, z, x * y - z);

	return 0;
}