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

    printf("ù ��° ���Ҽ��� �Է��Ͻÿ�(a,b):");
    scanf_s("%f %f", &a.x, &a.y);

    printf("�� ��° ���Ҽ��� �Է��Ͻÿ�(a,b):");
    scanf_s("%f %f", &b.x, &b.y);

    calculate(a, b);

    return 0;
}
