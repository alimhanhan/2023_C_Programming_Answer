#include <stdio.h>

int main()
{
	int array[100][100] = { {0} };
	int new_array[100][100] = { {0} };
	int row = 0, col = 0;

	printf("행 개수: ");
	scanf_s("%d", &row);

	printf("열 개수: ");
	scanf_s("%d", &col);

	printf("행렬 입력: \n");
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < col; k++)
		{
			scanf_s("%d", &array[i][k]);
		}

	}

	printf("\n전치 행렬: \n");
	for (int a = 0; a < row; a++)
	{
		for (int k = 0; k < col; k++)
		{
			new_array[a][k] = array[k][a];
			printf("%d ", new_array[a][k]);
		}

		printf("\n");
	}

	return 0;
}