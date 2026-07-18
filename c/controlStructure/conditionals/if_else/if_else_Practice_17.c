/*
Input day number (1–7):
    If 6 or 7 → "Weekend"
    Else → "Weekday"
*/

#include <stdio.h>

int main()
{
    int day;

    printf("Enter Day Number (1 -7) : ");
    scanf("%d", &day);

    if (day == 6 || day == 7)
    {
        printf("Weekend");
    }
    else
    {
        printf("Weekday");
    }

    return 0;
}