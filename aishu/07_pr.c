#include <stdio.h>
int main()
{
    float a, b, temp;
    printf("Enter a: \n");
    scanf("%f", &a);
    printf("Enter b: \n");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, first number = %.1f\n", a);
    printf("After swapping, second number = %.1f", b);
    return 0;
}