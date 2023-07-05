#include <stdio.h>

struct add 
{
    float x;
    float y;
};

void calculate(struct add a, struct add b)
{
    printf("%.1f + %.1fi\n", a.x + b.x, a.y + b.y);
}

int main() 
{
    struct add a;
    struct add b;

    printf("첫 번째 복소수를 입력하시오(a,b):");
    scanf_s("%f %f", &a.x, &a.y);

    printf("두 번째 복소수를 입력하시오(a,b):");
    scanf_s("%f %f", &b.x, &b.y);

    calculate(a, b);

    return 0;
}
