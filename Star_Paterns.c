// Take input from user and ask to chose 0 for triangular star pattern and 1 for reverse triangular star pattern
// Then print the patter accordingly

/*

*
**
***     ->  Triangular Star Pattern
****
*****

*****
****
***    -> Reverse Triangular Star Pattern
**
*

*/

#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    int a;
    printf("Enter 0 for Star Pattern and 1 for Reverse Star Pattern: ");
    scanf("%d", &type);
    printf("How many rows do you want: ");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        reversestarpattern(rows);
        break;
    }
    return 0;
}
