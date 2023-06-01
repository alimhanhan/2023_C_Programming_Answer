#include <stdio.h>
#include <math.h>

double dist()
{
	int x1, y1, x2, y2;

	printf("첫 번째 점의 좌표를 입력하시오(x, y): ");
	scanf_s("%d %d", &x1, &y1);

	printf("두 번째 점의 좌표를 입력하시오(x, y): ");
	scanf_s("%d %d", &x2, &y2);

	double result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	return result;
}

int main()
{
	printf("두 점 사이의 거리는 %.3lf 입니다.\n", dist());

	return 0;
}