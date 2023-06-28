#include <stdio.h>
#include <string.h>

int main()
{
	char array[100];
	int cnt = 1;

	printf("문자열을 입력하시오: ");
	gets_s(array, 100);

	for (int i = 0; i < strlen(array); i++)
	{
		if (array[i] != array[strlen(array) - 1 - i])
		{
			printf("%s는 회문이 아닙니다.", array);
			cnt = 0;
			break;
		}
	}

	if (cnt != 0)
	{
		printf("%s는 회문입니다.", array);
	}

	return 0;
}