#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int isPrime = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }

    return 0;
}
