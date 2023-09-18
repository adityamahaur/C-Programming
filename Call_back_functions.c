#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}

void greethelloandexecute(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
void greetGMandexecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetGMandexecute(ptr);
    greethelloandexecute(ptr);

    return 0;
}