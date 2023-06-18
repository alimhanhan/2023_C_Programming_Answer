#include <stdio.h>
#include <string.h>

int main() 
{
    char array[100];

    printf("텍스트를 입력하시오: ");
    gets_s(array, 100);

    printf("공백이 제거된 텍스트: ");

    for (int i = 0; i < strlen(array); i++) 
    {
        if (array[i] == ' ' && array[i + 1] == ' ') 
        {
            continue;
        }

        printf("%c", array[i]);
    }

    return 0;
}
