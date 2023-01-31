#include <stdio.h>

int main()
{
	int age, id, manu;
	double stars;
	char word;

	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);
	printf("나이: %d\n", age);

	printf("직원 아이디를 입력하시오: ");
	scanf_s("%d", &id);
	printf("아이디: %d\n", id);

	printf("생산량을 입력하시오: ");
	scanf_s("%d", &manu);
	printf("생산량: %d\n", manu);

	printf("별의 개수을 입력하시오: ");
	scanf_s("%lf", &stars);
	printf("별의 개수: %e\n", stars);

	printf("글자를 입력하시오: ");

	getchar();
	word = getchar();

	printf("글자: %c", word);

	return 0;
}