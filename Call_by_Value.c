#include<stdio.h>
void changeValue(int* address)
{
    *address = 345;
}
int main()
{
    int a = 36, b = 56;
    printf("The value of a is %d and the value of b is %d\n", a,b);
    changeValue(&a);
    printf("The new valuee os a is %d and the new value of b is %d\n", a, b);

    return 0;

}