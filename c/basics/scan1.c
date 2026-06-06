#include <stdio.h>

int main()
{
    int n = 78; // * garbage value

    printf("Enter value of n : ");
    scanf("%d", &n); // * & -> ampersand or address of

    printf("N : %d", n);

    return 0;
}

// * ask marks (float) and age(int) from user