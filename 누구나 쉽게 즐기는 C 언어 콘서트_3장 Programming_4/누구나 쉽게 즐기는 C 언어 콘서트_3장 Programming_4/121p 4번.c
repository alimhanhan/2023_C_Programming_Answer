#include <stdio.h>

int main()
{
	double x;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);

	printf("���׽��� ���� %lf�Դϴ�.", (3 * x * x * x) - (7 * x * x) + 9);

	return 0;
}