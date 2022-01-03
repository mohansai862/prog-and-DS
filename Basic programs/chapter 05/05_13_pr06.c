#include <stdio.h>
int addnumbers(int i);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    printf("sum = %d", addnumbers(num));
    return 0;
}
int addnumbers(int i)
{
    if (i != 0)
    {
        return i + addnumbers(i - 1);
    }
    else
    {
        return i;
    }
}