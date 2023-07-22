#include <stdio.h>
#include <string.h>

int main() 
{
    FILE* fp;
    fopen_s(&fp, "db.txt", "a");

    int choose;
    int a;
    int ret;
    char tmp[100];
    char user_input[100];
    char book[100];
    char str[100];

    fclose(fp);

    printf("======================\n");
    printf("1. 추가\n");
    printf("2. 출력\n");
    printf("3. 검색\n");
    printf("4. 종료\n");
    printf("======================\n");

    while (1)
    {
        printf("\n정수를 입력하시오: ");
        scanf_s("%d", &choose);
        getchar();
        printf("\n");

        if (choose == 1)  // 도서 추가
        {
            char user_input[100];
         
            fopen_s(&fp, "db.txt", "a");
            printf("도서명: ");
            rewind(stdin);
            gets_s(user_input, 100);
            fprintf(fp, "도서명: %s\n", user_input);
            fclose(fp);

            fopen_s(&fp, "db.txt", "a");
            printf("저자: ");
            rewind(stdin);
            gets_s(user_input, 100);
            fprintf(fp, "저자: %s\n", user_input);
            fclose(fp);

            fopen_s(&fp, "db.txt", "a");
            printf("출판사: ");
            rewind(stdin);
            gets_s(user_input, 100);
            fprintf(fp, "출판사: %s\n", user_input);
            fprintf(fp, "\n");
            fclose(fp);

            printf("\n");
        }
        else if (choose == 2)  // 도서 출력
        {
            fopen_s(&fp, "db.txt", "r");

            while (!feof(fp))
            {
                ret = fgets(str, 100, fp);

                if (ret == 0)
                {
                    break;
                }

                printf("%s", str);
            }

            fclose(fp);
        }
        else if (choose == 3)  // 도서 검색
        {
            printf("도서명을 입력하세요: ");
            rewind(stdin);
            gets_s(book, 100);
            
            char str3[100] = "도서명: ";
            strcat_s(str3, 100, book);
       
            fopen_s(&fp, "db.txt", "r");

            while (!feof(fp))
            {
                fgets(tmp, 100, fp);

                if (strstr(tmp, str3))
                {
                    printf("%s", tmp);
                    fgets(tmp, 100, fp);

                    printf("%s", tmp);
                    fgets(tmp, 100, fp);

                    printf("%s", tmp);
                    fclose(fp);

                    break;
                }
            }

            fclose(fp);
        }
        else  // 종료
        {
            printf("\n프로그램을 종료합니다.\n");

            break;
        }
    }

    return 0;
 }