#include <stdio.h>

int main()
{
	int array[100][100] = { {0} };
	int new_array[100][100] = { {0} };
	int row = 0, col = 0;

	printf("�� ����: ");
	scanf_s("%d", &row);

	printf("�� ����: ");
	scanf_s("%d", &col);

	printf("��� �Է�: \n");
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < col; k++)
		{
			scanf_s("%d", &array[i][k]);
		}

	}

	printf("\n��ġ ���: \n");
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