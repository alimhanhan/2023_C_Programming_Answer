#include <stdio.h>
#include <string.h>

int main()
{
	char array[100];

	printf("텍스트를 입력하시오: ");
	gets_s(array, 100);

	printf("최종 텍스트: ");
	for (int i = 0; i < strlen(array); i++)
	{
		if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
		{
			array[i] = ' ';
		}
		else
		{
			printf("%c", array[i]);
		}
	}

	return 0;
}