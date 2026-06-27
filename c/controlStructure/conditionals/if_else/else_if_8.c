/*
 Input total salary and classify:
    ≥ 1,00,000 → High income
    50,000–99,999 → Middle income
    20,000–49,999 → Low income
    < 20,000 → Very low income
*/

#include <stdio.h>

int main()
{
    int salary;

    printf("Enter your salary : ");
    scanf("%d", &salary);

    // if (salary < 0)
    // {
    //     printf("Salary should not be negative");
    // }
    if (salary >= 0)
    {
        if (salary >= 100000)
        {
            printf("HIgh Income");
        }
        else if (salary <= 50000 )
        {
           if(salary > 10000)
           {
            printf("Middle Income");
           }
        }
        else if (salary >= 20000 && salary < 50000)
        {
            printf("Low Income");
        }
        else if (salary < 12000)
        {
            printf("Very Low Income");
        }
    }else
    {
        printf("Salary should not be negative");
    }
    return 0;
}