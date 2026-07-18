/*
 *   Employee Salary Slip Simulation	Input:
 *   	Basic Salary
 *   	If salary > 20000
 *   		HRA = 25%, DA = 90%
 *   	Else
 *   		HRA = 20%, DA = 80%
 *   	Calculate and print Gross Salary
 */
#include <stdio.h>

int main()
{
    int basicSalary;
    int hra;
    int da;

    printf("Enter basic Salary : ");
    scanf("%d", &basicSalary);

    if (basicSalary > 20000)
    {
        hra = 25;
        da = 90;
    }
    else
    {
        hra = 20;
        da = 80;
    }

    float grossSalary = basicSalary + ((hra * basicSalary) / 100) + ((da * basicSalary) / 100);
    printf("Gross Salary : %f", grossSalary);

    return 0;
}
