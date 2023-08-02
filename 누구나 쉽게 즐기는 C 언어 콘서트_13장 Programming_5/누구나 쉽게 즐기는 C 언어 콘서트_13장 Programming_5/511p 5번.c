#include <stdio.h>
#include <stdlib.h>

int main()
{
	typedef struct rec
	{
		int i;
		float PI;
		char A;
	} my_record;

	my_record* example;

	example = (my_record*)malloc(sizeof(my_record));

	example->i = 10;
	example->PI = 3.14;
	example->A = 'a';

	printf("%d\n", example->i);
	printf("%.2f\n", example->PI);
	printf("%c\n", example->A);

	free(example);
	return 0;
}