#include <stdio.h>

int main()
{
	int day;

	printf("요일을 0(일요일)에서 6까지의 정수로 입력하시오: ");
	scanf_s("%d", &day);

	if (day == 0 || day == 6)
	{
		printf("주말입니다.");
	}
	else
	{
		printf("주중입니다.");
	}

	return 0;
}