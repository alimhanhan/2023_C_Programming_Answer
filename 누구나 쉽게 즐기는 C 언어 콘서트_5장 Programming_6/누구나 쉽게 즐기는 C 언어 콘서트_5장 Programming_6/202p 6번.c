#include <stdio.h>

int main()
{
	char color;

	printf("신호등의 색깔 입력 (R, G, Y): ");
	scanf_s("%c", &color);

	if (color == 'R' || color == 'r')
	{
		printf("정지!");
	}
	else if (color == 'G' || color == 'g')
	{
		printf("진행");
	}
	else
	{
		printf("주의");
	}

	return 0;
}