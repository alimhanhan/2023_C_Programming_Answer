#include <stdio.h>

int main()
{
	printf("===========================\n");
	printf("ȭ���µ�             �����µ�\n");
	printf("===========================\n");

	for (int f = 0; f <= 100; f += 10)
	{
		printf("%d                 %d\n", f, (int)((f - 32.0) * 5.0 / 9.0));
	}

	return 0;
}