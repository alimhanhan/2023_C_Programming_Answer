#include <stdio.h>

int main()
{
	int first, second;

	printf("ù ��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &first);

	printf("�� ��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &second);

	printf("���� %d�̰� �������� %d�Դϴ�.", first / second, first % second);

	return 0;
}