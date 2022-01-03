#include <stdio.h>

int main()
{
    // for (int a = 0; a < 10; a++) // -->incrementing of for loop
    for (int a = 5; a; a--) // -->decrementing of for loop
    {
        printf("the value of a is %d\n", a);
    }
    return 0;
}