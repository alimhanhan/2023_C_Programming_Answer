#include <stdio.h>
#include <string.h>

int main()
{
	char array[100];
	int cnt = 1;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(array, 100);

	for (int i = 0; i < strlen(array); i++)
	{
		if (array[i] != array[strlen(array) - 1 - i])
		{
			printf("%s�� ȸ���� �ƴմϴ�.", array);
			cnt = 0;
			break;
		}
	}

	if (cnt != 0)
	{
		printf("%s�� ȸ���Դϴ�.", array);
	}

	return 0;
}