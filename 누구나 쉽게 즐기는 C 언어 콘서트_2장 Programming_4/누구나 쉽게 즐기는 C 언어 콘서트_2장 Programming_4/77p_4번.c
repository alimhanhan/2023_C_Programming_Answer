#include <stdio.h>

int main()
{
	int age;

	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);

	printf("내년이면 %d살이 되시는군요.", age+1);

	return 0;
}