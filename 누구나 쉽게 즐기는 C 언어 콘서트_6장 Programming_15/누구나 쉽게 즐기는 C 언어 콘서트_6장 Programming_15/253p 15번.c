#include <stdio.h>

int main()
{
	int init = 1000;
	int lt;
	char cal;

	printf("�ʱ� ���ᷮ: 1000\n");

	for(;;)
	{
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
		scanf_s("%c %d", &cal, &lt);

		if (cal == '+')
		{
			init += lt;
		}
		else
		{
			init -= lt;

			if (init <= 10)
			{
				printf("\n(���) ���ᰡ 10�����Դϴ�.");
				break;
			}
		}
	}

	return 0;
}