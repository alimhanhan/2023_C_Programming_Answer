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

	printf("�л��̽ʴϱ�?: ");
	scanf_s("%c", &yes_or_no);

	if (yes_or_no == 'y')    //�л��� ���
	{
		printf("������ �Է��� �ּ���: ");
		rewind(stdin);
		gets_s(user[i].name, 50);

		printf("�й��� �Է��� �ּ���: ");
		rewind(stdin);
		gets_s(user[i].student_number, 50);

		printf("��ȭ��ȣ�� �Է��� �ּ���: ");
		rewind(stdin);
		gets_s(user[i].phone, 50);
	}
	else    //�л� �ź��� �ƴ� ���
	{
		printf("������ �Է��� �ּ���: ");
		rewind(stdin);
		gets_s(user[i].name, 50);

		printf("�ֹε�� ��ȣ�� �Է��� �ּ���: ");
		rewind(stdin);
		gets_s(user[i].number, 50);

		printf("��ȭ��ȣ�� �Է��� �ּ���: ");
		rewind(stdin);
		gets_s(user[i].phone, 50);
	}

	return 0;
}