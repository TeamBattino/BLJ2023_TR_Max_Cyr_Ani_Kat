#include "TrFunctions.h"
#include <stdio.h>

int main()
{

    //PaperStoneSissors();
    int num1 = 0;
    int num2 = 0;
    char operation = '\0';
    int option = 0;

    printf("Welcome to our calculator!\n");

    printf("Enter a math calculation:");
    scanf("%d%c%d", &num1, &operation, &num2);

    switch (operation)
    {
    case '+':
    {
        
    }
    break;

    case '-':
    {
        subtract(num1, num2);
    }
    break;

    case '*':
    {
        
        multiplication(num1, num2);
    }
    break;

    case '/':
    {
        operation == '/';
    }
    break;

    case '^':
    {
        Expo(num1, num2);
    }

    default:
        printf("Enter a valid operation next time!");
        break;
    }
}