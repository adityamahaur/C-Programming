#include <stdio.h>
int b = 34; //This is a global variable since it is declared outside main()
int func1(int b/*This is a formal argument*/)
{
    static int myvar = 15;
    printf("The value of myvar is %d\n", myvar);
    // printf("the address of the inside func1 is %d\n", &b);
    return b * 10;
}
int main()
{
    int b = 334; //This is a local variable
    // printf("the address of the outside func1 is %d\n", &b);
    int val = func1(b);
    int *ptr = &val;
    printf("The value of func1 is %d", val);
    return 0;
}