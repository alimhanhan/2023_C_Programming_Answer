#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* fp;
	fopen_s(&fp, "plain.txt", "w");

	if (fp == NULL)
	{
		printf("파일을 열 수 없습니다.\n");
		exit(0);
	}

	int encrypt_key = 0;
	char plain_text[30];

	printf("평문을 입력하시오: ");
	gets_s(plain_text, 30);
	fputs(plain_text, fp);

	printf("암호화 키: ");
	scanf_s("%d", &encrypt_key);

	int leng = strlen(plain_text);
	int i = 0;

	printf("\n");

	while (1)
	{
		if (plain_text[i] == '\0')
		{
			if (i > leng)
			{
				break;
			}
			else
			{
				plain_text[i] = '\0';
			}
		}
		else
		{
			if (plain_text[i] >= 'A' && plain_text[i] <= 'z')
			{
				plain_text[i] += encrypt_key;

				if (plain_text[i] > 'z')
				{
					plain_text[i] -= 26;
				}
			}
		}
		i++;
	}

	printf("암호문: ");
	for (int k = 0; k < leng; k++)
	{
		printf("%c", plain_text[k]);
	}

	printf("\n");
	fputs(plain_text, fp);

	fclose(fp);
	return 0;
}