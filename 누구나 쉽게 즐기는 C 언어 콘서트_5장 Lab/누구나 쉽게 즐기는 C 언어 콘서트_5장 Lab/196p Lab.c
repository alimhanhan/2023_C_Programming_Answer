#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	double d, x1, x2, x3;

	printf("��� a, b, c�� �Է��Ͻÿ�: ");
	scanf_s("%d%d%d", &a, &b, &c);

	d = b * b - 4.0 * a * c;

	if (d == 0)
	{
		x3 = -b / (2 * a);

		printf("�ش� ���� �������� �߱� %lf�� �����ϴ�.", x3);
	}
	else if (d > 0)
	{
		x1 = ((-b + sqrt(d)) / (2.0 * a));
		x2 = ((-b - sqrt(d)) / (2.0 * a));

		printf("ù ��° �Ǳ� = %lf\n", x1);
		printf("�� ��° �Ǳ� = %lf\n", x2);
	}
	else
	{
		printf("������Դϴ�.\n");
	}

	return 0;
}