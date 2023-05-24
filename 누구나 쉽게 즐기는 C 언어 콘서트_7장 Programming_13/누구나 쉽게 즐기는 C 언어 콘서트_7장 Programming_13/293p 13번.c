#include<stdio.h>

int main() 
{
    int seat[10] = { 0 };
    int reg;
    char book;

    for(;;)
    {
        printf("좌석을 예약하시겠습니까?(y 또는n): ");
        scanf_s(" %c", &book);

        if ('y' == book)
        {
            printf("몇번째 좌석을 예약하시겠습니까?: ");
            scanf_s("%d", &reg);

            if (seat[reg - 1] == 1)
            {
                printf("이미 예약된 좌석입니다.\n");
            }
            else 
            {
                seat[reg - 1] = 1;
                printf("예약되었습니다.\n");

                printf("---------------------------------\n");
                printf("  1  2  3  4  5  6  7  8  9  10\n");
                printf("---------------------------------\n");

                for (int i = 0; i < 10; i++)
                {
                    printf("  %d", seat[i]);
                }

                printf("\n");
            }
        }
        else 
        {
            break;
        }
    }

    return 0;
}
