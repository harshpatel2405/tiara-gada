#include <stdio.h>

int main()
{
    // int arr[]; // * if size is not mentioned , values need to be provided at initialisation only
    int arr[] = {10, 20, 30, 40, 50};

    // & SIZE -- 5
    // & INDEX -- 0 to 4

    // ^ Normal Printing
    printf("arr[0] : %d\n", arr[0]);
    printf("arr[1] : %d\n", arr[1]);
    printf("arr[2] : %d\n", arr[2]);
    printf("arr[3] : %d\n", arr[3]);
    printf("arr[4] : %d\n", arr[4]);

    return 0;
}