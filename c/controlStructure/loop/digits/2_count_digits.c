#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &n); //  876

    while (n > 0) // n != 0
    {
        count++;
        n = n / 10;
        // n = 876 / 10 = 87
        // n = 87 / 10 = 8
        // n = 8 / 10 = 0
    }

    printf("Count : %d", count);
    return 0;
}