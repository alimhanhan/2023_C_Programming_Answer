#include <stdio.h>

void main(int argc, char* argv[])
{
	FILE* fp1;
	FILE* fp2;

	char ch;
	int pos;

	fopen_s(&fp1, argv[1], "r");
	fopen_s(&fp2, argv[2], "w");

	while (!feof(fp1))
	{
		ch = fgetc(fp1);
		fputc(ch, fp2);
	}

	printf("%s를 %s로 복사하였습니다.\n", argv[1], argv[2]);

	fclose(fp1);
	fclose(fp2);
}