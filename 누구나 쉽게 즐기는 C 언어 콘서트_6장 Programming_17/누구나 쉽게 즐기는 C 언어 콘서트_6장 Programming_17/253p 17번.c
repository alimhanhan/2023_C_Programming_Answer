#include <stdio.h>

int main() 
{
	int a, b, c;

	for (a = 1; a <= 99; a++)
	{
		for (b = 1; b <= 99; b++)
		{
			for (c = 1; c <= 99; c++)
			{
				if ((a * a) + (b * b) == (c * c))
				{
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	
	return 0;
}