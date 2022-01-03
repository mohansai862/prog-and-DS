#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i
    int **k = &j; // k is another pointer which can store the pointer j

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));
    printf("The value of j is %d\n", **k);
    printf("The address of j is %u\n", k);
    printf("The address of k is %u\n", &k);
    printf("The value of k is %d\n", k);
    return 0;
}
