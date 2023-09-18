#include<stdio.h>
int main()
{
    char a = '3';
    char* ptra = &a;
    printf("%d\n", ptra);
    printf("%d", ptra+1); //jo bhi +1 +2 -1 -2 kar rahe h uska mtlb hai ki jo type h uska address add hojayega
    return 0;
}