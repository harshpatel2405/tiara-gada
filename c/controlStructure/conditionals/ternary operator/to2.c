#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    // * printing directly
    (a > b) ? printf("A is Greater") : printf("B is Greater");

    // * returning 1. storing and printing
    int max = (a > b) ? a : b;
    printf("\n%d is max", max);

    // * returning   2. directly
    int avlbl = 0;
    // printf("\nIS Available : %d", ((avlbl == 1) ? 1 : 0));
    printf("\nIS Available : %s", ((avlbl == 1) ? "YES" : "NO"));

    return 0;
}