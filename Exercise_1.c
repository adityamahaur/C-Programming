#include <stdio.h>
/*
Print multiplication table of a no. entered by a user in pretty form

Example: 

Input: enter the number you want the multiplication table of: 
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
.
6 X 10 =60
*/

int main()
{
    int a, i;
    printf("Enter the number you want the multiplication table of: ");
    scanf("%d", &a);
    for (i = 1; i<=10; ++i)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
}
