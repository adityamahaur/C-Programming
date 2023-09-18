/*
kms to miles
inches to foot
cms to inches
pounds to kgs
inches to metre
*/
#include <stdio.h>

int main()
{
    int num1;
    float num2;
    printf("Enter 1 for Kms to Miles\n");
    printf("Enter 2 for Inches to Foot\n");
    printf("Enter 3 for Pounds to Kgs\n");
    printf("Enter 4 for Inches to Meters\n");
    printf("Enter 5 for Cms to Inches\n");
    printf("Choose what conversion do you want:\n");
    scanf("%d\n", &num1);
    printf("Enter the value to be converted:");
    scanf("%f", &num2);

    switch (num1)
    {
    case '1':
        // printf("Enter the value to be converted:");
        // scanf("%f", &num2);
        printf("%f Kms = %f Miles", num2, num2 * 0.621371);
        break;

    case '2':
        // printf("Enter the value to be converted:");
        // scanf("%f", &num2);
        printf("%f Inches = %f Foot", num2, num2 * 0.0833333);
        break;

    case '3':
        // printf("Enter the value to be converted:");
        // scanf("%f", &num2);
        printf("%f Lbs = %f Kgs", num2, num2 * 0.453592);
        break;

    case '4':
        // printf("Enter the value to be converted:");
        // scanf("%f", &num2);
        printf("%f inches = %f Meters", num2, num2 * 0.0254);
        break;

    case '5':
        // printf("Enter the value to be converted:");
        // scanf("%f", &num2);
        printf("%f Cms = %f Inches", num2, num2 * 0.393701);
        break;
    }

    return 0;
}