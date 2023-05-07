#include <stdio.h>

void main()
{
    double pi = 0.0;
    int tog = 1;
    int num;       

    printf("¹Ýº¹ È½¼ö: ");
    scanf_s("%d", &num);

    for (int i = 1; i < num * 2; i += 2)
    {
        pi += (double)tog * 4 / i;
        tog *= -1;
    }

    printf("Pi: %.3lf\n", pi);

    return 0;
}