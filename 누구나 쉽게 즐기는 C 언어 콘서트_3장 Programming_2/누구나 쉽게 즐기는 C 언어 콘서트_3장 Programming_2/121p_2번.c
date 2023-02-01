#include <stdio.h>

int main()
{
	double jisu;

	printf("지수 형식으로 실수를 입력하시오: ");
	scanf_s("%le", &jisu);
	
	printf("소수점 표시 형식으로는 %lf입니다.", jisu);

	return 0;
}