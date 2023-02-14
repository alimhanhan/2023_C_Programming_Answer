#include <stdio.h>

int main()
{
	int price;
	double sale, total;

	printf("상품 가격을 입력하시오: ");
	scanf_s("%d", &price);

	printf("할인률을 입력하시오: ");
	scanf_s("%lf", &sale);

	total = price - price * sale / 100.0;

	printf("할인된 가격은 %.3lf입니다.", total);

	return 0;
}