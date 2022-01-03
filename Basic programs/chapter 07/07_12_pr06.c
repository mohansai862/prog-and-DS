/* C program to find the count of positive and negative integers in an array */

// Function to find the count of positive and negative integers in an array
#include <stdio.h>
// Function to find the count of positive integers in an array
int countpositivenumbers(int *arr, int n)
{
    int pos_count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos_count++;
        }
    }
    return pos_count;
}
// Function to find the count of negative integers in an array
int countnegativenumbers(int *arr, int n)
{
    int neg_count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg_count++;
        }
    }
    return neg_count;
}
// function to print the array
void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("array: %d\n", arr[i]);
    }
}
// driver program
int main()
{
    int arr[] = {2, -2, 3, -7, 8, 1};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);
    printf("count of positive elements = %d\n", countpositivenumbers(arr, n));
    printf("count of negative elements = %d\n", countnegativenumbers(arr, n));
    return 0;
}