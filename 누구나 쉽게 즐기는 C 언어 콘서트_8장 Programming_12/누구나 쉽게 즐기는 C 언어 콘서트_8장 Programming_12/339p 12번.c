#include <stdio.h>

static int sum = 0;

void save(int amount)
{
	sum += amount;

	printf("지금까지의 저축액은 %d입니다.\n", sum);
}

void draw(int amount)
{
	sum -= amount;

	printf("지금까지의 저축액은 %d입니다.\n", sum);
}

int main()
{
	int num = 0;

	while (1)
	{
		int choose = 0;

		printf("\n저축(1)과 인출(0) 중 무엇을 하시겠습니까?(종료는 -1): ");
		scanf_s("%d", &choose);

		if (choose == -1)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else if (choose == 0)
		{
			printf("얼마를 인출하시겠습니까?(종료는 -1): ");
			scanf_s("%d", &num);

			draw(num);
		}
		else
		{
			printf("얼마를 저축하시겠습니까?(종료는 -1): ");
			scanf_s("%d", &num);

			save(num);
		}
	}

	return 0;
}