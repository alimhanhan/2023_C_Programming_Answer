#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int c[30];
	srand(time(NULL));

	FILE* text;
	FILE* bin;

	for (int i = 0; i < 30; i++)
	{
		c[i] = rand() % 6;
	}

	for (int i = 0; i < 30; i++)
	{
		printf("%d ", c[i]);
	}

	fopen_s(&text, "text_file.txt", "w");
	fopen_s(&bin, "binary_file.bin", "wb");

	for (int i = 0; i < 30; i++)
	{
		fprintf(text, "%d ", c[i]);
		fwrite(&c[i], sizeof(int), 1, bin);
	}

	fclose(text);
	fclose(bin);

	return 0;
}