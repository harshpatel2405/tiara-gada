/*
Enter a character and identify:
    Vowel (a, e, i, o, u)
    Digit
    lowercase alphabets
    uppercase alphabets
    Special character
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("It is a vowel");
    }
    else if (ch >= 48 && ch <= 57) // * ch >= '0' && ch <= '9'   // ascii 0 - 48   9 - 57
    {
        printf("It is number");
    }
    else if (ch >= 'a' && ch <= 'z')  // * ch >= 97 && ch <= 122
    {
        printf("IT is lowercase aplhabets not vowel");
    }
    else if (ch >= 'A' && ch <= 'Z')  // * ch >= 65 && ch <= 90
    {
        printf("It is uppercase alphabets not vowel");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}
