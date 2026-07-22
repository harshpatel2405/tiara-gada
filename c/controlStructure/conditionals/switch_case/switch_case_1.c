#include <stdio.h>

int main()
{
    int choice;

    printf("1. Spring\n2. Summer\n3. Monsoon\n4. Winter\nSelect your Favourite Season : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Your Favorite Season is Spring");
        break;
    case 2:
        printf("Your Favorite Season is Summer");
        break;
    case 3:
        printf("Your Favorite Season is Monsoon");
        break;
    case 4:
        printf("Your Favorite Season is Winter");
        break;
    default:
        printf("Select Season from 1-4 only");

    }

    return 0;
}