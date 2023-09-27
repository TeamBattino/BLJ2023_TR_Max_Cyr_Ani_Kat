#include "TrFunctions.h"
#include <stdio.h>

int main()
{

    char menuselection;
    printf("\e[36m\e[37m ██▀███   ▒█████   ▄████▄   ██ ▄█▀\e[36m █    ██  ██▓     ▄▄▄      ▄▄▄█████▓ ▒█████   ██▀███  \e[0m\n\e[37m ▓██ ▒ ██▒▒██▒  ██▒▒██▀ ▀█   ██▄█▒\e[36m  ██  ▓██▒▓██▒    ▒████▄    ▓  ██▒ ▓▒▒██▒  ██▒▓██ ▒ ██▒\e[0m\n\e[37m ▓██ ░▄█ ▒▒██░  ██▒▒▓█    ▄ ▓███▄░\e[36m ▓██  ▒██░▒██░    ▒██  ▀█▄  ▒ ▓██░ ▒░▒██░  ██▒▓██ ░▄█ ▒\e[0m\n\e[37m ▒██▀▀█▄  ▒██   ██░▒▓▓▄ ▄██▒▓██ █▄\e[36m ▓▓█  ░██░▒██░    ░██▄▄▄▄██ ░ ▓██▓ ░ ▒██   ██░▒██▀▀█▄  \e[0m\n\e[37m ░██▓ ▒██▒░ ████▓▒░▒ ▓███▀ ░▒██▒ █▄\e[36m▒▒█████▓ ░██████▒ ▓█   ▓██▒  ▒██▒ ░ ░ ████▓▒░░██▓ ▒██▒\e[0m\n\e[37m ░ ▒▓ ░▒▓░░ ▒░▒░▒░ ░ ░▒ ▒  ░▒ ▒▒ ▓▒\e[36m░▒▓▒ ▒ ▒ ░ ▒░▓  ░ ▒▒   ▓▒█░  ▒ ░░   ░ ▒░▒░▒░ ░ ▒▓ ░▒▓░\e[0m\n\e[37m  ░▒ ░ ▒░  ░ ▒ ▒░   ░  ▒   ░ ░▒ ▒░\e[36m░░▒░ ░ ░ ░ ░ ▒  ░  ▒   ▒▒ ░    ░      ░ ▒ ▒░   ░▒ ░ ▒░\e[0m\n\e[37m  ░░   ░ ░ ░ ░ ▒  ░        ░ ░░ ░ \e[36m ░░░ ░ ░   ░ ░     ░   ▒     ░      ░ ░ ░ ▒    ░░   ░ \e[0m\n\e[37m   ░         ░ ░  ░ ░      ░  ░   \e[36m   ░         ░  ░      ░  ░             ░ ░     ░     \e[0m\n\e[37m                  ░               \e[36m                                                      \e[0m\n\e[0m");
    while (1)
    {
        printf("What do you want?\n<c> Calculator\n<r> Rock Paper Scissors\n");
        scanf(" %c", &menuselection);

        if (menuselection == 'r')
        {
            PaperStoneScissors();
        }
        else
        {
            printf("Welcome to our calculator!\n");
            printf("+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\n~ for Squareroot\n^ for Exponential\n| for Factorial\n");
            char calculat = 'y';
            while (calculat == 'y')
            {
                int num1 = 0;
                int num2 = 0;
                int num3 = 0;

                char operation = '\0';

                printf("Enter a valid operation:");

                fflush(stdin);

                scanf(" %c", &operation);
                

                switch (operation)
                {
                case '+':
                {
                    printf("Enter a math calculation:");
                    scanf("%d%d", &num1, &num2);
                    add(num1, num2);
                }
                break;

                case '-':
                {
                    printf("Enter a math calculation:");
                    scanf("%d%d", &num1, &num2);
                    subtract(num1, num2);
                }
                break;

                case '*':
                {
                    printf("Enter a math calculation:");
                    scanf("%d%d", &num1, &num2);
                    multiplication(num1, num2);
                }
                break;

                case '/':
                {
                    printf("Enter a math calculation:");
                    scanf("%d%d", &num1, &num2);
                    division(num1, num2);
                }
                break;

                case '~':
                {
                    printf("Enter a math calculation:");
                    scanf("%d", &num1);
                    squareroot(num1);
                }
                break;

                case '^':
                {
                    printf("Enter a math calculation:");
                    scanf("%d%d", &num1, &num2);
                    Expo(num1, num2);
                }
                break;

                case '|':
                {
                    printf("Enter a math calculation:");
                    scanf("%d", &num1);
                    factorial(num1);
                }
                break;

                default:
                {
                    printf("Enter a valid operation next time!\n");
                }
                break;
                }
                printf("Do you want to calculate again? (y/n)\n");
                scanf(" %c", &calculat);
            }
        }
    }
}
