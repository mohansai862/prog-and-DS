#include <stdio.h>
#include <math.h>

int main()
{
    int principle, rate, years;
    printf("Enter the values of priciple, rate and years : \n");
    scanf("%d %d %d", &principle, &rate, &years);

    float simpleinterest = (float)(principle * rate * years) / 100;

    printf("Simple Interest = %f\n", simpleinterest);

    float compoundinterest = principle * pow((1 + rate / 100), years);
    printf("Compound Interest = %f", compoundinterest);
    return 0;
}