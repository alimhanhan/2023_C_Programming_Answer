#include <stdio.h>

int main()
{
	char aa, bb, cc;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c\t", &aa);
	scanf_s("%c\t", &bb);
	scanf_s("%c", &cc);


	printf("����: %c %c %c", cc, bb, aa);

	return 0;
}