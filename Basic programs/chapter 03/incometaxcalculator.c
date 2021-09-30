#include <stdio.h>
// how to validate if the resulted tax is float?
int main()
{
    float income, taxpercentage;
    int tax;

    printf("enter your income\n");
    scanf("%f", &income);

    printf("enter your taxpercentage\n");
    scanf("%f", &taxpercentage);

    tax = income * (taxpercentage / 100);

    printf("the tax to be paid %d \n", tax);

    if (tax % 2 == 0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    return 0;
}