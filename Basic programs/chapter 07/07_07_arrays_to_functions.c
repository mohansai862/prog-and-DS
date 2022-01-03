#include <stdio.h>

// void printarray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 5555; // This value will be changes in arr array of main as well
}
int main()
{
    int arr[] = {1, 2, 483, 4387, 9873, 433, 3479};
    printarray(arr, 7);
    return 0;
}