#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int per = 0;
	int bets = 0;
	int win = 0;
	int init = 50;
	int goal = 250;

	srand(time(NULL));

	for (int i = 1; i <= 10000; i++) 
	{
		while (1) 
		{
			bets++;

			per = rand();

			if ((double)rand() / RAND_MAX < 0.5)
			{
				init++;
			}
			else
			{
				init--;
			}

			if (init == goal)
			{
				win++;
				break;
			}
			else if (init == 0)
			{
				break;
			}
		}
	}

	printf("�ʱ� �ݾ�: $%d\n", init);
	printf("��ǥ �ݾ�: $%d\n", goal);
	printf("10000�� �� %d�� �¸�\n", win);
	printf("�·�: %.1lf\n", (double)win / 10000 * 100);

	return 0;
}