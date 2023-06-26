#include <stdio.h>
#include <string.h>

void trim_left(char array_2[])
{
	for (int i = 0; i < strlen(array_2); i++)
	{
		if (array_2[i] == ' ')
		{
			array_2[i] = '*';
		}
	}

	printf("공백 문자를 제거한 텍스트: ");

	for (int i = 0; i < strlen(array_2); i++)
	{
		if (array_2[i] != '*')
		{
			printf("%c", array_2[i]);
		}
	}
}

int main()
{
	char array[20] = { "What is it?" };
	trim_left(array);

	return 0;
}