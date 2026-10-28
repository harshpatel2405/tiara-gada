#include <stdio.h>

// FInd how many numbers are armstrong between 1 and 1000

int main()
{
    for (int k = 1; k <= 100000; k++)
    {

        int i, sum = 0, n = k;
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
            printf("%d\t", temp);
        }
    }
    return 0;
}