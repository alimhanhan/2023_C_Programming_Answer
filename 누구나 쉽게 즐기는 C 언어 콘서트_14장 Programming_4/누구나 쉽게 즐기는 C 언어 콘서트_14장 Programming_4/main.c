#include <stdio.h>
#include "array.h"

int main()
{
	int array1[5] = { 0,1,2,3,4 };

	printf("�迭 ���ҵ�: ");
	print_array(array1, 5);

	printf("�迭 ���ҵ��� ��: %d", sum(array1, 5));
	printf("\n");

	return 0;
}