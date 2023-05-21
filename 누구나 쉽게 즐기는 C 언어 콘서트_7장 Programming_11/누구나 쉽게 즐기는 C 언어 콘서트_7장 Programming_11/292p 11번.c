#include <stdio.h>

int main()
{
	int num;
	int array[100];
	int new[100] = { 0 };

	printf("입력할 정수의 개수(100개 이내로): ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 요소를 입력하시오: ", i);
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < num; i++)
	{
		new[array[i]] += 1;
	}

	printf("\n");

	for (int a = 0; a <= num; a++)
	{
		if (new[a] != 0)
		{
			printf("%d 값은 %d번 등장\n", a, new[a]);
		}
	}

	return 0;
}