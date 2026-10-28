#include <stdio.h>

// 145 -> 1! + 4! +  5! = 145 -> Strong number / Krishnmurthy number

// 5! = 5 * 4 * 3 * 2 * 1 = 120
int main()
{
    int i, sum = 0, n = 145;
    int temp = n;
    int count = 0;

    // * check for armstrong
    while (n > 0)
    {
        int rem = n % 10;
        int ans = 1;
        for (i = rem; i >= 1; i--)
        {
            ans *= i;
        }
        sum += ans;
        n /= 10;
    }

    if (temp == sum)
    {
        printf("%d is strong number", temp);
    }
    else
    {
        printf("%d is not strong number", temp);
    }
    return 0;
}