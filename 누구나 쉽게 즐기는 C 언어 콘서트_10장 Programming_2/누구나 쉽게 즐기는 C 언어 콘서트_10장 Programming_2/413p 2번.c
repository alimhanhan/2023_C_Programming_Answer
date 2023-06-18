#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i = 0;
	char array[100];

	printf("텍스트를 입력하시오: ");
	gets_s(array, 100);

	printf("대문자 출력: ");

	while (1) 
	{ 
		if (array[i] == '\0')
		{
			break;
		}

		printf("%c", toupper(array[i])); 

		i++;
	}
	
	return 0;
}