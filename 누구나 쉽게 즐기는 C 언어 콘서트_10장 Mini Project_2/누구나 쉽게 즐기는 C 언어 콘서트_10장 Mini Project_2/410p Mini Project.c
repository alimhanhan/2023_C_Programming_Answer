#include <stdio.h>
#include <string.h>
int main()
{
    int cnt = 0;
    char arr[100];

    printf("문자열을 입력하시오: ");
    gets_s(arr, 100);
    
    for (int i = 0; i < strlen(arr); i++)
    {
        cnt++;

        if (arr[i] != arr[i + 1])
        {
            printf("%c%d", arr[i], cnt);
            cnt = 0;
        }
    }

    return 0;
}