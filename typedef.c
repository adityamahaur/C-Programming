#include <stdio.h>
#include <string.h>
/*
int main()
{
    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul;
    ul l1, l2, l3;

    return 0;
}
*/
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
} std;

int main()
{
    std s1, s2; // yaha par struct student k bjaye typedef m nickname bnaya std krke and usko use krliya h
    // bhale hi nickname bna diya ho but purana wala naam bhi use kar skte h
    
    s1.id = 34;
    s2.id = 45;
    printf("valye of s1.id is %d\n", s1.id);
    printf("valye of s2.id is %d\n", s2.id);

    return 0;
}
