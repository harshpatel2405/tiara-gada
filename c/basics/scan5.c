#include <stdio.h>

// Simple interest =
/*
100 -> 10% per year
2 years

si = p * r * t / 100;

first year -> 10 % of 100 -> 10 rs interest -> 110
second year -> 10 % of 100 -> 10 rs interest -> 120
*/

int main()
{
    int principal;
    float rate;
    float time;
    float si;

    printf("Enter principal : ");
    scanf("%d", &principal);

    printf("Enter rate of interest : ");
    scanf("%f", &rate);

    printf("Enter time (in years) : ");
    scanf("%f", &time);

    si = principal * rate * time / 100;

    printf("Principal = %d\tRate = %f\tTime = %f\n", principal, rate, time);

    printf("Simple Interest = %f", si);
    return 0;
}