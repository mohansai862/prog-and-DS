#include <stdio.h>
#include <math.h>

int main()
{
    // int a; b = a; [invalid]
    int a;
    int b = a; // [valid]

    // int v = 3 ^ 3; [invalid]
    int v = pow(3, 3);

    printf("The value of 3 power 3 is %d\n", v);
    return 0;
}