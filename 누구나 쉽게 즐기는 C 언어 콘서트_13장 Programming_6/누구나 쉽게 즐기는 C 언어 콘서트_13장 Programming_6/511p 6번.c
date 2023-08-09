#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct course
	{
		char subject[30];
		double marks;
	};

	int num = 0;

	printf("구조체 개수: ");
	scanf_s("%d", &num);
	printf("\n");

	struct course* ptr;
	ptr = (struct course*)malloc(sizeof(struct course) * num);

	for (int i = 0; i < num; i++)
	{
		rewind(stdin);
		printf("과목명을 입력하시오: ");
		gets_s(ptr[i].subject, 30);

		printf("성적을 입력하시오: ");
		scanf_s("%lf", &ptr[i].marks);
	}

	printf("\n--------------- 정보 출력 ---------------\n");
	for (int i = 0; i < num; i++)
	{
		printf("%s : %.2lf\n", ptr[i].subject, ptr[i].marks);
	}

	free(ptr);
	return 0;
}