#include <stdio.h>

int main()
{
    int i = 1;
    int *j;
    j = &i;

    printf("The address the variable is %u\n", j);
    printf("The value of the variable is %u\n", *j);
    return 0;
}