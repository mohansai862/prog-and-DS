#include <stdio.h>

int main()
{
    // float a;
    int a;
    scanf("%d", &a);

    while (a < 10)
    {
        // a = 11;
        // while (a >10){ --> these two lines will lead to an infinite loop
        printf("%d \n", a);
        a++;
    }
    return 0;
}