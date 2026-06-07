/*
 *   Input marks of two subjects:    and
 *   	If both ≥ 40 → "Passed both"
 *   	Else → "Failed in one or both"
 */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter marks of two subjects : ");
    scanf("%d%d", &a, &b);

    if (a >= 40 && b >= 40)
    {
        printf("Passed both");
    }
    else
    {
        printf("Failed in one or both..");
    }
    return 0;
}