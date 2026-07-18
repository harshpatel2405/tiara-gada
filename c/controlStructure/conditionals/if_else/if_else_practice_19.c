// *  Write a program to check whether the entered character is Uppercase or Lowercase

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf(" %c", &ch);

    // * ASCII
    if (ch >= 65 && ch <= 90)
    {
        printf("Uppercase");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Enter a letter to check for uppercase and lowercase");
    }

    return 0;
}