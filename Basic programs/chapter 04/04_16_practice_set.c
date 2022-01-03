#include <stdio.h>

int main()
{
    int i, n = 8, factorial = 1; //--> large numbers won't support.

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("the factorial of %d is %d", n, factorial);
    return 0;
}