#include <stdio.h>

int main()
{
    int h, m, s;

    printf("Enter hh:mm:ss : ");
    scanf("%d:%d:%d", &h, &m, &s);

    printf("Time is %d : %d : %d", h, m, s);
    return 0;
}