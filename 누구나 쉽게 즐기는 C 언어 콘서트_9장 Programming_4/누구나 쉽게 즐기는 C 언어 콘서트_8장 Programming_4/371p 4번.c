#include <stdio.h>

void get(double value, int* i_part, double* f_part) 
{
    printf("���޹��� �Ǽ� = %lf\n", value);

    *i_part = (int)value;
    *f_part = value - *i_part;
}

int main() 
{
    double number = 3.14;
    int i = 0;
    double f = 0.0;

    get(number, &i, &f);

    printf("������ = %d\n", i);
    printf("�Ҽ��� = %lf\n", f);

    return 0;
}
