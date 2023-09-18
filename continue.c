/*
some error in the program please correct later
*/


#include<stdio.h>
int main()
{
    int age;
    char name[50];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\n Enter your name: ");
    scanf("%c", name);
    while(age<18)
    {
        printf("You are not allowed to drive!!");
        if (name == "aditya") //so that we can make every aditya drive
        {
            continue;
        }
    }
    
    return 0;
}