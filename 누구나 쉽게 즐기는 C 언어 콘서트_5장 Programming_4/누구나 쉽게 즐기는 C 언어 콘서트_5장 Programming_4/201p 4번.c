#include <stdio.h>

int main()
{
	char word;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &word);

	if (48 <= word && word <= 57)
	{
		printf("�����Դϴ�.");
	}
	else if (65 <= word && word <= 90 || 97 <= word && word <= 122)
	{
		printf("���ĺ��Դϴ�.");
	}
	else
	{
		printf("Ư�������Դϴ�.");
	}

	return 0;
}