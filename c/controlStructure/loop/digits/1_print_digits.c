#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n); // 876

    while (n > 0)
    {
        int rem = n % 10;
        // * 1. rem = 876 % 10 = 6
        // * 2. rem = 87 % 10 = 7
        // * 3. rem = 8 % 10 = 8

        printf("%d\t", rem);

        n = n / 10;
        // * 1. n = 876 / 10 = 87
        // * 2. n = 87 / 10 = 8
        // * 3. n = 8 / 10 = 0
    }

    return 0;
}