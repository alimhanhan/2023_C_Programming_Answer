#include <stdio.h>

double get_bigger(double a, double b)
{
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &a);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &b);

	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int x = 0;
	int y = 0;

	printf("�� ū ���� %.3lf�Դϴ�.", get_bigger(x, y));

	return 0;
}