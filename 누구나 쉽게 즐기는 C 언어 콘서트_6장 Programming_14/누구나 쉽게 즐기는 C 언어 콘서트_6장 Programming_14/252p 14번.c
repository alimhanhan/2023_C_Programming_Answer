#include <stdio.h>

int main()
{
	int n;
	int sum = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += (i * i);
	}

	printf("��갪�� %d�Դϴ�.", sum);

	return 0;
}