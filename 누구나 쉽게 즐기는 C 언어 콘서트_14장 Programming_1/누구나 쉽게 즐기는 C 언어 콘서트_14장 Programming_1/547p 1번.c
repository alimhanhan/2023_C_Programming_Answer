#include <stdio.h>
#define DEBUG  //라인 2를 주석처리하면 매크로 정의가 해제됨

void cal(int *ptr)
{
	int sum = 0;

	#ifdef DEBUG
		printf("배열 array로부터 받아온 매개변수: \n");

		for (int i = 0; i < 8; i++)
		{
			if (i == 7)
			{
				printf("%d ", ptr[i]);
			}
			else
			{
				printf("%d, ", ptr[i]);
			}
		}

		printf("\n\n");
	#endif

	for (int i = 0; i < 8; i++)
	{
		sum += ptr[i];

		#ifdef DEBUG
			printf("%d를 더하는 중\n", ptr[i]);
		#endif
	}

	printf("\n배열의 평균: %d\n", sum / 8);
}

int main()
{
	int array[] = { 1,2,3,4,6,7,8,9 };
	cal(array);

	return 0;
}