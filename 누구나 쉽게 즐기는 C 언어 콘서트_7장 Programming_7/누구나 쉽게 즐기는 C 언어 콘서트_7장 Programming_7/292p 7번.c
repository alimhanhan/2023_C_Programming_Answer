#include <stdio.h>

int main()
{
	int array1[100][100] = { {0} };
	int array2[100][100] = { {0} };
	int row = 0, col = 0;

	printf("�� ����: ");
	scanf_s("%d", &row);

	printf("�� ����: ");
	scanf_s("%d", &col);

	printf("ù ��° ��� �Է�: \n");
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < col; k++)
		{
			scanf_s("%d", &array1[i][k]);
		}

	}

	printf("�� ��° ��� �Է�: \n");
	for (int a = 0; a < row; a++)
	{
		for (int kk = 0; kk < col; kk++)
		{
			scanf_s("%d", &array2[a][kk]);
		}
	}

	printf("\n���� ���: \n");
	for (int ii = 0; ii < row; ii++)
	{
		for (int k = 0; k < col; k++)
		{
			printf("%d ", array2[ii][k] * array1[ii][k]);
		}

		printf("\n");
	}

	return 0;
}