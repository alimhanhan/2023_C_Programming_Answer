#include <stdio.h>
#define WIDTH 3
#define HEIGHT 3

int plus[WIDTH * HEIGHT] = { 0 };

void brighten_image(int* p, int w, int h)
{
	plus[w + WIDTH * h]++;
	p[w + WIDTH * h] = plus[w + WIDTH * h];
}

void darken_image(int* p, int w, int h)
{
	plus[w + WIDTH * h]--;
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
		int choose = 0;

		printf("\n�ȼ��� ��� ���� �ɼ��� �����Ͻÿ�(���: 1, ��Ӱ�: 2, ����: 0): ");
		scanf_s("%d", &choose);

		if (choose == 0)
		{
			printf("\n���α׷��� �����մϴ�.\n");
			break;
		}

		printf("\n������ �ȼ��� �Է��Ͻÿ�(x,y): ");
		scanf_s("%d %d", &x, &y);

		if (choose == 1)
		{
			brighten_image(image, x, y);
		}
		else if (choose == 2)
		{
			darken_image(image, x, y);
		}

		printf("\n=============== ���� �� �ȼ� ===============\n");
		output_array(image);
	}

	return 0;
}