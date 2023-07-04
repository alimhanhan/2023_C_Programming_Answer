#include <stdio.h>

int main()
{
	struct email
	{
		char sender[20];
		char receiver[20];
		char text[50];
		char title[20];
		char date[20];
	};

	struct email user =
	{
		"AA", "BB", "Let's meet at 7 pm on monday.", "Time to meet", "2021.02.04"
	};

	printf(" from. %s\n", user.sender);
	printf("-天天天天天天天天天天天天天天天天天天-------------\n");
	printf("| Title: %s                            |\n", user.title);
	printf("|                                                |\n");
	printf("| %s                  |\n", user.text);
	printf("|                                                |\n");
	printf("|                                      %s|\n", user.date);
	printf("-天天天天天天天天天天天天天天天天天天-------------\n");
	printf("                                       To. %s\n", user.receiver);

	return 0;
}