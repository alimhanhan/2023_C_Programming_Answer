#include <stdio.h>

int main()
{
	double stand, earn;

	printf("���� ǥ���� �Է��Ͻÿ�(�� ��): ");
	scanf_s("%lf", &stand);

	if (stand > 8000)
	{
		earn = (1000 * 8 / 100) + (3000 / 100 * 17) + (4000 * 26 / 100) + ((stand - 8000) * 35 / 100);
	}
	else if (stand < 8000 && stand > 4000)
	{
		earn = (1000 * 8 / 100) + (3000 * 17 / 100) + ((stand - 4000) * 26 / 100);
	}
	else if (stand < 4000 && stand > 1000)
	{
		earn = (1000 * 8 / 100) + ((stand - 1000) * 17 / 100);
	}
	else 
	{
		earn = stand * 8 / 100;
	}

	printf("�ҵ漼�� %.3lf�����Դϴ�.\n", earn);

	return 0;
}
