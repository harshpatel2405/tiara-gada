#include <stdio.h>

/*
Name : upper Pyarmid
n = 4                                  n - i
   *     -> row 1 - i - 3 spaces       4 - 1
  * *    -> row 2 - i - 2 spaces       4 - 2
 * * *   -> row 3 - i - 1 spaces       4 - 3
* * * *  -> row 4 - i - 0 spaces       4 - 4


*/

int main()
{
    int i, j;
    int row, column;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        // space
        for (int k = 1; k <= (row - i); k++)
        {
            // printf(""); // * no space -- left aligned right angle triangle
            // printf("  "); // * 1 space -- upper pyramid
            printf("  "); // * 2 space -- right  aligned right angle triangle
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}