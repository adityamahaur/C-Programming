#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int a = 3454;
    int *ptr; // ptr is a wild pointer
    // *ptr = 34; //Not a good thing to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d", *ptr);
    return 0;
}