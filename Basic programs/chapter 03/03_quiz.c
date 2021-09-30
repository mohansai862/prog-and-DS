#include <stdio.h>

int main()
{
    int marks;

    printf("marks\n");
    scanf("%d", &marks);

    // if (marks >= 90)
    // {
    //     printf("secures A grade");
    // }
    // else if (marks >= 80)
    // {
    //     printf("secures B grade");
    // }
    // else if (marks >= 70)
    // {
    //     printf("secures C grade");
    // }
    // else if (marks < 70)
    // {
    //     printf("secures D grade");
    // }

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("your grade is A\n");
        break;

    case 8:
        printf("your grade is B\n");
        break;

    case 7:
        printf("your grade is C\n");
        break;

    case 6:
        printf("your grade is D\n");
        break;

    default:
        printf("your grade is F\n");
        printf("");
        break;
    }
    return 0;
}