#include <stdio.h>
#include <string.h>

int main()
{
    int exits = 0;
    char x[20];
    char y[20];

	FILE* one_fp;
    FILE* two_fp;

	printf("첫 번째 파일명: ");
    gets_s(x, 20);

    printf("두 번째 파일명: ");
    gets_s(y, 20);

    fopen_s(&one_fp, x, "r");
    fopen_s(&two_fp, y, "r");

    while (!feof(one_fp)) 
    {
        if (fgetc(one_fp) != fgetc(two_fp)) //두 파일이 다를 경우
        {
            exits = 1;   
        }
    }

    if (exits == 0)
    {
        printf("\n두 파일은 서로 같습니다.\n");
    }
    else
    {
        printf("\n두 파일은 서로 다릅니다.\n");
    }

    fclose(one_fp);
    fclose(two_fp);

	return 0;
}