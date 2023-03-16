#include <stdio.h>

int main()
{
	double stand, earn;

	printf("과세 표준을 입력하시오(만 원): ");
	scanf_s("%lf", &stand);

	if (stand > 8000)
	{
		earn = (1000 * 8 / 100) + (3000 / 100 * 17) + (4000 * 26 / 100) + ((stand - 8000) * 35 / 100);
	}
	else if (stand < 8000 && stand > 4000)
	{
		earn = (1000 * 8 / 100) + (3000 * 17 / 100) + ((stand - 4000) * 26 / 100);
	}
	else if (stand < 4000 && stand > 1000)
	{
		earn = (1000 * 8 / 100) + ((stand - 1000) * 17 / 100);
	}
	else 
	{
		earn = stand * 8 / 100;
	}

	printf("소득세는 %.3lf만원입니다.\n", earn);

	return 0;
}
