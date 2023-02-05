#include <stdio.h>
#define PI 3.14

int main()
{
	double radius;

	printf("반지름을 입력하시오: ");
	scanf_s("%lf", &radius);

	printf("구의 표면적: %lf \n", 4.0 * PI * (radius * radius));
	printf("구의 부피: %lf", 4.0 / 3.0 * PI * (radius * radius * radius));

	return 0;
}