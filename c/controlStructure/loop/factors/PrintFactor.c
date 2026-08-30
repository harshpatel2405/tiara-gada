#include <stdio.h>

int main()
{
    int n = 12;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}