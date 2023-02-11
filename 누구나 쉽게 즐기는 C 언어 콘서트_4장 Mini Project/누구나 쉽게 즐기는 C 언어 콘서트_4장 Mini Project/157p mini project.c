#include <stdio.h>
#include <math.h>	//pow() 함수를 사용하기 위해 작성

int main()
{
	double initial_savings = 24.0;
	double interest_rate = 0.06;
	double year = 382;
	double total = initial_savings * (pow((1.0 + interest_rate), year));

	printf("초기저금액: %lf\n", initial_savings);
	printf("이율: %lf\n", interest_rate);
	printf("저축 기간: %lf\n", year);
	printf("%.2lf년 후의 원리금: %lf", year, total);		//소수점 아래 2자리까지 출력 <-- %.2lf

	return 0;
}