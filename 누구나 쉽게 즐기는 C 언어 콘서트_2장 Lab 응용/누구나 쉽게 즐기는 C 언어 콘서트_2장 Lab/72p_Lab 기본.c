#include <stdio.h>

int main()
{
	int first = 0;
	int second = 0;

	printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &first);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &second);

	int sum = first + second;
	int min = first - second;
	int mul = first * second;
	int div = first / second;

		printf("�� ���� ��: %d \n", sum);
		printf("�� ���� ��: %d \n", min);
		printf("�� ���� ��: %d \n", mul);
		printf("�� ���� ��: %d", div);

	return 0;
}