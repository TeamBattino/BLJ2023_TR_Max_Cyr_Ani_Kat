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
/*
    if (randomnumber == playerguess && playerguess == 1)
    {
        if (randomnumber == 1)
        {
            printf("Gleichstand\n");
        }
        else if (randomnumber == 2)
        {
            printf("Du verlierst!\n");
        }
        else if (randomnumber == 3)
        {
            printf("Du gewinnst!\n");
        }
    }
    else if (playerguess == 2)
    {
        if (randomnumber == 1)
        {
            printf("Du gewinnst!\n");
        }
        else if (randomnumber == 2)
        {
            printf("Gleichstand\n");
        }
        else if (randomnumber == 3)
        {
            printf("Du verlierst!\n");
        }
    }
    else if (playerguess == 3)
    {
        if (randomnumber == 1)
        {
            printf("Du verlierst!\n");
        }
        else if (randomnumber == 2)
        {
            printf("Du Gewinnst!\n");
        }
        else if (randomnumber == 3)
        {
            printf("Gleichstand\n");
        }
    }
    else
    {
        printf("Error\n");
    }
}


int subtract(int num1, int num2)
{
    int subtract = num1 - num2;
    printf("%d\n", subtract);

    int number = -5;
    if (number < 0)
    {
        printf("Die Zahl ist negativ.\n");
    }
    else
    {
        printf("Die Zahl ist nicht negativ.\n");
    } 
}

int multiplication(int num1, int num2)
{
    int multiplication = num1 * num2;
    printf("%d\n", multiplication);
}

int Expo(int base, int expo)
{
      int result = 1;
    while (expo > 0) {
        if (expo % 2 == 1) {
            result *= base;
        }
        base *= base;
        expo /= 2;
    }
    return result;
}