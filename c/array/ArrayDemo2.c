#include <stdio.h>

int main()
{
    // * Size is mentioned -- provide value at initialisation
    // int arr[5] = {10, 20, 30, 40, 50, 60}; // ! warning: excess elements in array initializer
    int arr[5] = {10, 20, 30, 40, 50};

    // arr[5] = 60; // & it allows to access and update outisde size elements as well

    // & SIZE -- 5
    // & INDEX -- 0 to 4

    // ^ Normal Printing
    printf("arr[0] : %d\n", arr[0]);
    printf("arr[1] : %d\n", arr[1]);
    printf("arr[2] : %d\n", arr[2]);
    printf("arr[3] : %d\n", arr[3]);
    printf("arr[4] : %d\n", arr[4]);
    // printf("arr[5] : %d\n", arr[5]); // & it allows to access and update outisde size elements as well
    return 0;
}