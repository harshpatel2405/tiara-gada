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
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("\nOriginal Number : %d\t|\tReverse Number : %d\n", temp, rev);

    if (rev == temp)
    {
        printf("%d is palindrome number....", temp);
    }
    else
    {
        printf("%d is not palindrome number....", temp);
    }

    return 0;
}