#include <stdio.h>

int main()
{
    // * Size is mentioned -- provide values afterwardsn
    int arr[5];

    // & SIZE -- 5
    // & INDEX -- 0 to 4

    // ^ assign value to array -- normal scanning
    printf("Enter 5 values : ");
    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    // scanf("%d", &arr[0]);
    // scanf("%d", &arr[1]);
    // scanf("%d", &arr[2]);
    // scanf("%d", &arr[3]);
    // scanf("%d", &arr[4]);

    // ^ Normal Printing
    printf("arr[0] : %d\n", arr[0]);
    printf("arr[1] : %d\n", arr[1]);
    printf("arr[2] : %d\n", arr[2]);
    printf("arr[3] : %d\n", arr[3]);
    printf("arr[4] : %d\n", arr[4]);
    return 0;
}