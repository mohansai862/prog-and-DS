#include <stdio.h>
#include <math.h>

int main()
{
    int principle = 100, rate = 4, years = 1;
    float simpleinterest = (float)(principle * rate * years) / 100;

    printf("Simple Interest = %f\n", simpleinterest);

    float compoundinterest = principle * pow((1 + rate / 100), years);
    printf("Compound Interest = %f", compoundinterest);
    return 0;
}