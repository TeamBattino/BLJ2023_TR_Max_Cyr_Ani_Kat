#include "TrFunctions.h"
#include <stdio.h>

int main()
{

    PaperStoneSissors();

    int num1 = 0;
    int num2 = 0;
    char operation = '\0';
    int option = 0;
    printf("\e[36m_______  _______  ___      _______  __   __  ___      _______  _______  _______  ______   \n|       ||   _   ||   |    |       ||  | |  ||   |    |   _   ||       ||       ||    _ |  \n|       ||  |_|  ||   |    |       ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||  \n|       ||       ||   |    |       ||  |_|  ||   |    |       |  |   |  |  | |  ||   |_||_ \n|      _||       ||   |___ |      _||       ||   |___ |       |  |   |  |  |_|  ||    __  |\n|     |_ |   _   ||       ||     |_ |       ||       ||   _   |  |   |  |       ||   |  | |\n|_______||__| |__||_______||_______||_______||_______||__| |__|  |___|  |_______||___|  |_|\n\e[0m");
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
}