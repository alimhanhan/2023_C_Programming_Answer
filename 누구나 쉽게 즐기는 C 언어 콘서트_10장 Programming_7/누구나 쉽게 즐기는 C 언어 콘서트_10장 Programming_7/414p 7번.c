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

	printf("���� ���ڸ� ������ �ؽ�Ʈ: ");

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