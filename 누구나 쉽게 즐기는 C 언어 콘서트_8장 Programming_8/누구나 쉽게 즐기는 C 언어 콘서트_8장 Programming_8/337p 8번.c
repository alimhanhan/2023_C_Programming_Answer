#include<stdio.h>
#include<math.h>

void cal(double a, double b, double c) 
{
    if (b * b - 4 * a * c > 0) 
    {
        double one = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double two = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

        printf("첫 번째 근 = %.4lf\n", one);
        printf("두 번째 근 = %.4lf\n", two);
    }
    else
    {
        printf("근이 존재하지 않습니다.");
    }
}

int main() 
{
    double x, y, z;

    printf("2차 방정식의 계수를 입력하시오:\n");
    printf("a: ");
    scanf_s("%lf", &x);
    printf("b: ");
    scanf_s("%lf", &y);
    printf("c: ");
    scanf_s("%lf", &z);

    cal(x, y, z);

    return 0;
}
