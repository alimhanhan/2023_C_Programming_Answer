#include <stdio.h>
#define language 3

int main()
{
	#if language == 1  //�ѱ���� ���
	printf("=================== 2�� ====================\n");
	printf("��     ��     ȭ     ��     ��     ��     ��\n");

	for (int i = 1; i < 29; i++)
	{
		if (i % 7 == 4)
		{
			printf("%d     ", i);
			printf("\n");
		}
		else
		{
			if (i < 10)
			{
				if (i == 1)
				{
					printf("                     %d      ", i);
				}
				else
				{
					printf("%d      ", i);
				}
			}
			else
			{
				printf("%d     ", i);
			}
		}
	}

	#else              //����� ���
	printf("==================== Feb ====================\n");
	printf("SUN    MON    TUE    WED    THU    FRI    SAT\n");

	for (int i = 1; i < 29; i++)
	{
		if (i % 7 == 4)
		{
			printf("%d     ", i);
			printf("\n");
		}
		else
		{
			if (i < 10)
			{
				if (i == 1)
				{
					printf("                     %d      ", i);
				}
				else
				{
					printf("%d      ", i);
				}
			}
			else
			{
				printf("%d     ", i);
			}
}
	}
	#endif

	return 0;
}