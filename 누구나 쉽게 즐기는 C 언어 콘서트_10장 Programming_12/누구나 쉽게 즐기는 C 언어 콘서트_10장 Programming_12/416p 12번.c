#include <stdio.h>
#include <string.h>

char username[10];
char usercoun[20];

int main()
{
	char sayhello[] = { "�ȳ��ϼ���!" };
	char bye[] = { "��, ������ �ٽ� ������!" };
	char name[] = { "�� �̸��� AL�̿���. ����� �̸��� �����ΰ���?" };
	char saynamehello[] = {"�� �ݰ����ϴ�^^"};
	char country[] = { "���� �ѱ����� �Ծ��." };
	char ask_country[] = { "���� ���� ���Ű���?" };
	char hello_country[] = { "���� �ѱ����̽ñ���!" };
	int cnt = 1;

	while (cnt != 0)
	{
		printf("> ");
		char input[100];
		gets_s(input, 100);

		for (int i = 0; i < strlen(input); i++)
		{
			if (input[i] == 'e' && input[i + 1] == 'x')
			{
				printf("%s%s\n", username, bye);
				cnt = 0;
				break;
			}
		}

		for (int i = 0; i < strlen(input); i++)
		{
			if (input[i] == 'h' && input[i + 1] == 'e' && input[i + 2] == 'l')
			{
				printf("%s\n", sayhello);
			}
			else if (input[i] == 'n' && input[i + 1] == 'a')
			{
					printf("%s\n", name);
					printf("> ");
					gets_s(username, 10);
					
					printf("%s%s\n", username, saynamehello);
			}
			else if (input[i] == 'f' && input[i + 1] == 'r' && input[i + 2] == 'o')
			{
				printf("%s\n", country);
				printf("%s%s\n", username, ask_country);

				printf("> ");
				gets_s(usercoun, 20);

				printf("%s%s\n", username, hello_country);
			}
		}
	}

	return 0;
}