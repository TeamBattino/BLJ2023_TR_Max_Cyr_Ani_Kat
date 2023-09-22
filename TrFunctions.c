#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PaperStoneSissors()
{
    int playerguess = 0;
    srand(time(NULL));
    int randomnumber = (rand() % (3 - 1 + 1)) + 1;

    printf("%d", randomnumber);
    scanf("%d", &playerguess);

    if (randomnumber == playerguess && playerguess == 1)
    {
        printf("Schere - Schere");
    }
    else if (randomnumber == playerguess && playerguess == 2)
    {
        printf("Stein - Stein");
    }
    else if (randomnumber == playerguess && playerguess == 3)
    {
        printf("Papier -Papier");
    }
    else if (randomnumber > playerguess &&)
    {
        printf("Test12");
    }
}
int subtract(int num1, int num2)
{
    int subtract = num1 - num2;
    printf("%d\n", subtract);

       int number = -5;
    if (number < 0) {
        printf("Die Zahl ist negativ.\n");
    } else {
        printf("Die Zahl ist nicht negativ.\n");
    }
}

int multiplication(int num1, int num2)
{
    int multiplication = num1 * num2;
    printf("%d\n", multiplication);
}

int Expo(int num1, int num2)
{
    int Expo = num1 ^ num2;
    printf("%d\n", Expo);
}