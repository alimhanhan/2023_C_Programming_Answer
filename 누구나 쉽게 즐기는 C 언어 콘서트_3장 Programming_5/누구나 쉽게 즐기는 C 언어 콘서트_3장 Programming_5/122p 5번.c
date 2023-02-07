#include <stdio.h>

int main()
{
	char ch;

	printf("문자를 입력하시오: ");
	ch = getchar();

	printf("아스키 코드: %d", ch);

	return 0;
}