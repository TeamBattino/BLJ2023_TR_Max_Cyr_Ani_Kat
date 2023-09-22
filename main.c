#include "TrFunctions.h"
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int operation = 0;

    printf("Welcome to our calculator!\nChoose a math operation:\n");
    printf("<1> for +\n<2> for -\n<3> for *\n<4> for /\n<5> for exponents\n<6>")


    
    scanf("%d%c%d", &num1, &operation, &num2);
    

    switch (operation)
    {
    case '+':
    {
        operation == '+';
    }
    break;

    case '-':
    {
        operation == '-';
        int subtract(int num1, int num2);
    }
    break;

    case '*':
    {
        operation == '*';
        int multiplication(int num1, int num2);
    }
    break;

    case '/':
    {
        operation == '/';
    }
    break;

    default:
        printf("Enter a valid operation next time!");
        break;
    }
}