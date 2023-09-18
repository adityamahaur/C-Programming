#include <stdio.h>
int main()
{
    // label:
    //     printf("We are inside the label\n");
    //     goto end;
    // printf("Hello world\n");
    // goto label;
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; i < 8; i++)
        {
            printf("Enter the number. Enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    printf("We are at end!\n");

    return 0;
}

/*
goto can be used to end all the nested loops and end the program
goto can be used to go to anywhere in the program wherever we need to
it is not generally used but it is a useful C concept
*/