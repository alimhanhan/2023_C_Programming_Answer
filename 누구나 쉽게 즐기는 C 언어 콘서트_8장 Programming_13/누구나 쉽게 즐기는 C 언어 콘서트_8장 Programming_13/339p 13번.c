#include <stdio.h>

int show_digit(int x) 
{
    int num = x % 10;

    if (num == 0 && x == 0)
    {
        return;
    }
    else
    {
        show_digit((x - num) / 10);
    }

    printf("%d ", num);
}

int main() 
{
    int n = 0;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);

    show_digit(n);

    return 0;
}