#include <stdio.h>
#define language 3

int main()
{
	#if language == 1  //한국어로 출력
	printf("=================== 2월 ====================\n");
	printf("일     월     화     수     목     금     토\n");

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

	#else              //영어로 출력
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