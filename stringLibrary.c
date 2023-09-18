#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s1[] = "Aditya";
    char s2[] = "Krishna";
    char s3[54];
    // puts(strcat(s1, s2));
    /*
    printf("The length of S1 is %d\n", strlen(s1));
    printf("The length of S2 is %d\n", strlen(s2));
    printf("The reversed string s1 is:");
    puts(strrev(s1));
    printf("The reversed string s2 is:");
    puts(strrev(s2));

    strcpy(s3, strcat(s1,s2));
    puts(s3);
    */
    printf("The strcmp  for s1, s1 returned %d", strcmp(s1, s2));

    return 0;
}
