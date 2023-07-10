#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100];
	int c;
	int i = 0;

	printf("파일명을 입력하시오: ");
	gets_s(name, 100);

	FILE* fp;
	fopen_s(&fp, "good.txt", "r");

	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		exit(1);
	}

	printf("%d  ", i++);
	while ((c = fgetc(fp)) != EOF)
	{
		if (ftell(fp) == 17)
		{
			printf("%d  ", i);
		}

		putchar(c);
	}

	fclose(fp);
	return 0;
}