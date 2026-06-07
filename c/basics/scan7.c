#include <stdio.h>

int main()
{
    char a, b, c, d, e, f, g, h, i;

    printf("Enter your name : ");
    scanf(" %c %c %c %c %c", &a, &b, &c, &d, &e);

    printf("Enter your surname : ");
    scanf(" %c %c %c %c", &f, &g, &h, &i);

    printf("Hello , %c%c%c%c%c %c%c%c%c", a, b, c, d, e, f, g, h, i);
    return 0;
}
