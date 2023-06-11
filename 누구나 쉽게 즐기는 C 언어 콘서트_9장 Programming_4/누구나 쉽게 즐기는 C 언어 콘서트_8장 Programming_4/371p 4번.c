#include <stdio.h>

void get(double value, int* i_part, double* f_part) 
{
    printf("전달받은 실수 = %lf\n", value);

    *i_part = (int)value;
    *f_part = value - *i_part;
}

int main() 
{
    double number = 3.14;
    int i = 0;
    double f = 0.0;

    get(number, &i, &f);

    printf("정수부 = %d\n", i);
    printf("소수부 = %lf\n", f);

    return 0;
}
