#include <stdio.h>
#include "hello.h"

int main()
{
	char name[10];

	printf("성명을 입력해주세요: ");
	gets_s(name, 10);

	hello(name);

	return 0;
}