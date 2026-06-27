/*
7) Enter a character. Print:    and
	"Uppercase Letter" if capital, 
	"Not Uppercase" otherwise.
*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') // * ASCII -- ch >= 65 && ch <= 90
    {
        printf("'%c' is Uppercase Letter", ch);
    }
    else // * ASCII -- ch >= 97 && ch <= 122
    {
        printf("%c is lowercase letter", ch);
    }

    return 0;
}