#include <stdio.h>

struct time
{
	int hour;
	int min;
	int sec;
};

struct time start;
struct time end;

void diff_time(struct time start, struct time end)
{
	printf("소요 시간: %d시간 %d분 %d초\n", end.hour - start.hour, end.min - start.min, end.sec - start.sec);
}

int main()
{
	printf("시작 시간: ");
	scanf_s("%d %d %d", &start.hour, &start.min, &start.sec);

	printf("종료 시간: ");
	scanf_s("%d %d %d", &end.hour, &end.min, &end.sec);

	diff_time(start, end);

	return 0;
}