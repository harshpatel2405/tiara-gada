#include <stdio.h>

// 153 -> 1^3 + 5^3 +  3^3 = 153 ->armstrong number

int main()
{
    int i, sum = 0, n = 152;
    int temp = n;
    int count = 0;

    // * finding count of digits
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    n = temp;

    // * check for armstrong
    while (n > 0)
    {
        int rem = n % 10;
        int ans = 1;
        for (i = 1; i <= count; i++)
        {
            ans *= rem;
        }
        sum += ans;
        n /= 10;
    }

    if (temp == sum)
    {
        printf("%d is armstrong number", temp);
    }
    else
    {
        printf("%d is not armstrong number", temp);
    }
    return 0;
}