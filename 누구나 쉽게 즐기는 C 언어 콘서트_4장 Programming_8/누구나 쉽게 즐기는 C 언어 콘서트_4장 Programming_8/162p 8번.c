#include <stdio.h>

int main()
{
	double one, two, fvalue;

	printf("2���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf%lf", &one, &two);	   /* ���� ���� ���� ���ÿ� �Է¹��� ��,
										scanf_s("%lf %lf", &one, &two);
										ó�� %lf�� %lf ���̸� ���� X */

	fvalue = one + two;

	printf("���� ������: %d", (int)fvalue);

	return 0;
}