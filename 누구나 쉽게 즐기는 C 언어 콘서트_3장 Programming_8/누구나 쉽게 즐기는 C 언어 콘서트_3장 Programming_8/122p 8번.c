#include <stdio.h>

int main()
{
	double speed, time, meter, hour, min, sec;;

	printf("�Ÿ��� ���ͷ� �Է��Ͻÿ�: ");
	scanf_s("%lf", &meter);

	printf("�ð��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &hour);

	printf("���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &min);

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf_s("%lf", &sec);

	time = hour + min / 60 + sec / (60 * 60);

	printf("�ӵ�: %lf", (meter / 1000) / time);

	return 0;
}