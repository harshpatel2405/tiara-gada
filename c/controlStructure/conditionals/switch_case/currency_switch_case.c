/*
Create a currency converter using switch:
    1. INR to USD
    2. USD to EUR
    3. EUR to INR
*/
#include <stdio.h>

int main()
{
    int currencyChoice;
    float INR, USD, EUR;

    printf("1. INR to USD\n");
    printf("2. USD to EUR\n");
    printf("3. EUR to INR\n");
    printf("Select Your Operation : ");
    scanf("%d", &currencyChoice);

    switch (currencyChoice)
    {
    case 1:
        printf("INR TO USD\n");
        printf("Enter Amount in INR : ");
        scanf("%f", &INR);

        USD = INR / 96.57;
        printf("INR -> %0.2f rs\tUSD -> %0.2f $", INR, USD);
        break;
    case 2:
        printf("USD TO EUR\n");
        printf("Enter Amount in USD : ");
        scanf("%f", &USD);

        EUR = USD / 1.14;
        printf("USD -> %0.2f $\tEUR -> %0.2f POUND", USD, EUR);
        break;
    case 3:
        printf("EUR TO INR\n");
        printf("Enter Amount in EUR : ");
        scanf("%f", &EUR);

        INR = EUR * 109.94;
        printf("EUR -> %0.2f POUND\tINR -> %0.2f rs", EUR, INR);
        break;
    default:
        printf("Select Correct Operation");
    }

    return 0;
}