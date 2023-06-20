#include <stdio.h>
#include <string.h>

int main()
{
	int ok = 0;
	char chiper[100];

	while (ok < 1)
	{
		int number = 0;	   // 숫자 개수
		int char_1 = 0;    // 영문 소문자 개수
		int char_2 = 0;    // 영문 대문자 개수

		printf("암호를 생성하시오: ");
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
			printf("적정한 암호입니다.\n");
			ok++;
		}
		else if (number == 0)
		{
			printf("암호는 숫자를 포함해야 합니다. 암호를 다시 생성하세요.\n");
		}
		else if (char_1 == 0)
		{
			printf("암호는 영문 소문자를 포함해야 합니다. 암호를 다시 생성하세요.\n");
		}
		else if (char_2 == 0)
		{
			printf("암호는 영문 대문자를 포함해야 합니다. 암호를 다시 생성하세요.\n");
		}
	}

	return 0;
}