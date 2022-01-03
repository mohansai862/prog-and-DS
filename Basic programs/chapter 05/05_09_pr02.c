#include <stdio.h>
float convert(float c);

int main()
{
    float c;
    printf("Enter the value of c\n");
    scanf("%f", &c);
    printf("converting from celsius to fahrenheit is %f", convert(c));
    return 0;
}

float convert(float c)
{
    float f;
    f = c * (9.0 / 5.0) + 32.0;
    return f;
}
