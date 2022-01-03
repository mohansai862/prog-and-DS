#include <stdio.h>

void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int i, j, sum;
    float avg;

    printf("Enter the value of i: \n");
    scanf("%d", &i);
    printf("Enter the value of j: \n");
    scanf("%d", &j);

    sumandavg(i, j, &sum, &avg);
    printf("The value of sum and avg is %d and %f\n", sum, avg);
    return 0;
}