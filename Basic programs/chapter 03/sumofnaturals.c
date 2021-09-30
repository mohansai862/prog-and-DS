#include <stdio.h>

int main()
{
    int n, sum;

    printf("enter the value\n");
    scanf("%d", &n);

    sum = (n * (n + 1) / 2);

    printf("sum of natural numbers %d\n", sum);
    return 0;
}