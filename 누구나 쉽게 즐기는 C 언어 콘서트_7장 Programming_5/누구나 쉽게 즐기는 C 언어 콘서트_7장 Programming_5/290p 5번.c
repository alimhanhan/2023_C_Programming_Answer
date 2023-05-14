#include <stdio.h>

int main()
{
	int score[3][3] = {
		{30,10,11},
		{40,90,32},
		{70,65,56} };

	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int b = 0; b < 3; b++)
		{
			sum += score[i][b];
		}

		printf("학번이 %d인 학생의 평균 점수는 %d입니다.\n", i + 1, sum / 3);
	}

	return 0;
}