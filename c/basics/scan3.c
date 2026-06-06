#include <stdio.h>
int main()
{
    int a, b, c, total;

    printf("Enter 1 number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Enter third number : ");
    scanf("%d", &c);

    total = a + b + c;
    //   int   / int   = int
    float percentage = total / 3.0;

    printf("Total : %d\n", total);
    printf("Percentage : %0.2f", percentage);

    return 0;
}