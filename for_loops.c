#include<stdio.h>
int main()
{
    int i, j;
    /* i=0,j=0; agar aise variable ko already initialize krdo toh jabardasti exp 1 lagane ki zaroorat nhi h
    yaha se bhi chal skta h */
    for(i=0, j=0; i<5; i++) //exp 1 k andar 2 variables bhi initialize ho skte h
    {
        printf("%d %d\n", j, i);
    }
    return 0;
}
