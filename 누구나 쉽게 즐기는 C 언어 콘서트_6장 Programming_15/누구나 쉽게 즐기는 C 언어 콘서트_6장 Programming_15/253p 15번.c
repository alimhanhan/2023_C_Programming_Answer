#include <stdio.h>

int main()
{
	int init = 1000;
	int lt;
	char cal;

	printf("초기 연료량: 1000\n");

	for(;;)
	{
		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf_s("%c %d", &cal, &lt);

		if (cal == '+')
		{
			init += lt;
		}
		else
		{
			init -= lt;

			if (init <= 10)
			{
				printf("\n(경고) 연료가 10이하입니다.");
				break;
			}
		}
	}

	return 0;
}