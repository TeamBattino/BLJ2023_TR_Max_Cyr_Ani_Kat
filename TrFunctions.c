#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PaperStoneSissors(int input)
{
srand(time(NULL));
int randomnumber = (rand() % (3 - 1 + 1)) + 1;

printf("%d", randomnumber);

}