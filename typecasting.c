#include <stdio.h>
/* Typecasting syntax:
(type) value;
*/
int main()
{
    int a = 3;
    float b = (float)54 / 5; // yaha par 54/5 ko wo integer lega because dono integer h and agar float value chahiye toh usko typecast krke float bnana padega
    // warna wo usko integer value m answer dedega
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %f", b);
    return 0;
}

/* Typecasting is used to convert a data type into another data type wherever needed in the program
it can be used while declaring the function or while giving output
*/