#include <stdio.h>
#include <string.h>

int main()
{
	int change = 0;

	char one[20];
	char two[20];
	char get_one[100];
	char get_two[100];

	FILE* file1;
	FILE* file2;

	printf("ù ��° ���ϸ�: ");
	gets_s(one, 20);

	printf("�� ��° ���ϸ�: ");
	gets_s(two, 20);

	fopen_s(&file1, one, "r");
	fopen_s(&file2, two, "r");

	while (!feof(file1))
	{
		fgets(get_one, 100, file1);
		fgets(get_two, 100, file2);

		if (strcmp(get_one, get_two) != 0)
		{
			printf("\n�ٸ� �κ�: %s�� %s\n", get_one, get_two);
			change = 1;
		}
	}

	if (change == 0)
	{
		printf("\n�� ������ ���� �����ϴ�.\n");
	}

	fclose(file1);
	fclose(file2);

	return 0;
}