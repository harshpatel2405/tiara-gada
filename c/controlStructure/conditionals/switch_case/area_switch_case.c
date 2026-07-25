/*
Menu-driven program:  (conditions + loop)
   1. Area of Circle
   2. Area of Rectangle
   3. Area of Triangle
   4. Exit
*/

#include <stdio.h>

int main()
{
    int choice;

    printf("1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n4. Exit");
    printf("\nSelect your choice : ");
    scanf("%d", &choice);

    float area;
    switch (choice)
    {
    case 1:
        float radius;
        printf("Area of Circle Selected\n");
        printf("Enter Radius of Circle : ");
        scanf("%f", &radius);

        area = 3.14 * radius * radius;
        printf("Area of circle with Radius %0.2f cm is %0.2f cm2\n", radius, area);
        break;
    case 2:
        float length, breadth;
        printf("Area of Rectangle Selected\n");
        printf("Enter Length and Breadth of Rectangle : ");
        scanf("%f%f", &length, &breadth);

        area = length * breadth;
        printf("Area of Rectangle with Length %0.2f cm and breadth %0.2f is %0.2f cm2\n", length, breadth, area);
        break;
    case 3:
        float base, altitude;
        printf("Area of Triangle Selected\n");
        printf("Enter Base and Altitude of Rectangle : ");
        scanf("%f%f", &base, &altitude);

        area = (base * altitude) / 2;
        printf("Area of Triangle with Base %0.2f cm and Altitude %0.2f is %0.2f cm2\n", base, altitude, area);
        break;
    case 4:
        printf("Exiting the program");
        break;
    default:
        printf("Select Proper Choice for getting area");
    }

    return 0;
}