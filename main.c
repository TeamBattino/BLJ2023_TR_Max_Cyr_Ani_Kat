#include "TrFunctions.h"
#include <stdio.h>

int main()
{

    char menuselection;

    printf("\e[36m\e[37m ██▀███   ▒█████   ▄████▄   ██ ▄█▀\e[36m █    ██  ██▓     ▄▄▄      ▄▄▄█████▓ ▒█████   ██▀███  \e[0m\n\e[37m ▓██ ▒ ██▒▒██▒  ██▒▒██▀ ▀█   ██▄█▒\e[36m  ██  ▓██▒▓██▒    ▒████▄    ▓  ██▒ ▓▒▒██▒  ██▒▓██ ▒ ██▒\e[0m\n\e[37m ▓██ ░▄█ ▒▒██░  ██▒▒▓█    ▄ ▓███▄░\e[36m ▓██  ▒██░▒██░    ▒██  ▀█▄  ▒ ▓██░ ▒░▒██░  ██▒▓██ ░▄█ ▒\e[0m\n\e[37m ▒██▀▀█▄  ▒██   ██░▒▓▓▄ ▄██▒▓██ █▄\e[36m ▓▓█  ░██░▒██░    ░██▄▄▄▄██ ░ ▓██▓ ░ ▒██   ██░▒██▀▀█▄  \e[0m\n\e[37m ░██▓ ▒██▒░ ████▓▒░▒ ▓███▀ ░▒██▒ █▄\e[36m▒▒█████▓ ░██████▒ ▓█   ▓██▒  ▒██▒ ░ ░ ████▓▒░░██▓ ▒██▒\e[0m\n\e[37m ░ ▒▓ ░▒▓░░ ▒░▒░▒░ ░ ░▒ ▒  ░▒ ▒▒ ▓▒\e[36m░▒▓▒ ▒ ▒ ░ ▒░▓  ░ ▒▒   ▓▒█░  ▒ ░░   ░ ▒░▒░▒░ ░ ▒▓ ░▒▓░\e[0m\n\e[37m  ░▒ ░ ▒░  ░ ▒ ▒░   ░  ▒   ░ ░▒ ▒░\e[36m░░▒░ ░ ░ ░ ░ ▒  ░  ▒   ▒▒ ░    ░      ░ ▒ ▒░   ░▒ ░ ▒░\e[0m\n\e[37m  ░░   ░ ░ ░ ░ ▒  ░        ░ ░░ ░ \e[36m ░░░ ░ ░   ░ ░     ░   ▒     ░      ░ ░ ░ ▒    ░░   ░ \e[0m\n\e[37m   ░         ░ ░  ░ ░      ░  ░   \e[36m   ░         ░  ░      ░  ░             ░ ░     ░     \e[0m\n\e[37m                  ░               \e[36m                                                      \e[0m\n\e[0m");
    while (1)
    {
        printf("What do you want?\n<c> Calculator\n<r> Rock Paper Sissors\n");
        scanf(" %c", &menuselection);

        if (menuselection == 'r')
        {
            PaperStoneSissors();
        }
        else
        {
            printf("Welcome to our calculator!\n");
            char calculat = 'y';
            while (calculat == 'y')
            {
                int num1 = 0;

                int num2 = 0;
                char operation = '\0';
                int option = 0;

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

                    /*case '√'
                    {
                        int squareroot();
                    }*/

                default:
                {
                    printf("Enter a valid operation next time!");
                    break;
                }
                }
                printf("Do you want to calculate again? (y/n)\n");
                scanf(" %c", &calculat);
            }
        }
    }

    int num1 = 0;
    int num2 = 0;
    char operation = '\0';
    // int option = 0;

    printf("Welcome to our calculator!\n");

    printf("Enter a math calculation:");
    scanf("%d%c%d", &num1, &operation, &num2);

    switch (operation)
    {
    case '+':
    {
        add(num1, num2);
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
        division(num1, num2);
    }
    break;

    case '^':
    {
        Expo(num1, num2);
    }
    break;

        /*case '~':
        {
            squareroot();
        }
        break;*/

    case '7':
    {
    }

    default:
        printf("Enter a valid operation next time!");
        break;
    }
}
