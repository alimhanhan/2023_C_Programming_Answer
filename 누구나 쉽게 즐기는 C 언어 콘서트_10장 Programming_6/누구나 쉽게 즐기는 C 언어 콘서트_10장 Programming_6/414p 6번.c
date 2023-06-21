#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char array[100];

	printf("텍스트를 입력하시오: ");
	gets_s(array, 100);

	if ('a' <= array[0] || array[0] <= 'z')	// 소문자 --> 대문자
	{
		array[0] = toupper(array[0]);
	}

	printf("결과 텍스트 출력: ");

	for (int k = 0; k < strlen(array); k++)
	{
		printf("%c", array[k]);
	}

	printf(".\n");

	return 0;
}