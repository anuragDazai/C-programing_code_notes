// write a program to change the value of a variable to ten times its current value.

#include <stdio.h>

// Function accepts memory address (Call by Reference via pointer)
void multiplyByTen(int* ptr)
{
    *ptr = (*ptr) * 10; // Dereference and update original value [value at the ptr address = value at the ptr address * 10]
}

int main(void)
{
    int num = 7;

    printf("Value before function call: %d\n", num);

    // Passing address of 'num'
    multiplyByTen(&num); 

    printf("Value after function call:  %d\n", num); // 70

    return 0;
}