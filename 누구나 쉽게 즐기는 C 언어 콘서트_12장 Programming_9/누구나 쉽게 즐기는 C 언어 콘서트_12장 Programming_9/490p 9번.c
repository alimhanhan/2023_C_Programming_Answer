#include <stdio.h>
#include <string.h>

int main()
{
	char get1[100];

	FILE* fp1;
	FILE* fp2;

	fopen_s(&fp1, "text.txt", "r");
	fopen_s(&fp2, "text2.txt", "w");

	printf("cat을 coffee로 변경합니다.\n");

	while (!feof(fp1))
	{
		fgets(get1, 100, fp1);
		fputs(get1, fp2);
	}

	fseek(fp2, 9, SEEK_SET);
	fprintf(fp2, "\ncoffee\n");

	fclose(fp1);
	fclose(fp2);

	return 0;
}