#include <stdio.h>
#include "hello.h"

int main()
{
	char name[10];

	printf("������ �Է����ּ���: ");
	gets_s(name, 10);

	hello(name);

	return 0;
}