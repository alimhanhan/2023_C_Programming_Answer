#include <stdio.h>
#include <string.h>

int main() 
{
    char array[100];

    printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
    gets_s(array, 100);

    printf("������ ���ŵ� �ؽ�Ʈ: ");

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
