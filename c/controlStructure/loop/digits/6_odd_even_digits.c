#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n % 10;

        if (rem % 2 == 0)
        {
            printf("Even - %d\n", rem);
        }

        n = n / 10;
    }
    return 0;
}