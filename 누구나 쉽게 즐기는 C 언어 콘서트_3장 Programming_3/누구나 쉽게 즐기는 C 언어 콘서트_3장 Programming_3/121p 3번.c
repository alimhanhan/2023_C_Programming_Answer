#include <stdio.h>
#define PI 3.14

int main()
{
	double radius;

	printf("�������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);

	printf("���� ǥ����: %lf \n", 4.0 * PI * (radius * radius));
	printf("���� ����: %lf", 4.0 / 3.0 * PI * (radius * radius * radius));

	return 0;
}