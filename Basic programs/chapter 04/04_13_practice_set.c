#include <stdio.h>

int main()
{
    int m, n;

    printf("enter an integer: ");
    scanf("%d", &m);

    for (n = 12; n; n--)
    {
        printf("%d * %d = %d\n", m, n, m * n);
    }
    return 0;
}