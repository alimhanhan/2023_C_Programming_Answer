#include<stdio.h>
#include <stdlib.h>

int main() 
{
    int array[6] = { 0 };

    srand(time(NULL));

    for (int i = 0; i < 60000; i++) 
    {
        int m = rand() % 6;

        array[m]++;
    }

    printf("=============================\n");
    printf("주사위면                 빈도\n");
    printf("=============================\n");

    for (int i = 0; i < 6; i++) 
    {
        printf("   %d                     %d\n", i + 1, array[i]);
    }

    return 0;
}
