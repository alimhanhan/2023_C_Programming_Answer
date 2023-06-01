#include <stdio.h>
#include <math.h>

void power()
{
	for (int i = 0; i <= 10; i++)
	{
		printf("%d ", (int)pow(3, i));
	}
}

int main()
{
	power();

	return 0;
}

