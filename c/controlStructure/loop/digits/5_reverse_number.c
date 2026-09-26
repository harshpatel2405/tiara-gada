#include <stdio.h>

int main()
{
    int n;
    int rev = 0;
    int temp;
    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        int rem = n % 10;
        // * 1. rem = 876 % 10 = 6
        // * 2. rem = 87 % 10 = 7
        // * 3. rem = 8 % 10 = 8

        rev = rev * 10 + rem;
        // & 1. rev = 0 * 10 + 6 = 6
        // & 2. rev = 6 * 10 + 7 = 67
        // & 3. rev = 67 * 10 + 8 = 678

        n = n / 10;
        // * 1. n = 876 / 10 = 87
        // * 2. n = 87 / 10 = 8
        // * 3. n = 8 / 10 = 0
    }

    // printf("Reverse : %d", rev);

    // Reverse of 876 is 678"
    printf("Reverse of %d is %d", temp, rev);
    return 0;
}