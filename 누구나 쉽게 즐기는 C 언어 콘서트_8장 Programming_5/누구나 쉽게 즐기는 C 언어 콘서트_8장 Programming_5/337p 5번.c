#include <stdio.h>

void prime() 
{
    int p = 0;
    int k = 0;

    for (p = 2; p < 100; p++) 
    {
        for (k = 2; k < p; k++) 
        {
            if (p % k == 0)
            {
                break;
            }
        }

        if (p == k) 
        {
            printf("%d ", p);
        }
    }
}

void main() 
{
    prime();
    
    return 0;
}