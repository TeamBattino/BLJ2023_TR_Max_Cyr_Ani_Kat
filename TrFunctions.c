#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PaperStoneSissors()
{
    char playrps = 'y';
    while (playrps == 'y')
    {
        int playerguess = 0;
        srand(time(NULL));
        int randomnumber = (rand() % (3 - 1 + 1)) + 1;

        printf("\e[33mRock Paper Sissors\e[0m\n\nEnter your Guess!\n<1> Sissor\n<2> Rock\n<3> Paper\n");
        scanf("%d", &playerguess);

        if (playerguess == 1)
        {
            if (randomnumber == 1)
            {
                printf("\e[30mTie!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[31mYou Lose!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[32mYou Win!\e[0m\n");
            }
        }
        else if (playerguess == 2)
        {
            if (randomnumber == 1)
            {
                printf("\e[32mYou Win!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[30mTie!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[31mYou Lose!\e[0m\n");
            }
        }
        else if (playerguess == 3)
        {
            if (randomnumber == 1)
            {
                printf("\e[31mYou Lose!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[32mYou Win!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[30mTie!\e[0m\n");
            }
        }
        else
        {
            printf("\e[31mError!\e[0m\n");
        }

        printf("Do you want to play again? (y/n)\n");
        scanf(" %c", &playrps);
    }
}

int add(int num1, int num2)
{
    int add = num1 + num2;
    printf("%d\n", add);

    return add;
}

int subtract(int num1, int num2)
{
    int subtract = num1 - num2;
    printf("%d\n", subtract);

    return subtract;
}

int multiplication(int num1, int num2)
{
    int multiplication = num1 * num2;
    printf("%d\n", multiplication);

    return multiplication;
}

float division(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("It's not possible to divide by 0!\n");
    }
    else
    {
        float division = (float)num1 / num2;
        printf("%.3f\n", division);
    }

    
}

double squareroot(int num1)
{
    double guess = num1 / 2.0;
    double error = 0.00001;

    while (guess * guess - (double)num1 > error)
    {
        guess = (guess + (double)num1 / guess) / 2.0;
    }

    printf("%lf\n", guess);
}

int Expo(int num1, int num2)
{
    int result = 1;
    while (num2 > 0)
    {
        if (num2 % 2 == 1)
        {
            result *= num1;
        }
        num1 *= num1;
        num2 /= 2;
    }
    printf("%d\n", result);

    return result;
}

int factorial(int number)
{
    int fact = 1;

    if (number < 0)
        printf("Error! Factorial of negative numbers does not exist.");
    else
    {
        for (int i = 1; i <= number; ++i)
        {
            fact *= i;
        }
    }

    printf("%d\n", fact);
}