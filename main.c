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
        else if(menuselection == 'c')
        {
            printf("Welcome to our calculator!\n");
            printf("+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\n~ for Squareroot\n^ for Exponential\n| for Factorial\n");
            char calculat = 'y';
            while (calculat == 'y')
            {
                int num1 = 0;
                int num2 = 0;

                char operation = '\0';

                printf("Enter a valid operation:");

                fflush(stdin);

                scanf(" %c", &operation);

                switch (operation)
                {
                case '+':
                {
                    printf("Enter a math calculation:");
                    if (scanf("%d%d", &num1, &num2)== 2)
                    {
                    add(num1, num2);
                    }else
                    {
                        printf("Not a Valid Number!\n");
                    }
                }
                break;

                case '-':
                {
                    printf("Enter a math calculation:");
                    if (scanf("%d%d", &num1, &num2)== 2)
                    {
                    subtract(num1, num2);
                    }else
                    {
                        printf("Not a Valid Number!\n");
                    }
                }
                break;

                case '*':
                {
                    printf("Enter a math calculation:");
                    if (scanf("%d%d", &num1, &num2)== 2)
                    {
                    multiplication(num1, num2);
                    }else
                    {
                        printf("Not a Valid Number!\n");
                    }
                }
                break;

                case '/':
                {
                    printf("Enter a math calculation:");
                    if (scanf("%d%d", &num1, &num2)== 2)
                    {
                    division(num1, num2);
                    }else
                    {
                        printf("Not a Valid Number!\n");
                    }
                }
                break;

                case '~':
                {
                    printf("Enter a math calculation:");
                    if (scanf("%d", &num1) == 1)
                    {
                        squareroot(num1);
                    }
                    else
                    {
                        printf("Not a Valid Number!\n");
                    }
                }
                break;

                case '^':
                {
                    printf("Enter a math calculation:");
                    if (scanf("%d%d", &num1, &num2) == 2)
                    {
                        Expo(num1, num2);
                    }
                    else
                    {
                        printf("Not a Valid Number!\n");
                    }
                }
                break;

                case '|':
                {
                    printf("Enter a math calculation:");
                    if (scanf("%d", &num1) == 1)
                    {
                        factorial(num1);
                    }
                    else
                    {
                        printf("Not a Valid Number!\n");
                    }
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
        }else
        {
            printf("This is not r or c!\n");
        }
    }
}
