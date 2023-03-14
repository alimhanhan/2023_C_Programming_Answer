#include <stdio.h>

int main()
{
	int a, b, c;

	printf("삼각형의 세 변을 입력하시오: ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a + b <= c || b + c <= a || a + c <= b)
	{
		printf("삼각형이 아닙니다.");
	}
	else
	{
		if (a == b || a == c || c == b)
		{
			if (a == b && b == c)
			{
				printf("정삼각형");
			}
			else
			{
				printf("이등변 삼각형");
			}
			
		}
		else
		{
			printf("일반 삼각형");
		}
	}

	return 0;
}