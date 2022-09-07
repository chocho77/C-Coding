#include <stdio.h>

int main()
{

    // variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declare what type of data we are storing.

    int x;       // declaration
    x = 123;     // initialization
    int y = 321; // declaration + initialization

    int age = 21;        // integer
    float gpa = 2.05;    // floating point number
    char grade = 'C';    // single character
    char name[] = "Bro"; // array of characters
    printf("\n\n");
    printf("===================  ");
    printf("You are %d years old", age);
    printf("  ===================\n");

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("age = %d\n", age);
    printf("gpa = %f\n", gpa);
    printf("grade = %c\n", grade);
    printf("\n ============================================================= \n");

    return 0;
}