/*
*  Input marks of three subjects and calculate percentage and print grades:
*  	≥90 → Grade A
*  	75–89 → Grade B
*  	50–74 → Grade C
*  	<50 → Grade D

*/

#include <stdio.h>

int main()
{
    float a, b, c;
    float percentage;

    printf("Enter marks of three subjects : ");
    scanf("%f%f%f", &a, &b, &c);

    percentage = (a + b + c) / 3;

    printf("Percentage : %f\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade : A");
    }
    else if (percentage >= 75 && percentage < 90)
    {
        printf("Grade : B");
    }
    else if (percentage >= 50 && percentage < 75)
    {
        printf("Grade : C");
    }
    else
    {
        printf("Grade : D");
    }
    return 0;
}