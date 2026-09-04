// so here we are going to pass the address of a variable to a function. This is known as "call by reference" in C. By passing the address, the function can modify the original variable's value.


#include <stdio.h>

void changeReference(int* ptr) { // here the data type is int* which means it is a pointer to an integer. It will hold the address of an integer variable.
    *ptr = 100; // Dereferences the address: reaches back into main()'s memory, using the * operator to modify the original variable's value.
}

int main(void) {
    int num = 10;
    changeReference(&num); // Pass the address of 'num'
    printf("%d\n", num);   // Output: 100 (original modified!)
    return 0;
}


// 2. Call by Reference (Sending the Address)
// Instead of passing the value, you pass the variable's memory address (&var). The function captures this address using a pointer parameter (int *).

// Behavior: By using the dereference operator (*), the function walks to that exact memory address in main()'s stack frame and mutates the original variable.

// Analogous to: Giving someone your home address and key. If they enter and paint your walls blue, your house is altered.