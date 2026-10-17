#include <stdio.h>

/*
Rows - i  and Columns -  j
* * * * *
* * * * *
* * * * *
* * * * *

rows -- 4
columns -- 5

every row has 5 columns
parent - 4 - i
child - 5 - j


*/

int main()
{
    int i, j;
    int row, column;

    printf("Enter number of rows and columns : ");
    scanf("%d%d", &row, &column);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
