#include <stdio.h>

int main()
{
	int num;

	printf("�� ���̳� �ݺ��ұ��?: ");
	scanf_s("%d", &num);

	for (int i = num; i > 0; i--)
	{
		printf("�ȳ��ϼ���?\n");
	}

	return 0;
}