#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capital(char s[])
{
	printf("������ ���ڿ�: ");

	for (int k = 0; k < strlen(s); k++)
	{
		if ('a' <= s[0] || s[0] <= 'z')	// �ҹ��� --> �빮��
		{
			s[0] = toupper(s[0]);
		}

		printf("%c", s[k]);
	}
}

int main()
{
	char array1[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(array1, 100);

	capital(array1);

	return 0;
}