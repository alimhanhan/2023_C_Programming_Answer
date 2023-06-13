#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char plain_text[30] = "";
	int encrypt_key = 0;
	
	printf("평문: ");
	gets_s(plain_text, 30);

	printf("\n암호화 키: ");
	scanf_s("%d", &encrypt_key);

	int leng = strlen(plain_text);
	int i = 0;

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
				plain_text[i] == '\0';
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

	printf("\n암호문: %s\n", plain_text);

	return 0;
}