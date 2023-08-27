#include <stdio.h>

int main(int argc, char** argv) 
{
    if (argc == 3) 
    {
        char x;

        FILE* fp1;
        fopen_s(&fp1, argv[1], "rt");

        FILE* fp2;
        fopen_s(&fp2, argv[2], "wt");

        if (fp1 == NULL || fp2 == NULL) 
        {
            printf("파일을 열 수 없습니다.\n");
            return 1;
        }

        while (1) 
        {
            if (feof(fp1) != 0) 
            {
                printf("복사가 완료되었습니다.\n");
                break;
            }

            x = fgetc(fp1);
            fputc(x, fp2);
        }

        fclose(fp1);
        fclose(fp2);
    }
    else
    {
        printf("프로그램 인수가 존재하지 않습니다.\n");
        return 1;
    }

    return 0;
}