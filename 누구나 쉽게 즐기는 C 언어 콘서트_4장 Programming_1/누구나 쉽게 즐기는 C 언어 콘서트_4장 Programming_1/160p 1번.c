#include <stdio.h>

int main()
{
	double weight, stature;

	printf("ü���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &weight);

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf_s("%lf", &stature);

	printf("BMI: %.3lf", weight / (stature * stature));	//�Ҽ��� �Ʒ� 3�ڸ����� ���

	return 0;
}