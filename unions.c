// Unions are similar to structure but the elements share the space and cannot work simultaneously
#include<stdio.h>
int main()
{
    union test {
        int a;
        float b;
        char c;
    } un;
    // agar 4 print statements daalo union m toh bas last wali sahi print hogi and baaki corrupt hojayengi
    un.a;
    un.b;
    un.c;   
    return 0;
}