#include <stdio.h>

int main()
{
	char grade;

	printf("학점을 입력하시오: ");
	scanf_s("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("아주 잘했어요!");
			break;

		case 'B':
			printf("좋습니다.");
			break;

		case 'C':
			printf("만족스럽습니다.");
			break;

		case 'D':
			printf("더 노력해보세요.");
			break;

		case 'F':
			printf("안타깝습니다.");
			break;
	}

	return 0;
}