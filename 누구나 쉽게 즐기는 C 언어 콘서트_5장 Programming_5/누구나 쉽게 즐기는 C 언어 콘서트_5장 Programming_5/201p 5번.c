#include <ctype.h>
#include <stdio.h>

int main()
{
	char word;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &word);

	if (isupper(word) != 0)
	{
		printf("대문자입니다.");
	}
	else
	{
		printf("소문자입니다.");
	}

	return 0;
}