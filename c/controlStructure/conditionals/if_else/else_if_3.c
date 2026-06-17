/*
 Enter time (in 24-hour format) and print:
    Morning (5–11)
    Afternoon (12–16)
    Evening (17–20)
    Night (21–4)  21 - 24 1 - 4
*/
#include <stdio.h>
int main()
{
    int t;
    printf("enter a time in 24 hr format");
    scanf("%d", &t);
    if (t >= 5 && t <= 11)
    {
        printf("it is morning");
    }
    else if (t >= 12 && t <= 16)
    {
        printf("it is afternoon");
    }
    else if (t >= 17 && t <= 20)
    {
        printf("it is evening");
    }
    else if ((t >= 21 && t <= 24) || (t >= 1 && t <= 4))
    {
        printf("It is night");
    }
    else
    {
        printf("Enter hours between 1 and 24 only");
    }
    return 0;
}