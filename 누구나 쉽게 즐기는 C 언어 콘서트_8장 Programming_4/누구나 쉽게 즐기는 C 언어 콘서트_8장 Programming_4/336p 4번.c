#include <stdio.h>

int get[] = { 0 };

int div(int a)
{
	int r = 0;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			get[r] = i;
			r++;
		}
	}

	return r;
}

int main()
{
	int p = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &p);

	printf("%d�� ���: ", p);

	for (int i = 0; i < div(p); i++)
	{
		printf("%d ", get[i]);
	}

	return 0;
}