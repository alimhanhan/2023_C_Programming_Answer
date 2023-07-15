#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	fopen_s(&fp, "emp.txt", "w");

	char inputs[100];

	while (1)
	{
		rewind(stdin);
		gets_s(inputs, 100);

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