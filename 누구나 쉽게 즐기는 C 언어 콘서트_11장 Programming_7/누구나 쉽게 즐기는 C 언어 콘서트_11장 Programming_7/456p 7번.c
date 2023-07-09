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

    printf("가위(0), 바위(1), 보(2)를 입력하세요: ");
    scanf_s("%d", &user);

    if (com == user) 
    {
        printf("비겼습니다.");
    }
    else if (user == rock) 
    {
        if (com == paper)
        {
            printf("컴퓨터: %d, 사용자: %d\n", com, user);
            printf("컴퓨터 승리\n");
        }
        else
        {
            printf("컴퓨터: %d, 사용자: %d\n", com, user);
            printf("사용자 승리\n");
        }
    }
    else if (user == paper) 
    {
        if (com == scissors)
        {
            printf("컴퓨터: %d, 사용자: %d\n", com, user);
            printf("컴퓨터 승리\n");
        }
        else
        {
            printf("컴퓨터: %d, 사용자: %d\n", com, user);
            printf("사용자 승리\n");
        }
    }
    else
    {
        if (com == rock)
        {
            printf("컴퓨터: %d, 사용자: %d\n", com, user);
            printf("컴퓨터 승리\n");
        }
        else
        {
            printf("컴퓨터: %d, 사용자: %d\n", com, user);
            printf("사용자 승리\n");
        }
    }

    return 0;
}
