#include <stdio.h>

// * check whether the digits are in ascending , descending or random order.....
// * 12345 -> ascending order
// * 54321 -> Descending Order
// * 12543 -> Random Order

int main()
{
    int n;
    int asc = 1;
    int dec = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    int prev = n % 10;
    n = n / 10;

    while (n > 0)
    {
        int rem = n % 10;

        if (rem < prev)
        {
            dec = 0;
        }
        else if (rem > prev)
        {
            asc = 0;
        }

        n = n / 10;
    }

    if (asc == 1)
    {
        printf("Ascending Order");
    }
    else if (dec == 1)
    {
        printf("Descending Order");
    }
    else
    {
        printf("Random Order");
    }

    return 0;
}