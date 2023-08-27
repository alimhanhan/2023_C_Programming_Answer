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
            printf("������ �� �� �����ϴ�.\n");
            return 1;
        }

        while (1) 
        {
            if (feof(fp1) != 0) 
            {
                printf("���簡 �Ϸ�Ǿ����ϴ�.\n");
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
        printf("���α׷� �μ��� �������� �ʽ��ϴ�.\n");
        return 1;
    }

    return 0;
}