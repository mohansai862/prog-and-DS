#include <stdio.h>

int main()
{
    // Prime Number = A prime number (or a prime) is a natural number greater than 1 that
    // is not a product of two smaller natural numbers.
    // Disclaimer : This is not the best method to solve the problem.
    int n, prime = 1;

    printf("enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0)
    {
        printf("this is not a prime number");
    }
    else
    {
        printf("this is a prime number");
    }
    return 0;
}