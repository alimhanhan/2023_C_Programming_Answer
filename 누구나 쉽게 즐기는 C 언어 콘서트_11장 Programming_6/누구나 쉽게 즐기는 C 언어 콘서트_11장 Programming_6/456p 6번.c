#include <stdio.h>
#include <string.h>

struct system
{
	char name[10];
	int price;
	int num;
	int total;
};

int main()
{
	struct system A[100] =
	{
		{ "Apple", 1000, 3, 3000 },
		{ "Banana", 1200, 2, 2400 },
		{ "Plum", 2000, 5, 10000 }
	};

	char input[10];

	printf("검색하실 상품명을 입력해 주세요: ");
	gets_s(input, 10);
	
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(input, A[i].name) == 0)
		{
			printf("=========================\n");
			printf("상품명: %s\n", A[i].name);
			printf("상품 가격: %d\n", A[i].price);
			printf("상품 개수: %d\n", A[i].num);
			printf("=========================\n");
		}
	}

	return 0;
}