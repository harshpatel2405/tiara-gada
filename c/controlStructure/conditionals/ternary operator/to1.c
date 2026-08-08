// * check if age is grater than 18 or not
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    // * ternary operator version 
 // *conditional_Expression ? "True"                           : "False"                              ;
    (age > 18)              ? printf("Age is greater than 18") :  printf("Age is not greater than 18");

    // * if-else version`
    // if (age > 18)
    // {
    //     printf("Age is greater than 18");
    // }
    // else
    // {
    //     printf("Age is not greater than 18");
    // }
    return 0;
}