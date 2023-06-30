#include <stdio.h>
#include <string.h>

char username[10];
char usercoun[20];

int main()
{
	char sayhello[] = { "안녕하세요!" };
	char bye[] = { "님, 다음에 다시 만나요!" };
	char name[] = { "제 이름은 AL이에요. 당신의 이름은 무엇인가요?" };
	char saynamehello[] = {"님 반갑습니다^^"};
	char country[] = { "저는 한국에서 왔어요." };
	char ask_country[] = { "님은 모국이 어디신가요?" };
	char hello_country[] = { "님은 한국인이시군요!" };
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