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

	printf("=============== ���� �� �ȼ� ===============\n");
	output_array(image);

	while (1)
	{
		printf("\n������ �ȼ��� �Է��Ͻÿ�(����� '100'): ");
		scanf_s("%d %d", &x, &y);

		if (x == 100 && y == 100)
		{
			printf("\n���α׷��� �����մϴ�.\n");
			break;
		}

		brighten_image(image, x, y);

		printf("\n=============== ���� �� �ȼ� ===============\n");
		output_array(image);
	}

	return 0;
}