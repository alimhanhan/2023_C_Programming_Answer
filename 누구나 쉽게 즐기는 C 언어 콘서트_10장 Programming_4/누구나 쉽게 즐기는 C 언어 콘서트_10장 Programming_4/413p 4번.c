#include <stdio.h>
#include <string.h>

int main()
{
	char array[100];

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(array, 100);

	printf("���� �ؽ�Ʈ: ");
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