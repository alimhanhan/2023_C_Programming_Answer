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
	printf("�ҿ� �ð�: %d�ð� %d�� %d��\n", end.hour - start.hour, end.min - start.min, end.sec - start.sec);
}

int main()
{
	printf("���� �ð�: ");
	scanf_s("%d %d %d", &start.hour, &start.min, &start.sec);

	printf("���� �ð�: ");
	scanf_s("%d %d %d", &end.hour, &end.min, &end.sec);

	diff_time(start, end);

	return 0;
}