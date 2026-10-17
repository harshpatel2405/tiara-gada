#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("Building %d - ", i);
        for (int j = 1; j <= 3; j++)
        {
            printf("Floor %d\t", j);
        }
        printf("\n");
    }

    return 0;
}