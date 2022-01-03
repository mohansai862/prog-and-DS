#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("8 * %d = %d\n", i, 8 * i);
    }
        
    for (int i = 1; i <= 10; i++)
    {
        sum += 8 * i;
    }

    printf("the value of the sum is %d", sum);
    return 0;
}

