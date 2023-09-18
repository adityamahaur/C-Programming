#include<stdio.h>
int main()
{
    int i, age;
    for(i=0; i<=100; i++)
    {
        printf("%d\nEnter your age: ", i);
        scanf("%d", &age);
        if (age<18)
        {
            break;
        }
    }
    return 0;
}
