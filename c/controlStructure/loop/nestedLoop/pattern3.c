#include <stdio.h>

/*
Name : Left Aligned Right Angle triangle
* 1         -> row 1 - i
* 2 2       -> row 2 - i
* 3 3 3     -> row 3 - i
* 4 4 4 4   -> row 4 - i

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

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            // printf("%d ", i);
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
