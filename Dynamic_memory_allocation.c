#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /*
    // use of malloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    */

    // Use of calloc
    int *ptr;
    int n;
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the size of array you want to create\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // Use of Realloc

    ptr = (int *)realloc(ptr, n * sizeof(int));
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}