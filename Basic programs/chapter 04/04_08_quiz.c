#include <stdio.h>

int main()
{
    int a, N;

    printf("enter the value of N\n");
    scanf("%d", &N);

    for (a = 1; a <= N; a++)
    {
        printf("%d\n", a);
    }
    return 0;
}