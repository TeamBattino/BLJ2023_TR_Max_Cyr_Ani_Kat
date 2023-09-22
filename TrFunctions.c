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
    switch (randomnumber)
    {
    //case randomnumber == 1:
        printf("Test");
        break;

    //case randomnumber == 2:
        printf("Test2");
        break;

    //case randomnumber == 3:
        printf("Test3");
        break;

    default:
        break;
    }
*/

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

int Expo(int num1, int num2)
{
    int Expo = num1 ^ num2;
    printf("%d\n", Expo);
}