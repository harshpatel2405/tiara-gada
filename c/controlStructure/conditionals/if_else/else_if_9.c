/*
Enter triangle angles a, b, c:
    If valid (a + b + c = 180), check:
        All equal → Equilateral
        Any two equal → Isosceles
        All different → Scalene
    Else → Not a triangle
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three angles of triangle : ");
    scanf("%d%d%d", &a, &b, &c);

    // if (a + b + c != 180)
    // {
    //     printf("This is not a triangle");
    // }
    if (a + b + c == 180)
    {
        if (a == b && b == c)
        {
            printf("Equilateral");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles");
        }
        else if (a != b && b != c && a != c)
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("This is not a triangle");
    }
    return 0;
}