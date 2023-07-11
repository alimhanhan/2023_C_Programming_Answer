#include <stdio.h>

int main()
{
	int c;
	int n = 0;
	int i = 0;
	int sum = 0;
	int average = 0;

	FILE* fp;
	fopen_s(&fp, "numbers.txt", "r");

	while (fscanf_s(fp, "%d", &n) != EOF)
	{
		sum += n;
		i++;
	}

	average = sum / i;

	printf("정수 개수: %d\n", i);
	printf("정수 합: %d\n", sum);
	printf("평균: %d\n", average);

	fclose(fp);

	return 0;
}