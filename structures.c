#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};
struct Student aditya, harry, ravi;
int main()
{   
    aditya.id = 1;
    harry.id = 2;
    ravi.id = 3;
    aditya.marks = 456;
    harry.marks = 567;
    ravi.marks = 234;
    aditya.fav_char = 'a';
    harry.fav_char = 'y';
    ravi.fav_char = 'o';
    printf("Aditya got %d marks\n", aditya.marks);
    printf("All info of Aditya is: %d %d %c", aditya.id, aditya.marks, aditya.fav_char);
    return 0;
}
