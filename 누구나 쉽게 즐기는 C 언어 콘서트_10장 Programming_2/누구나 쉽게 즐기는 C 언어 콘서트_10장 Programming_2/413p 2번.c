#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i = 0;
	char array[100];

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(array, 100);

	printf("�빮�� ���: ");

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