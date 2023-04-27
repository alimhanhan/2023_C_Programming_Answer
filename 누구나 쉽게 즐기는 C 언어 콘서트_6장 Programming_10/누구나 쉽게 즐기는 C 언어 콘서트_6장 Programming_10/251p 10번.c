#include <stdio.h>

int main()
{
	printf("===========================\n");
	printf("È­¾¾¿Âµµ             ¼·¾¾¿Âµµ\n");
	printf("===========================\n");

	for (int f = 0; f <= 100; f += 10)
	{
		printf("%d                 %d\n", f, (int)((f - 32.0) * 5.0 / 9.0));
	}

	return 0;
}