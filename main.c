#include "TrFunctions.h"
#include <stdio.h>

int main()
{

    // PaperStoneSissors();
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
    break;

    default:
        printf("Enter a valid operation next time!");
        break;
    }

    char Y = 'Y';
    char N = 'N';

    if ()
    {
        printf("Do you want to use the calculator again? [Y/N]");

    } else if (scanf("%c", Y))
        {
        }
    }
    else
    {
        printf("Thank you for using our calculator, see you next time!");
        break;
    }
}