//arr[i] == *(arr + i)
// if arr is a pointer to arr[0] then arr + 1 is a pointer to arr[i]
#include<stdio.h>
int main()
{
    int arr[] = {1,4,5,7,8,9};
    printf("%d", arr[0]);
    printf("Value at postition 3 of array is: %d\n", arr[3]);
//agli lines address dengi uss position ka
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", arr + 1);
//agli wali lines value print karengi us address par kyunki humne dereference use kiya hai
    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of second element of the array is %d\n", *(arr + 1));

    return 0;
}