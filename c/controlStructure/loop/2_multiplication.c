#include <stdio.h>

int main()
{
    // * Multiplication of numbers between a and b
    int i;
    int mul = 1;

    for (i = 5; i <= 9; i++)
    {
        mul = mul * i;
    }

    printf("%d", mul);
    return 0;
}