#include <stdio.h>

int main()
{
    // * Size is mentioned -- provide values afterwardsn
    int arr[5];
    int n = 5;

    // ^ assign value to array -- loop scanning
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // ^ Loop Printing
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    return 0;
}