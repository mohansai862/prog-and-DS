#include <stdio.h>
void change(int ptr);

int main()
{
    int a;
    printf("Enter the value of a: \n");
    scanf("%d", &a);

    printf("The current value of a is %d\n", a);

    change(a);
    printf("now, the value of a is %d\n", a);
    return 0;
}
void change(int ptr)
{
    (ptr) *= 10;
}