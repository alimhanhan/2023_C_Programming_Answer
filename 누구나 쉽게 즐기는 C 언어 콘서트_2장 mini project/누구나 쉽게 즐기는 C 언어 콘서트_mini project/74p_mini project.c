#include <stdio.h>

int main()
{
	int how_many_days = 0;
	int flight_cost = 0;
	int hotel_cost = 0;
	int one_day_money = 0;

	printf("여행은 몇박인가요?: ");
	scanf_s("%d", &how_many_days);

	printf("항공권 가격: ");
	scanf_s("%d", &flight_cost);

	printf("호텔 1박 가격: ");
	scanf_s("%d", &hotel_cost);

	printf("하루에 필요한 용돈: ");
	scanf_s("%d", &one_day_money);

	int total = how_many_days * hotel_cost + one_day_money * (how_many_days + 1) + flight_cost;

	printf("=============================\n");
	printf("총 여행 비용: %d \n", total);
	printf("=============================");

	return 0;
}