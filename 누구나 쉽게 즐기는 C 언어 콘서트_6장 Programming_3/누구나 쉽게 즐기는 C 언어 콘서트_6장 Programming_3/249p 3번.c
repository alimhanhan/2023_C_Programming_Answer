#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 7; i++) 
    {
        for (int a = 1; a <= i; a++) 
{
            printf("%d", a);
        }

        for (int b = 1; b <= 7 - i; b++) 
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}