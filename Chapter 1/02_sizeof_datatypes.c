#include <stdio.h>

int main(void)
{
    printf("char:  %zu bytes\n", sizeof(char)); // these are the memory the following datatypes takes up in the memroy or the ram.
    printf("int:   %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));

    return 0;
} // there are some thing we call keywords that are reserved words that are reserved in C language like "return" and they perfrom a function and cannot be used other that that they're already reserved.