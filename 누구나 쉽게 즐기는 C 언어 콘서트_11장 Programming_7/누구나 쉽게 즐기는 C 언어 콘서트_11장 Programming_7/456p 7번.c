#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum game 
{ 
    scissors, rock, paper 
};

int main() 
{
    int user = 10;

    enum game com;

    srand(time(NULL));
    com = rand() % 3;

    printf("����(0), ����(1), ��(2)�� �Է��ϼ���: ");
    scanf_s("%d", &user);

    if (com == user) 
    {
        printf("�����ϴ�.");
    }
    else if (user == rock) 
    {
        if (com == paper)
        {
            printf("��ǻ��: %d, �����: %d\n", com, user);
            printf("��ǻ�� �¸�\n");
        }
        else
        {
            printf("��ǻ��: %d, �����: %d\n", com, user);
            printf("����� �¸�\n");
        }
    }
    else if (user == paper) 
    {
        if (com == scissors)
        {
            printf("��ǻ��: %d, �����: %d\n", com, user);
            printf("��ǻ�� �¸�\n");
        }
        else
        {
            printf("��ǻ��: %d, �����: %d\n", com, user);
            printf("����� �¸�\n");
        }
    }
    else
    {
        if (com == rock)
        {
            printf("��ǻ��: %d, �����: %d\n", com, user);
            printf("��ǻ�� �¸�\n");
        }
        else
        {
            printf("��ǻ��: %d, �����: %d\n", com, user);
            printf("����� �¸�\n");
        }
    }

    return 0;
}
