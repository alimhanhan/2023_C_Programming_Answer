#include <stdio.h>
#include <string.h>

int main()
{
	int ok = 0;
	char chiper[100];

	while (ok < 1)
	{
		int number = 0;	   // ���� ����
		int char_1 = 0;    // ���� �ҹ��� ����
		int char_2 = 0;    // ���� �빮�� ����

		printf("��ȣ�� �����Ͻÿ�: ");
		gets_s(chiper, 100);

		for (int i = 0; i < strlen(chiper); i++)
		{
			if ('0' <= chiper[i] && chiper[i] <= '9')
			{
				number++;
			}
			else if ('a' <= chiper[i] && chiper[i] <= 'z')
			{
				char_1++;
			}
			else if ('A' <= chiper[i] && chiper[i] <= 'Z')
			{
				char_2++;
			}
		}

		if (number > 0 && char_1 > 0 && char_2 > 0)
		{
			printf("������ ��ȣ�Դϴ�.\n");
			ok++;
		}
		else if (number == 0)
		{
			printf("��ȣ�� ���ڸ� �����ؾ� �մϴ�. ��ȣ�� �ٽ� �����ϼ���.\n");
		}
		else if (char_1 == 0)
		{
			printf("��ȣ�� ���� �ҹ��ڸ� �����ؾ� �մϴ�. ��ȣ�� �ٽ� �����ϼ���.\n");
		}
		else if (char_2 == 0)
		{
			printf("��ȣ�� ���� �빮�ڸ� �����ؾ� �մϴ�. ��ȣ�� �ٽ� �����ϼ���.\n");
		}
	}

	return 0;
}