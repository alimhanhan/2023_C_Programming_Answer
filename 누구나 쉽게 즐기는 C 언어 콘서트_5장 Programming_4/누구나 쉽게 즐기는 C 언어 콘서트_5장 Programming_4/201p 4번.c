#include <stdio.h>

int main()
{
	char word;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &word);

	if (48 <= word && word <= 57)
	{
		printf("숫자입니다.");
	}
	else if (65 <= word && word <= 90 || 97 <= word && word <= 122)
	{
		printf("알파벳입니다.");
	}
	else
	{
		printf("특수문자입니다.");
	}

	return 0;
}