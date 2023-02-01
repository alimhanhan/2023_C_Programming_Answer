#include <stdio.h>

int main()
{
	double silsu;

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &silsu);   	//double 형은 %lf 로 입출력 가능

	printf("지수 형식으로는 %le입니다.", silsu);	//지수 형식은 %le로 입출력 가능

}