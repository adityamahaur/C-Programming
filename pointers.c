#include <stdio.h>
int main()
{
    printf("Let's learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;

    printf("The value of a is: %d\n", a);
    printf("The address of a is: %x\n", *ptra);
    printf("The value of a is: %d\n", a);
    printf("Address of pointer to a is:%p\n", &ptra);
    printf("Address of a is:%x\n", ptra);
    printf("The address of some garbage is:%p\n", ptr2);
    return 0;
}
