#include "TrFunctions.h"
#include <stdio.h>

int main()
{

    PaperStoneSissors();
    int num1 = 0;
    int num2 = 0;
    char operation = '\0';
    int option = 0;

    printf("Welcome to our calculator!\n");

    /*printf("<1> for +\n<2> for -\n<3> for *\n<4> for /\n<5> for exponents\n<6> for mathematical roots\n<7> for faculty\n");
    scanf("%d", &option);*/

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