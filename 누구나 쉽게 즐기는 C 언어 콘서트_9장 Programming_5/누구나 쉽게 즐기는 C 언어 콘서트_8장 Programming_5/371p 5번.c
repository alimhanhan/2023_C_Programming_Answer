#include <stdio.h>
#define WIDTH 3
#define HEIGHT 3

int plus[WIDTH * HEIGHT] = { 0 };

void brighten_image(int* p, int w, int h)
{
	plus[w + WIDTH * h]++;
	p[w + WIDTH * h] = plus[w + WIDTH * h];
}

void output_array(int* q)
{
	for (int i = 0; i < (HEIGHT * WIDTH); i++)
	{
		if (i % 3 == 0 && i != 0)
		{
			printf("\n");
		}
		printf("%d ", q[i]);
	}
}

int main()
{
	int image[HEIGHT * WIDTH] = { 0 };
	int x, y;

	printf("=============== 변경 전 픽셀 ===============\n");
	output_array(image);

	while (1)
	{
		printf("\n변경할 픽셀을 입력하시오(종료는 '100'): ");
		scanf_s("%d %d", &x, &y);

		if (x == 100 && y == 100)
		{
			printf("\n프로그램을 종료합니다.\n");
			break;
		}

		brighten_image(image, x, y);

		printf("\n=============== 변경 후 픽셀 ===============\n");
		output_array(image);
	}

	return 0;
}