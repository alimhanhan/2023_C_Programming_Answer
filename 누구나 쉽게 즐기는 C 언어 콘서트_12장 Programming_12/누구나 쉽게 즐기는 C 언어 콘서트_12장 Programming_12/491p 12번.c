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
    printf("1. �߰�\n");
    printf("2. ���\n");
    printf("3. �˻�\n");
    printf("4. ����\n");
    printf("======================\n");

    while (1)
    {
        printf("\n������ �Է��Ͻÿ�: ");
        scanf_s("%d", &choose);
        getchar();
        printf("\n");

        if (choose == 1)  // ���� �߰�
        {
            char user_input[100];
         
            fopen_s(&fp, "db.txt", "a");
            printf("������: ");
            rewind(stdin);
            gets_s(user_input, 100);
            fprintf(fp, "������: %s\n", user_input);
            fclose(fp);

            fopen_s(&fp, "db.txt", "a");
            printf("����: ");
            rewind(stdin);
            gets_s(user_input, 100);
            fprintf(fp, "����: %s\n", user_input);
            fclose(fp);

            fopen_s(&fp, "db.txt", "a");
            printf("���ǻ�: ");
            rewind(stdin);
            gets_s(user_input, 100);
            fprintf(fp, "���ǻ�: %s\n", user_input);
            fprintf(fp, "\n");
            fclose(fp);

            printf("\n");
        }
        else if (choose == 2)  // ���� ���
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
        else if (choose == 3)  // ���� �˻�
        {
            printf("�������� �Է��ϼ���: ");
            rewind(stdin);
            gets_s(book, 100);
            
            char str3[100] = "������: ";
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
        else  // ����
        {
            printf("\n���α׷��� �����մϴ�.\n");

            break;
        }
    }

    return 0;
 }