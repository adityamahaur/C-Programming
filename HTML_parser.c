// DO THIS AGAIN AFTER COMPLETEING THE COURSE KYUKI ACHHE SE AB TKK SAMAJH NHI AAYA H YE
// TUTORIAL 43


/*
intput: <h1> This is a heading</h1>
output: This is a heading
*/
#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0; // variable to track whether we are inside the tag or not
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // To remove all the blank spaces from the beginning
    while (string[0] = ' ')
    {
        // shift the string to left
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j + 1];
        }
    }

    // TO remove all the blank spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>   This is a heading    </h>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);

    return 0;
}