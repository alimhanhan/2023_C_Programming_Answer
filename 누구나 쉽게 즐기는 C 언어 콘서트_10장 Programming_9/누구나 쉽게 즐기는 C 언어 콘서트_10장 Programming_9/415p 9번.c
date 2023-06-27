#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capital(char s[])
{
	printf("수정된 문자열: ");

	for (int k = 0; k < strlen(s); k++)
	{
		if ('a' <= s[0] || s[0] <= 'z')	// 소문자 --> 대문자
		{
			s[0] = toupper(s[0]);
		}

		printf("%c", s[k]);
	}
}

int main()
{
	char array1[100];

	printf("문자열을 입력하시오: ");
	gets_s(array1, 100);

	capital(array1);

	return 0;
}