/*
 *   Electricity Bill Calculator
 *   Ask units consumed:
 *   	If units ≤ 100 → ₹2 /unit
 *   	Else if ≤ 300
 *   		₹2 /unit for first 100
 *   		₹3 /unit for next till 300
 *   	Else
 *   		 ₹2 /unit for 100
 *   		 ₹3 /unit for 200
 *   		 ₹5 /unit for rest
 */
#include <stdio.h>

int main()
{
    int units;
    int bill;

    printf("Enter units consumed : ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 2;
    }
    else if (units <= 300) // 298 -> 100 * 2 +  198 * 3 => 594 + 200 -> 794
    {
        bill = (100 * 2) + ((units - 100) * 3);
    }
    else // * 615 -> 100 *2 + 200*3 + 315*5 => 200 + 600 + 1575 = 2375
    {
        bill = (100 * 2) + (200 * 3) + ((units - 300) * 5);
    }

    printf("Units : %d\n", units);
    printf("Bill : %d", bill);
    return 0;
}