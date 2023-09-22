#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PaperStoneSissors()
{
    char playrps = 'y';
    while (playrps = 'y')
    {
        int playerguess = 0;
        srand(time(NULL));
        int randomnumber = (rand() % (3 - 1 + 1)) + 1;

        printf("\e[33mRock Paper Sissors\e[0m\n\nEnter your Guess!\n<1> Schere\n<2> Stein\n<3> Papier\n");
        scanf("%d", &playerguess);

        if (playerguess == 1)
        {
            if (randomnumber == 1)
            {
                printf("\e[30mGleichstand\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[31mDu verlierst!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[32mDu gewinnst!\e[0m\n");
            }
        }
        else if (playerguess == 2)
        {
            if (randomnumber == 1)
            {
                printf("\e[32mDu gewinnst!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[30mGleichstand\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[31mDu verlierst!\e[0m\n");
            }
        }
        else if (playerguess == 3)
        {
            if (randomnumber == 1)
            {
                printf("\e[31mDu verlierst!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[32mDu gewinnst!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[30mGleichstand\e[0m\n");
            }
        }
        else
        {
            printf("\e[31mError\e[0m\n");
        }
        printf("Wilst du nochmal spielen? (y/n)\n");
        scanf("%c", &playrps);

    }
}

int subtract(int num1, int num2)
{
    int subtract = num1 - num2;
    printf("%d\n", subtract);
}

int multiplication(int num1, int num2)
{
    int multiplication = num1 * num2;
    printf("%d\n", multiplication);
}

int Expo(int base, int expo)
{
    int result = 1;
    while (expo > 0)
    {
        if (expo % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        expo /= 2;
    }
    return result;
}