#include <stdio.h>

struct employee
{
	int number;
	char name[10];
	char phone[20];
	int age;
};

int main()
{
	struct employee array[10] =
	{
		{ 1, "AA", "010-1111-1111", 20},
		{ 2, "BB", "010-2222-2222", 22},
		{ 3, "CC", "010-3333-3333", 33},
		{ 4, "DD", "010-4444-4444", 44},
		{ 5, "EE", "010-5555-5555", 45},
		{ 6, "FF", "010-6666-6666", 30},
		{ 7, "GG", "010-7777-7777", 77},
		{ 8, "HH", "010-8888-8888", 37},
		{ 9, "II", "010-9999-9999", 40},
		{ 10, "JJ", "010-0000-0000", 41},
	};

	for (int i = 0; i < 10; i++)
	{
		if (array[i].age >= 20 && array[i].age <= 30)
		{
			printf("%d, %s, %s, %d\n", array[i].number, array[i].name, array[i].phone, array[i].age);
		}
	}

	return 0;
}