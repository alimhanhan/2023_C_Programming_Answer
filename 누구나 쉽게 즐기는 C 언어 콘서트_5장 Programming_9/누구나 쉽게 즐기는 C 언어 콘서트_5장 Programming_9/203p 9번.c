#include <stdio.h>

int main()
{
	int a, b;
	char cal;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &a);
	scanf_s(" %c ", &cal);
	scanf_s("%d", &b);

	switch(cal)
	{
		case '+':
			printf("%d", a + b);
			break;

		case '-':
			printf("%d", a - b);
			break;

		case '*':
			printf("%d", a * b);
			break;

		case '/':
			printf("%d", a / b);
			break;
	}

	return 0;
}