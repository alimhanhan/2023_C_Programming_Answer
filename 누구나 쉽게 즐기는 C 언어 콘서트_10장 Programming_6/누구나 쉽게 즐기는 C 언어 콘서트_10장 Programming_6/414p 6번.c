#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char array[100];

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(array, 100);

	if ('a' <= array[0] || array[0] <= 'z')	// �ҹ��� --> �빮��
	{
		array[0] = toupper(array[0]);
	}

	printf("��� �ؽ�Ʈ ���: ");

	for (int k = 0; k < strlen(array); k++)
	{
		printf("%c", array[k]);
	}

	printf(".\n");

	return 0;
}