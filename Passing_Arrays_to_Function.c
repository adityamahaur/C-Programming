#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 345; //imp point that function m value change karoge toh final output m wo dikhega ki value change hogayi hai 
    return 0;
}

void func2(int*ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr+i));
    }
    
}

int main()
{
    int arr[] = {23, 13, 45, 67, 55};
    printf("\n");
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("\n");
    func2(arr);
    printf("\n");
    printf("The value at index 0 is %d\n", arr[0]);
    printf("\n");
    return 0;
}