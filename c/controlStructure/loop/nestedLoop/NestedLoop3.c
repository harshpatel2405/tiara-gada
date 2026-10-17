#include <stdio.h>

// check whether a number 59, is prime or not
// check how many numbers are prime between 1 and 100
int main()
{
    int primeCount = 0;
    int start, end;

    printf("Enter Start and end Value between which you want list of prime numbers : ");
    scanf("%d%d", &start, &end);

    for (int j = start; j <= end; j++)
    {
        int count = 0;
        int num = j;

        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d\t", num);
            primeCount++;
        }
    }

    printf("\nNumber of prime number between 1 and 10 : %d", primeCount);
    return 0;
}

// * identify and print how many numbers are perfect number between start and end