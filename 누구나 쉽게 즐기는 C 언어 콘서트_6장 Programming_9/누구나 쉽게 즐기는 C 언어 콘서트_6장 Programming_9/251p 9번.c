#include <stdio.h>

int main()
{
	char word;
	int sum = 0;

	for (;;)
	{
		printf("���ڸ� �Է��Ͻÿ�(����� .): ");
		word = getchar();
		getchar();	//�� �ڵ尡 ������ "���ڸ� �Է��Ͻÿ�(����� .): "�� 2���� ��µȴ�.

		if (word == 'a')
		{
			sum++;
		}

		if (word == '.')
		{
			break;
		}
	}

	printf("\na�� ����: %d", sum);

	return 0;
}