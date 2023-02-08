#include <stdio.h>

int main()
{
	char aa, bb, cc;

	printf("문자를 입력하시오: ");
	scanf_s("%c\t", &aa);
	scanf_s("%c\t", &bb);
	scanf_s("%c", &cc);


	printf("문자: %c %c %c", cc, bb, aa);

	return 0;
}