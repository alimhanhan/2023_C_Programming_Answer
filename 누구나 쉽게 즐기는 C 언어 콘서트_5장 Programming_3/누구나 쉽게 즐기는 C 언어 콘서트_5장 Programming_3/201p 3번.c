#include <stdio.h>

int main()
{
	int day;

	printf("������ 0(�Ͽ���)���� 6������ ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &day);

	if (day == 0 || day == 6)
	{
		printf("�ָ��Դϴ�.");
	}
	else
	{
		printf("�����Դϴ�.");
	}

	return 0;
}