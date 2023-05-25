#include<stdio.h>
#include <stdlib.h>

int main() 
{
    char tile[10] = { '_','_','_','_','_','*','_','_','_','_' };
    int STAR = 5;
    int way = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) 
    {
        printf("%c ", tile[i]);
    }

    printf("\n");
    _getch();

    for (int k = 0; k < 10; k++) 
    {
        way = rand() % 2;

        if (way == 0) 
        { 
            if (STAR == 0)
            {
                continue;
            }

            tile[STAR] = '_';
            tile[--STAR] = '*';
        }
        else 
        {
            if (STAR == 9)
            {
                continue;
            }

            tile[STAR] = '_';
            tile[++STAR] = '*';
        }

        for (int a = 0; a < 10; a++) 
        {
            printf("%c ", tile[a]);
        }

        printf("\n");
        _getch();
    }
    return 0;
}
