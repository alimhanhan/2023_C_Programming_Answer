#include <stdio.h>
#include <math.h>

double dist()
{
	int x1, y1, x2, y2;

	printf("ù ��° ���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf_s("%d %d", &x1, &y1);

	printf("�� ��° ���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf_s("%d %d", &x2, &y2);

	double result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	return result;
}

int main()
{
	printf("�� �� ������ �Ÿ��� %.3lf �Դϴ�.\n", dist());

	return 0;
}