#include <stdio.h>
#include <math.h>

int main()
{
	double x;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);

	printf("������ ���� %lf�Դϴ�.", (pow(x, 3) - 20) / (x - 7));

	return 0;
}