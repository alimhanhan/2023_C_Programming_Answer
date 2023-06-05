#include <stdio.h>

static int add = 1;
static int sub = 1;
static int mul = 1;
static int div = 1;

void calculator(int a, char k, int b)
{
	if (k == '+')
	{
		printf("덧셈은 총 %d번 호출되었습니다.\n", add++);
		printf("연산 결과: %d\n", a + b);
		
	}
	else if (k == '-')
	{
		printf("뺄셈은 총 %d번 호출되었습니다.\n", sub++);
		printf("연산 결과: %d\n", a - b);
	}
	else if (k == '/')
	{
		printf("나눗셈은 총 %d번 호출되었습니다.\n", div++);
		printf("연산 결과: %d\n", a / b);
	}
	else
	{
		printf("곱셈은 총 %d번 호출되었습니다.\n", mul++);
		printf("연산 결과: %d\n", a * b);
	}
}

int main()
{
	while (1)
	{
		int x = 0;
		int y = 0;
		char cal;

		printf("\n연산을 입력하시오.(종료는 Q): ");
		scanf_s("%d", &x);
		scanf_s("%c", &cal);
		scanf_s("%d", &y);

		if (cal == 'Q')
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}

		calculator(x, cal, y);
	}

	return 0;
}