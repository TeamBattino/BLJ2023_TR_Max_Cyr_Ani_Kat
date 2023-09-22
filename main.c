#include "TrFunctions.h"
#include <stdio.h>

int main()
{
    printf("Welcome to our calculator!\nEnter a math calculation:\n");

    int num1 = 0;
    int num2 = 0;
    char operation = '+';

    scanf("%d%c%d", &num1, &operation, &num2);

    switch (operation)
    {
    case '+':
        operation == '+';

        break;

    case '-':
        operation == '-';
        int subtract(int num1, int num2);
        break;

    case '*':
        operation == '*';
        int multiplication(int num1, int num2);
        break;

    case '/':
        operation == '/';
        break;

    default:
        printf("Enter a valid operation next time!");
        break;
    }
}