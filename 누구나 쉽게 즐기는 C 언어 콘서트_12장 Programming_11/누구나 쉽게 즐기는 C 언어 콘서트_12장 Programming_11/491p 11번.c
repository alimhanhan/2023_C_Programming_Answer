#include <stdio.h>

int main()
{
	int bin1[30];
	short bin2[30];

	FILE* fp1;
	FILE* fp2;

	fopen_s(&fp1, "binary_file.bin", "rb");
	fopen_s(&fp2, "final.bin", "wb");

	for (int i = 0; i < 30; i++)
	{
		fread(&bin1[i], sizeof(int), 1, fp1);
		bin2[i] = bin1[i];
		fwrite(&bin2[i], sizeof(short), 1, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}