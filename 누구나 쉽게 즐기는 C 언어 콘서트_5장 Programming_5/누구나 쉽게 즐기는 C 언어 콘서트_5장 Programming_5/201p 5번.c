#include <ctype.h>
#include <stdio.h>

int main()
{
	char word;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &word);

	if (isupper(word) != 0)
	{
		printf("�빮���Դϴ�.");
	}
	else
	{
		printf("�ҹ����Դϴ�.");
	}

	return 0;
}