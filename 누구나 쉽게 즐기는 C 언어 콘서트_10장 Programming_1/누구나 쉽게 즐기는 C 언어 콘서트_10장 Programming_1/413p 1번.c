#include <stdio.h>
#include <string.h>

int main() 
{
    char string_array[10];
    char cnt_array[26] = { 0 };

    printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
    gets_s(string_array, 10);

    for (int k = 'a', i = 0; i < strlen(string_array) / sizeof(char); k++, i++) 
    {
        cnt_array[string_array[i] - 97]++;
    }

    for (int p = 'a', i = 0; i < 26; p++, i++) 
    {
        if (cnt_array[i] != 0) 
        {
            printf("%c���ڰ� %d�� �����Ͽ����ϴ�.\n", p, cnt_array[i]);
        }
        else 
        {
            continue;
        }
    }

    return 0;
}
