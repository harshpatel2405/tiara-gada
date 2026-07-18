/*
 *   Nested Bank Loan Eligibility Checker
 *   Inputs:
 *   	Age
 *   	Monthly Income
 *   	Credit Score
 *   Logic:
 *   	If age ≥ 21
 *   		If income ≥ 25,000
 *   			If credit score ≥ 750 → “Eligible for Full Loan”
 *   						  650–749 → “Eligible with Guarantee”
 *   			                < 650 → “Loan Rejected: Poor Credit”
 *   			Else → “Income Too Low”
 *   	Else → “Too Young for Loan”
 */

#include <stdio.h>

int main()
{
    int age;
    int monthlyIncome;
    int creditScore;

    printf("Enter Age , monthly income and Credit Score : ");
    scanf("%d%d%d", &age, &monthlyIncome, &creditScore);

    if (age >= 21)
    {
        if (monthlyIncome >= 25000)
        {
            if (creditScore >= 750)
            {
                printf("Eligible for Full Loan");
            }
            else if (creditScore >= 650 && creditScore < 750)
            {
                printf("Eligible With Gurantee");
            }
            else if (creditScore < 650)
            {
                printf("Loan Rejected : Poor Credit");
            }
        }
        else
        {
            printf("Income too Low");
        }
    }
    else
    {
        printf("Too Young for Loan");
    }

    return 0;
}