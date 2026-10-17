#include <stdio.h>

int main()
{
    int n, i, j;
    int start, end;

    printf("Enter start and end : ");
    scanf("%d%d", &start, &end);

    for (j = start; j <= end; j++)
    {
        int sum = 0;
        int n = j;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
        {
            printf("%d\t", n);
        }
    }

    return 0;
}
