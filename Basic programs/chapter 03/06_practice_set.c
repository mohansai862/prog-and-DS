#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("enter your four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%f is big", a);
            }
            else
            {
                printf("%f is big", d);
            }
        }
    }

    else if (b > c)
    {
        if (b > d)
        {
            printf("%f is big", b);
        }
        else
        {
            printf("%f is big", d);
        }
    }

    else if (c > d)
    {
        printf("%f is big", c);
    }
    else
    {
        printf("%f is big", d);
    }

    return 0;
}