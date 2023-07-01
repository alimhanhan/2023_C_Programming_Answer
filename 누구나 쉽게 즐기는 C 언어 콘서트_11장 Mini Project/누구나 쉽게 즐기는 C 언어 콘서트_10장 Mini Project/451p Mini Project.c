#include <stdio.h>
#include <string.h>

struct Lib {
	int number;
	char writer[100];
	char title[100];
};

int main()
{
	int num = 0;
	int how_many_books = 2;
	char writer_search[100];
	char title_search[100];

	struct Lib book[200];

	book[0].number = 1;
	strcpy_s(book[0].writer, 20, "Mina");
	strcpy_s(book[0].title, 20, "Life of lion");
		
	book[1].number = 2;
	strcpy_s(book[1].writer, 20, "David");
	strcpy_s(book[1].title, 20, "Flower World");

	while (1)
	{
		int book_number = 0;
		int new_book_number = 0;

		printf("\n=================================\n");
		printf("1. ���� ��ȣ�� å ã��\n");
		printf("2. ���� �̸����� å ã��\n");
		printf("3. �������� å ã��\n");
		printf("4. ���ο� å �߰�\n");
		printf("5. �������� ������ ������ �� ǥ��\n");
		printf("6. ����\n");
		printf("=================================\n");
		printf("�޴� �� �ϳ��� �����Ͻÿ�: ");
		scanf_s("%d", &num);

		if (num == 1)    //���� ��ȣ�� ���� ã��
		{
			printf("���� ��ȣ�� �Է��Ͻÿ�: ");
			scanf_s("%d", &book_number);

			printf("���� ��ȣ: %d ����: %s ����: %s\n", book[book_number-1].number, book[book_number-1].writer, book[book_number-1].title);
		}
		else if (num == 2)    //���� �̸����� ���� ã��
		{
			printf("���� �̸��� �Է��Ͻÿ�: ");
			rewind(stdin);    //gets_s �Է��� ���õ� �� �߰�
			gets_s(writer_search, 100);

			for (int i = 0; i < how_many_books; i++)
			{
				if (strcmp(book[i].writer, writer_search) == 0)
				{
					printf("���� ��ȣ: %d ����: %s ����: %s\n", book[i].number, book[i].writer, book[i].title);
				}
			}
		}
		else if (num == 3)    //�������� ���� ã��
		{
			printf("���� �̸��� �Է��Ͻÿ�: ");
			rewind(stdin);    //gets_s �Է��� ���õ� �� �߰�
			gets_s(title_search, 100);

			for (int i = 0; i < how_many_books; i++)
			{
				if (strcmp(book[i].title, title_search) == 0)
				{
					printf("���� ��ȣ: %d ����: %s ����: %s\n", book[i].number, book[i].writer, book[i].title);
				}
			}
		}
		else if (num == 4)    //���ο� ���� �߰�
		{
			int k = 0;
			book[how_many_books].number = how_many_books + 1;

			rewind(stdin);    //gets_s �Է��� ���õ� �� �߰�
			printf("���� ���ڸ� �Է��Ͻÿ�: ");
			gets_s(book[how_many_books].writer, 100);

			rewind(stdin);    //gets_s �Է��� ���õ� �� �߰�
			printf("���� ������ �Է��Ͻÿ�: ");
			gets_s(book[how_many_books].title, 100);

			how_many_books++;
		}
		else if (num == 5)    //�������� ������ ���� �� ǥ��
		{
			printf("���� �������� ������ ���� ���� %d�� �Դϴ�.\n", how_many_books);
		}
		else
		{
			printf("�ȳ��� ���ʽÿ�.\n");
			break;
		}

	}

	return 0;
}