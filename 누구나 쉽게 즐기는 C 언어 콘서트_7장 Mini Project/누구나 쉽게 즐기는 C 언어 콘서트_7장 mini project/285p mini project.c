#include <stdio.h>

int main()
{
	int x, y, z;
	char A, B;
	char board[3][3] = { 'o','o','o' ,'o' ,'o' ,'o' ,'o' ,'o' ,'o' };

	z = 1;

	while (1)
	{
		printf("(x, y) ÁÂÇ¥: ");
		scanf_s("%d %d", &x, &y);

		if (z == 1)
		{
			board[x][y] = 'A';
			z *= -1;
		}
		else
		{
			board[x][y] = 'B';
			z *= -1;
		}

		printf("----|----|----\n");
		printf(" %c  | %c  | %c \n", board[0][0], board[0][1], board[0][2]);
		printf("----|----|----\n");
		printf(" %c  | %c  | %c \n", board[1][0], board[1][1], board[1][2]);
		printf("----|----|----\n");
		printf(" %c  | %c  | %c \n", board[2][0], board[2][1], board[2][2]);
		printf("----|----|----\n");
	}

	return 0;
}