/* 
#include<stdio.h>
int main()
{
    int marks[4];
    
    // another method to initialize and declare an array at the same time:
    // int marks[4] = {1,3,6,9};
  

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    
        for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }

    // marks[0] = 34;
    // printf("marks of student 1 is %d", marks[0]);

    return 0;
}
for (int j = 0; j < 4; j++)
{
    printf("")
}
*/

/*

2D Array k liye code
*/
#include<stdio.h>
int main()
{
    int marks[2][4] = {{45,356,67,878}, {3,4,6,9}};
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        printf("The value of %d, %d element of the array is %d, %d\n", i,j,  marks[i][j]);
        }
    }
    return 0;
}

