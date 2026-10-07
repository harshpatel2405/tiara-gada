#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // * last digit is selecetd as min
    int min = n % 10;

    while (n > 0)
    {
        int rem = n % 10;

        if (min > rem)
        {
            min = rem;
        }

        n = n / 10;
    }

    printf("Min digit is %d\n", min);
    return 0;
}
