#include <stdio.h>

/*
Name : Left Aligned Right Angle triangle
* * * *   -> row 4 - i
* * *     -> row 3 - i
* *       -> row 2 - i
*         -> row 1 - i

rows -- 4
columns -- i

every row has 5 columns
parent - 4 - i
child - 5 - j


*/

int main()
{
    int i, j;
    int row, column;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
