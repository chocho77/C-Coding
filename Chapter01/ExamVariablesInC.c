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

    int age = 21; // integer

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("age = %d\n", age);

    return 0;
}