#include<stdio.h>

int main() 
{
    int seat[10] = { 0 };
    int reg;
    char book;

    for(;;)
    {
        printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ�n): ");
        scanf_s(" %c", &book);

        if ('y' == book)
        {
            printf("���° �¼��� �����Ͻðڽ��ϱ�?: ");
            scanf_s("%d", &reg);

            if (seat[reg - 1] == 1)
            {
                printf("�̹� ����� �¼��Դϴ�.\n");
            }
            else 
            {
                seat[reg - 1] = 1;
                printf("����Ǿ����ϴ�.\n");

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
