#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char plain_text[30] = "";
	int encrypt_key = 0;
	
	printf("��: ");
	gets_s(plain_text, 30);

	printf("\n��ȣȭ Ű: ");
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

	printf("\n��ȣ��: %s\n", plain_text);

	return 0;
}