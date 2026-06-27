/*
Voter Eligibility with Age Check
Ask user age:
    If age ≥ 18
        If age ≥ 60 → "Senior Citizen Voter"
        Else → "Regular Voter"
    Else → "Not Eligible to Vote"
*/

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        if (age >= 60)
        {
            printf("Senior Citizen Voter");
        }
        else
        {
            printf("regular voter");
        }
    }
    else
    {
        printf("Not Eligible to Vote");
    }
    return 0;
}

/*
* Even/Odd & Divisibility		
* Ask a number:
* 	If number is even
* 		Check if it's divisible by 4
* 	Else
* 	    Check if it's divisible by 3
*/