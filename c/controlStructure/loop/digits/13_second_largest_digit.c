#include <stdio.h>

int main()
{
    int n;
    int largest = -1;
    int secondLargest = -1;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n % 10;
        if (rem > largest)
        {
            secondLargest = largest;
            largest = rem;
        }
        if(rem >secondLargest && rem != largest)
        {
            secondLargest = rem;
        }

        n = n / 10;
    }

    printf("Largest : %d\n", largest);
    printf("Second Largest : %d\n", secondLargest);
    return 0;
}

