#include <stdio.h>

int main()
{
	char grade;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("���� ���߾��!");
			break;

		case 'B':
			printf("�����ϴ�.");
			break;

		case 'C':
			printf("�����������ϴ�.");
			break;

		case 'D':
			printf("�� ����غ�����.");
			break;

		case 'F':
			printf("��Ÿ�����ϴ�.");
			break;
	}

	return 0;
}