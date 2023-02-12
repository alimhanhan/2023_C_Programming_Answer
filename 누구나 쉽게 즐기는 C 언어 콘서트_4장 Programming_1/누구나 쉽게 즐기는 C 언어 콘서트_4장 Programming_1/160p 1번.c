#include <stdio.h>

int main()
{
	double weight, stature;

	printf("체중을 입력하시오: ");
	scanf_s("%lf", &weight);

	printf("신장을 입력하시오(단위: 미터): ");
	scanf_s("%lf", &stature);

	printf("BMI: %.3lf", weight / (stature * stature));	//소수점 아래 3자리까지 출력

	return 0;
}