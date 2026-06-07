#include <stdio.h>
int main()
{
    int a, b, c, total;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    // printf("Enter three numbers : ");
    // scanf("%d", &a);
    // scanf("%d", &b);
    // scanf("%d", &c);

    total = a + b + c;
    //   int   / int   = int
    float percentage = total / 3.0;

    printf("Total : %d\n", total);
    printf("Percentage : %0.2f", percentage);

    return 0;
}