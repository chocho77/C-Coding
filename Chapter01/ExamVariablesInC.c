#include <stdio.h>

int main()
{

    // variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declare what type of data we are storing.

    int x;   // declaration
    x = 123; // initialization
    
    printf("x = %d\n", x);

    return 0;
}