#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("text.txt", "w");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    
    // char str[4];
    // fgets(str, 5, ptr);
    // printf("The string is '%s'", str);
    
    // fputc('o', ptr);
    fputs("This is Aditya", ptr);
    
    fclose(ptr);
    return 0;
} 