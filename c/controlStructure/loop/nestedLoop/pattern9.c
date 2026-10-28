#include <stdio.h>
/*
&  a A
&  b B
&  c C
&  d D
&  e E

row    - 5
column - 2
*/

int main()
{
    int i, j;
    int column = 2;
    char ch;

    printf("Enter character from which you want to run the loop : ");
    scanf(" %c", &ch);

    int row = ch - 96;
    char hc = ch - 32;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            if (j == 1)
            {
                printf("%c ", ch);
            }
            else
            {
                printf("%c ", hc);
            }
        }
        ch--;
        hc--;
        printf("\n");
    }
    return 0;
}

// task :