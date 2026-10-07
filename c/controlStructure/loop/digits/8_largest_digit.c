#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // * last digit is selecetd as max
    int max = n % 10;

    while (n > 0)
    {
        int rem = n % 10;

        if (max < rem)
        {
            max = rem;
        }

        n = n / 10;
    }

    printf("Max digit is %d\n", max);
    return 0;
}
