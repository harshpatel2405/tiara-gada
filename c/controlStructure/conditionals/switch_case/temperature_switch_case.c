/*
Temperature conversion menu:
    1. Celcius to Farenheit
    2. Farenheit to Celcius
    3. Exit
*/

#include <stdio.h>

int main()
{
    int ch;
    float celcius, farenheit, kelvin;

    printf("1. Celcius to Farenheit\n2. Farenheit to Celcius\n3. Exit\n");
    printf("Select Your choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("C to F\n");
        printf("Enter Temperature in Celcius : ");
        scanf("%f", &celcius);

        farenheit = (celcius * 9 / 5) + 32;
        printf("Celcius : %0.2f\tFarenheit : %0.2f", celcius, farenheit);
        break;
    case 2:
        printf("F to C\n");
        printf("Enter Temperature in Farenheit : ");
        scanf("%f", &farenheit);

        celcius = (farenheit - 32) * 5 / 9;
        printf("Farenheit : %0.2f\tCelcius : %0.2f", farenheit, celcius);
        break;
    case 3:
        printf("Exiting Temperature Conversion Menu");
        break;
    default:
        printf("Select from 1 - 3 only");
    }

    return 0;
}