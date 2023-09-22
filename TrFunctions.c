#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PaperStoneSissors(int input)
{
    char playerguess[] = "blank";
    srand(time(NULL));
    int randomnumber = (rand() % (3 - 1 + 1)) + 1;

    printf("%d", randomnumber);
    scanf("%s", &playerguess)


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

int Expo(int num1, int x)
{
    int Expo = num1 ^ x;
    printf("%d\n", Expo);
}
