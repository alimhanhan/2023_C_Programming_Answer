#include <stdio.h>

int main()
{
	double lan, math, eng, total, ave;

	printf("3������ ������ �Է��Ͻÿ�: ");
	scanf_s("%lf%lf%lf", &lan, &math, &eng);

	total = lan + math + eng;
	ave = total / 3;

	printf("����: %.2lf\n", total);
	printf("���: %.2lf", ave);

	return 0;
}