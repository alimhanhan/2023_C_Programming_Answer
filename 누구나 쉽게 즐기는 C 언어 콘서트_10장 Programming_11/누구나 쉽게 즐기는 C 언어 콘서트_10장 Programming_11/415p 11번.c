#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];

	printf("파일명의 첫 부분을 입력하시오: ");
	gets_s(a, 100);

	for (int i = 0; i < 5; i++)
	{
		printf("%s%d.png ", a, i);
	}

	printf("\n");

	return 0;
}