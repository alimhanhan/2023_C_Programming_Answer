#include <stdio.h>

int main()
{
	int i = 0;
	char yes_or_no;

	union student
	{
		char number[50];
		char student_number[50];
		char name[50];
		char phone[50];
	};

	union student user[100];

	printf("학생이십니까?: ");
	scanf_s("%c", &yes_or_no);

	if (yes_or_no == 'y')    //학생일 경우
	{
		printf("성함을 입력해 주세요: ");
		rewind(stdin);
		gets_s(user[i].name, 50);

		printf("학번을 입력해 주세요: ");
		rewind(stdin);
		gets_s(user[i].student_number, 50);

		printf("전화번호를 입력해 주세요: ");
		rewind(stdin);
		gets_s(user[i].phone, 50);
	}
	else    //학생 신분이 아닐 경우
	{
		printf("성함을 입력해 주세요: ");
		rewind(stdin);
		gets_s(user[i].name, 50);

		printf("주민등록 번호를 입력해 주세요: ");
		rewind(stdin);
		gets_s(user[i].number, 50);

		printf("전화번호를 입력해 주세요: ");
		rewind(stdin);
		gets_s(user[i].phone, 50);
	}

	return 0;
}