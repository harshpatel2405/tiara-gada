#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    printf("Number of Factors of %d are %d", n, count);
    return 0;
}