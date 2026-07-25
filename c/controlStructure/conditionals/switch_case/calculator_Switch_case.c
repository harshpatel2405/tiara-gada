#include <stdio.h>

int main()
{
    char ch;

    printf("'+' for Addition\n");
    printf("'-' for Subtraction\n");
    printf("'*' for Multiplication\n");
    printf("'/' for Division\n");
    printf("Enter your choice : ");
    scanf(" %c", &ch);

    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    int ans;
    switch (ch)
    {
    case '+':
        ans = a + b;
        printf("Addition of %d and %d is %d\n", a, b, ans);
        break;
    case '-':
        ans = a - b;
        printf("Subtraction of %d and %d is %d\n", a, b, ans);
        break;
    case '*':
        ans = a * b;
        printf("Multiplication of %d and %d is %d\n", a, b, ans);
        break;
    case '/':
        ans = a / b;
        printf("Division of %d and %d is %d\n", a, b, ans);
        break;
    }

    return 0;
}