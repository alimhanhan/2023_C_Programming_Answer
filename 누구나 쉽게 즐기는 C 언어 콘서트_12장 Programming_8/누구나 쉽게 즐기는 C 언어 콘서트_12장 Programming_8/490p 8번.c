#include <stdio.h>

int main()
{
	char file1[20];
	char file2[20];
	char get1[100];
	char get2[100];
	char result_file[20];

	FILE* fp1;
	FILE* fp2;
	FILE* result;

	printf("첫 번째 파일명: ");
	gets_s(file1, 20);

	printf("두 번째 파일명: ");
	gets_s(file2, 20);

	printf("합친 파일명: ");
	gets_s(result_file, 20);

	fopen_s(&fp1, file1, "r");
	fopen_s(&fp2, file2, "r");
	fopen_s(&result, result_file, "w");

	while (!feof(fp1))
	{
		fputs(fgets(get1, 100, fp1), result);
	}

	while (!feof(fp2))
	{
		fputs(fgets(get2, 100, fp2), result);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(result);

	return 0;
}