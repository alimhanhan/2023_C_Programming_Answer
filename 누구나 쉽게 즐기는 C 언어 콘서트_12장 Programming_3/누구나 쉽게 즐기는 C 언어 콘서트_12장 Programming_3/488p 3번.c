#include <stdio.h>

int main() 
{
    int line_cnt = 0;
    int c = 0;
    char index[100];

    FILE* fp;
    fopen_s(&fp,"file.txt", "r");

    while (fgets(index, 100, fp) != 0)
    {
        line_cnt++;
        printf("%s", index);
    }

    printf("\n\n****** 라인의 개수: %d ******\n", line_cnt);

    fclose(fp);

    return 0;
}
