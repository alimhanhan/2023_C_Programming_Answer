#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	fopen_s(&fp, "testing.txt", "w");

	char inputs[50];
	char name[30];

	printf("파일명을 입력하시오: ");
	gets_s(name, 30);

	while (1)
	{
		rewind(stdin);
		gets_s(inputs, 50);

		if (strcmp(inputs, " ") == 0)
		{
			break;
		}

		fputs(inputs, fp);
		fputs("\n", fp);
	}

	fclose(fp);

	return 0;
}