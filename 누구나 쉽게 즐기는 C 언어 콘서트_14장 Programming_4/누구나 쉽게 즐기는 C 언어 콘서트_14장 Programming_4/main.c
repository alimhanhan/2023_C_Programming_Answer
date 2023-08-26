#include <stdio.h>
#include "array.h"

int main()
{
	int array1[5] = { 0,1,2,3,4 };

	printf("배열 원소들: ");
	print_array(array1, 5);

	printf("배열 원소들의 합: %d", sum(array1, 5));
	printf("\n");

	return 0;
}