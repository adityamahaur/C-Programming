#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("Your can vote");
    }
    else if (age > 10)
    {
        printf("You are between 10 and 18 so you can vote for kids.");
    }
    else
    {
        printf("Your cannot vote");
    }

    return 0;
}
