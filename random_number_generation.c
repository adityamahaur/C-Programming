#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int main()
{
    printf("The random number between 0-100 is: %d\n", generaterandomnumber(100));
    return 0;
}