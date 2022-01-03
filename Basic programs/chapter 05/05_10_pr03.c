#include <stdio.h>
float calculate(float mass);

int main()
{
    float m;
    printf("Enter the value of m:");
    scanf("%f", &m);
    printf("the value of force in newton is %.2f", calculate(m));
    return 0;
}

float calculate(float mass)
{
    float force;
    float g = 9.8;
    force = mass * g;
    return force;
}
