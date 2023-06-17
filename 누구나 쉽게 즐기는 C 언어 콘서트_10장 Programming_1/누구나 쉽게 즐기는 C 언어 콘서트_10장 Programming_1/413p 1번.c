#include <stdio.h>
#include <string.h>

int main() 
{
    char string_array[10];
    char cnt_array[26] = { 0 };

    printf("텍스트를 입력하시오: ");
    gets_s(string_array, 10);

    for (int k = 'a', i = 0; i < strlen(string_array) / sizeof(char); k++, i++) 
    {
        cnt_array[string_array[i] - 97]++;
    }

    for (int p = 'a', i = 0; i < 26; p++, i++) 
    {
        if (cnt_array[i] != 0) 
        {
            printf("%c문자가 %d번 등장하였습니다.\n", p, cnt_array[i]);
        }
        else 
        {
            continue;
        }
    }

    return 0;
}
