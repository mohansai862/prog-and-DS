#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("enter the value of n\n");
    scanf("%d", &n);

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }

    do
    {
        sum += i;
        i++;
    } while (i <= n);

        printf("The value of sum (1 to 10) is %d", sum);
    return 0;
}