#include <stdio.h>
#define DEBUG  //���� 2�� �ּ�ó���ϸ� ��ũ�� ���ǰ� ������

void cal(int *ptr)
{
	int sum = 0;

	#ifdef DEBUG
		printf("�迭 array�κ��� �޾ƿ� �Ű�����: \n");

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
			printf("%d�� ���ϴ� ��\n", ptr[i]);
		#endif
	}

	printf("\n�迭�� ���: %d\n", sum / 8);
}

int main()
{
	int array[] = { 1,2,3,4,6,7,8,9 };
	cal(array);

	return 0;
}