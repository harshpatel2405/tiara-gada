// & Diamond - Upper Pyramid + Lower Pyramid

#include <stdio.h>

int main()
{
    int i, j;
    int row, column;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    // * upper pyramid
    for (i = 1; i <= row; i++)
    {
        // space
        for (int k = 1; k <= (row - i); k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // * Lower pyramid
    for (i = row-1; i >= 1; i--)
    {
        // space
        for (int k = 1; k <= (row - i); k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}