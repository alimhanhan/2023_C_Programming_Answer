#include <stdio.h>

int main()
{
	int one, two, three;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &one);

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &two);

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &three);

	int average = (one + two + three) / 3;

	printf("����� %d�Դϴ�.", average);

	return 0;
}