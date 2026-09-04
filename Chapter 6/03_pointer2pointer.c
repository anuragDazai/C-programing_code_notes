// A pointer to a pointer (often called a double pointer) is a variable that stores the memory address of another pointer variable.
// Instead of pointing directly to a plain value (like an int), it points to a pointer that is already pointing to that value

#include <stdio.h>

int main(void)
{
    int a = 50;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("Value of a:               %d\n", a);       // 50
    printf("Value via *ptr (1 hop):   %d\n", *ptr);    // 50
    printf("Value via **pptr (2 hops): %d\n\n", **pptr); // 50

    // Modifying 'a' through 2 levels of indirection
    **pptr = 999;
    printf("Value of a after **pptr = 999: %d\n", a);  // 999

    return 0;
}


// int x = 10;
// int *p = &x;
// int **pp = &p;
// Expression	What it gives
// x	10
// &x	Address of x
// p	Address of x
// *p	10
// pp	Address of p
// *pp	Address of x
// **pp	10