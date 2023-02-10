#include <stdio.h>

int main()
{
	double speed, time, meter, hour, min, sec;;

	printf("거리를 미터로 입력하시오: ");
	scanf_s("%lf", &meter);

	printf("시간을 입력하시오: ");
	scanf_s("%lf", &hour);

	printf("분을 입력하시오: ");
	scanf_s("%lf", &min);

	printf("초를 입력하시오: ");
	scanf_s("%lf", &sec);

	time = hour + min / 60 + sec / (60 * 60);

	printf("속도: %lf", (meter / 1000) / time);

	return 0;
}