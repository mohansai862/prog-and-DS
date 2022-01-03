#include <stdio.h>

int main()
{
    int j;
    printf("Enter any number: ");
    scanf("%d", &j);
    if (j & 1)
    {
        printf("LSB of %d is set (1).", j);
    }
    else
    {
        printf("LSB of %d is unset (0).", j);
    }
    return 0;
}
