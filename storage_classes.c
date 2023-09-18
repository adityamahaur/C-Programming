#include <stdio.h>
#include "temp.c"
// int myfunc(int a, int b)
// {
//     int sum;
//     sum = a + b;
//     return sum;
// }
extern int sum = 98;
int main()
{
    // Declaration - Telling the compiler about the variable and no space reservation
    // Definition - Declaration + space reservation

    printf("The sum is %d\n", sum);
    return 0;
}