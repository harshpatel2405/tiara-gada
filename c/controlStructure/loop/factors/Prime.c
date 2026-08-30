#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }

    return 0;
}

// 1 iteration takes 1 sec
// 12 ->  1 to 12  --> 12 secs