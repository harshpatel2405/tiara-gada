/*
* Take three numbers and print the largest one using else-if ladder.

a   b  c
10 20 30    30

a > b   10 > 20  -> false
b > a   20 > 10 -> true
b > c   20 > 30  -> false


20 30 10    30
30 10 20    30
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a >b && a > c)
    {
        printf("A is greater");
    }
    else if(b >a && b >c)
    {
        printf("B is greater");
    }
    else //  else if(c > a && c > b)
    { 
        printf("C is greater");
    }

    return 0;
}

// * Take three numbers and print the smallest one using else-if ladder.