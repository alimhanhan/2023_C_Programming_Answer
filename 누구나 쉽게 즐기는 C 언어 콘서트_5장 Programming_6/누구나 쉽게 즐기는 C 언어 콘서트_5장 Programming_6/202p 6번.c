#include <stdio.h>

int main()
{
	char color;

	printf("��ȣ���� ���� �Է� (R, G, Y): ");
	scanf_s("%c", &color);

	if (color == 'R' || color == 'r')
	{
		printf("����!");
	}
	else if (color == 'G' || color == 'g')
	{
		printf("����");
	}
	else
	{
		printf("����");
	}

	return 0;
}