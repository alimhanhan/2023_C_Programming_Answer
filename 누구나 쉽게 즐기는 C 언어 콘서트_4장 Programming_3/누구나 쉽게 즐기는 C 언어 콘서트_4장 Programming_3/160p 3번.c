#include <stdio.h>

int main()
{
	int price;
	double sale, total;

	printf("��ǰ ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &price);

	printf("���η��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &sale);

	total = price - price * sale / 100.0;

	printf("���ε� ������ %.3lf�Դϴ�.", total);

	return 0;
}