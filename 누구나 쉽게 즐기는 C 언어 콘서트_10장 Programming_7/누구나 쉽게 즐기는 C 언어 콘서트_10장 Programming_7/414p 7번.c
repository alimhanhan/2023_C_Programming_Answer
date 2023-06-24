#include <stdio.h>
#include <string.h>

void trim_right(char s[])
{
	for (int i = (strlen(s) - 1); i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			s[i] = '?';
		}
	}

	printf("공백 문자를 제거한 텍스트: ");

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] != '?')
		{
			printf("%c", s[i]);
		}
	}
}

int main()
{
	char array[20] = { "She loves it." };
	trim_right(array);

	return 0;
}