#include <stdio.h>
void address(int a);
int main()
{
    int i;
    address(i);
    printf("The address of i is %u\n", &i);
    return 0;
}
void address(int a)
{
    printf("The address of a is %u\n", &a);
}