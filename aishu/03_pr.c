#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, marks4, marks5;
    printf("marks1: \n");
    scanf("%f", &marks1);
    printf("marks2: \n");
    scanf("%f", &marks2);
    printf("marks3: \n");
    scanf("%f", &marks3);
    printf("marks4: \n");
    scanf("%f", &marks4);
    printf("marks5: \n");
    scanf("%f", &marks5);

    float total = marks1 + marks2 + marks3 + marks4 + marks5;
    printf("Total marks: %f\n", total);

    float avg = (float)(total) / 5;
    printf("average: %f\n", avg);

    float percentage = (float)(total) / 500 * 100;
    printf("percentage: %f\n", percentage);

    return 0;
}