#include <stdio.h>
#include <string.h>

int main()
{
    int exits = 0;
    char x[20];
    char y[20];

	FILE* one_fp;
    FILE* two_fp;

	printf("ù ��° ���ϸ�: ");
    gets_s(x, 20);

    printf("�� ��° ���ϸ�: ");
    gets_s(y, 20);

    fopen_s(&one_fp, x, "r");
    fopen_s(&two_fp, y, "r");

    while (!feof(one_fp)) 
    {
        if (fgetc(one_fp) != fgetc(two_fp)) //�� ������ �ٸ� ���
        {
            exits = 1;   
        }
    }

    if (exits == 0)
    {
        printf("\n�� ������ ���� �����ϴ�.\n");
    }
    else
    {
        printf("\n�� ������ ���� �ٸ��ϴ�.\n");
    }

    fclose(one_fp);
    fclose(two_fp);

	return 0;
}