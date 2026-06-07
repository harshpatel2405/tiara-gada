/*
 * Input a number and:
 *	If divisible by either 3 or 5 → "Valid"
 *	Else → "Invalid"
 */
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 5 == 0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}