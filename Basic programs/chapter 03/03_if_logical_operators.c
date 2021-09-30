#include <stdio.h>

int main()
{
    int age;
    int vippass = 0;
    vippass = 1;

    printf("Enter your age \n");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || vippass == 1)
    {
        printf("you are above 18 and below 70, you can drive");
    }
    else
    {
        printf("you cannot drive \n");
    }

    if (age == 50)
    {
        printf("Half Century \n");
    }
    return 0;
}