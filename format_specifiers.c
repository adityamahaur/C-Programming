#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    int a = 123;
    const float b = 7.22;
    printf("%f", PI);
    //PI = 7.33; cannot do this since PI is a constant
    // b = 15.4 since b is a constant this cannot be done and it is wrong
    //printf("The value of a is %d and the value of b is %10.4f\n", a, b);
    //printf("%0.3f", b);
    //printf("%f", b);
    return 0;
}
