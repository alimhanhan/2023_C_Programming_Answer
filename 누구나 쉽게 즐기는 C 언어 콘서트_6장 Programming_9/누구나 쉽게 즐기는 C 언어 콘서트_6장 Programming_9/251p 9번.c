#include <stdio.h>

int main()
{
	char word;
	int sum = 0;

	for (;;)
	{
		printf("문자를 입력하시오(종료는 .): ");
		word = getchar();
		getchar();	//이 코드가 없으면 "문자를 입력하시오(종료는 .): "가 2번씩 출력된다.

		if (word == 'a')
		{
			sum++;
		}

		if (word == '.')
		{
			break;
		}
	}

	printf("\na의 개수: %d", sum);

	return 0;
}