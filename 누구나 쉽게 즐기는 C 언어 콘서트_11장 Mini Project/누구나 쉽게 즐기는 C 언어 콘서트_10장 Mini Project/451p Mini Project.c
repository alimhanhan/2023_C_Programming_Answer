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
		printf("1. 도서 번호로 책 찾기\n");
		printf("2. 저자 이름으로 책 찾기\n");
		printf("3. 제목으로 책 찾기\n");
		printf("4. 새로운 책 추가\n");
		printf("5. 도서관이 소장한 도서의 수 표시\n");
		printf("6. 퇴장\n");
		printf("=================================\n");
		printf("메뉴 중 하나를 선택하시오: ");
		scanf_s("%d", &num);

		if (num == 1)    //도서 번호로 도서 찾기
		{
			printf("도서 번호를 입력하시오: ");
			scanf_s("%d", &book_number);

			printf("도서 번호: %d 저자: %s 제목: %s\n", book[book_number-1].number, book[book_number-1].writer, book[book_number-1].title);
		}
		else if (num == 2)    //저자 이름으로 도서 찾기
		{
			printf("저자 이름을 입력하시오: ");
			rewind(stdin);    //gets_s 입력이 무시될 때 추가
			gets_s(writer_search, 100);

			for (int i = 0; i < how_many_books; i++)
			{
				if (strcmp(book[i].writer, writer_search) == 0)
				{
					printf("도서 번호: %d 저자: %s 제목: %s\n", book[i].number, book[i].writer, book[i].title);
				}
			}
		}
		else if (num == 3)    //제목으로 도서 찾기
		{
			printf("도서 이름을 입력하시오: ");
			rewind(stdin);    //gets_s 입력이 무시될 때 추가
			gets_s(title_search, 100);

			for (int i = 0; i < how_many_books; i++)
			{
				if (strcmp(book[i].title, title_search) == 0)
				{
					printf("도서 번호: %d 저자: %s 제목: %s\n", book[i].number, book[i].writer, book[i].title);
				}
			}
		}
		else if (num == 4)    //새로운 도서 추가
		{
			int k = 0;
			book[how_many_books].number = how_many_books + 1;

			rewind(stdin);    //gets_s 입력이 무시될 때 추가
			printf("도서 저자를 입력하시오: ");
			gets_s(book[how_many_books].writer, 100);

			rewind(stdin);    //gets_s 입력이 무시될 때 추가
			printf("도서 제목을 입력하시오: ");
			gets_s(book[how_many_books].title, 100);

			how_many_books++;
		}
		else if (num == 5)    //도서관이 소장한 도서 수 표시
		{
			printf("현재 도서관이 소장한 도서 수는 %d개 입니다.\n", how_many_books);
		}
		else
		{
			printf("안녕히 가십시오.\n");
			break;
		}

	}

	return 0;
}