#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];

	printf("���ϸ��� ù �κ��� �Է��Ͻÿ�: ");
	gets_s(a, 100);

	for (int i = 0; i < 5; i++)
	{
		printf("%s%d.png ", a, i);
	}

	printf("\n");

	return 0;
}