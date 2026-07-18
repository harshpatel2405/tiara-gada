// * Write a program to check the entered character is vowel or consonant

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("Character '%c' is a vowel", ch);
        }
        else
        {
            printf("Character '%c' is a consonant", ch);
        }
    }
    else
    {
        printf("Please enter a letter to check for vowel and consonant");
    }
    return 0;
}