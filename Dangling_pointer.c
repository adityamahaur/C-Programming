#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int *functiondangling()
{
    int a = 34;
    int b = 64;
    int sum = a + b;
    return &sum;
}

int main()
{
    // Case 1: Deallocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 54;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: Function returning a local variable address
    int *dangptr = functiondangling(); // dangptr is now a dangling pointer

    // Case 3: If a variable goes out of scope
    int *dangptr3;
    {
        int a = 12;
        dangptr3 = &a;
    }
    /*
    Here variable a goes out of scope i.e. dangptr3 is pointing to a location which is free and hence
    dangptr3 is a dangling pointer.
    */
    return 0;
}