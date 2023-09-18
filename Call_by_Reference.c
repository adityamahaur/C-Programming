// Swapping values of 2 variables

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a = 34, b = 56;
    printf("a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("a is %d and b is %d", a, b);
    return 0;
}