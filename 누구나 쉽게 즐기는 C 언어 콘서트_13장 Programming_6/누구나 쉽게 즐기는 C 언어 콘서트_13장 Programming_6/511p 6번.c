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

	printf("����ü ����: ");
	scanf_s("%d", &num);
	printf("\n");

	struct course* ptr;
	ptr = (struct course*)malloc(sizeof(struct course) * num);

	for (int i = 0; i < num; i++)
	{
		rewind(stdin);
		printf("������� �Է��Ͻÿ�: ");
		gets_s(ptr[i].subject, 30);

		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%lf", &ptr[i].marks);
	}

	printf("\n--------------- ���� ��� ---------------\n");
	for (int i = 0; i < num; i++)
	{
		printf("%s : %.2lf\n", ptr[i].subject, ptr[i].marks);
	}

	free(ptr);
	return 0;
}