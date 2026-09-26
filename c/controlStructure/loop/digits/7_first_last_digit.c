// find last and first digit
#include <stdio.h>

int main()
{
    int n;
    int rem;
    printf("Enter the number : ");
    scanf("%d", &n);

    // * last digit
    int ld = n % 10;

    // // * first digit
    // while (n > 0)
    // {
    //     rem = n % 10;
    //     n = n / 10;
    // }
    // printf("First Digit : %d\n", rem);

    // * first digit
    while (n > 9)
    {
        n = n / 10;
    }

    printf("First Digit : %d\n", n);
    printf("Last Digit  : %d", ld);
    return 0;
}