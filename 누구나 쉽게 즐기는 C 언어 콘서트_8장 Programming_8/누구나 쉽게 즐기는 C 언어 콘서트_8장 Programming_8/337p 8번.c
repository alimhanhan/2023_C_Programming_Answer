#include<stdio.h>
#include<math.h>

void cal(double a, double b, double c) 
{
    if (b * b - 4 * a * c > 0) 
    {
        double one = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double two = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

        printf("ù ��° �� = %.4lf\n", one);
        printf("�� ��° �� = %.4lf\n", two);
    }
    else
    {
        printf("���� �������� �ʽ��ϴ�.");
    }
}

int main() 
{
    double x, y, z;

    printf("2�� �������� ����� �Է��Ͻÿ�:\n");
    printf("a: ");
    scanf_s("%lf", &x);
    printf("b: ");
    scanf_s("%lf", &y);
    printf("c: ");
    scanf_s("%lf", &z);

    cal(x, y, z);

    return 0;
}
