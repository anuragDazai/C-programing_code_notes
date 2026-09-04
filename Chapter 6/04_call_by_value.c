// so in C when we apply call a function, the arguments are passed by value. This means that a copy of the argument is made and used within the function. Any changes made to the parameter inside the function do not affect the original argument outside the function.

#include <stdio.h>

void changeValue(int x) {
    x = 100; // Only modifies the local copy inside changeValue's stack frame
}

int main(void) {
    int num = 10;
    changeValue(num);
    printf("%d\n", num); // Output: 10 (unaffected)
    return 0;
}

// 1. Call by Value (Sending the Value)
// You send a plain variable. The function creates an isolated clone inside its own stack frame.

// Behavior: Changes made inside the function never affect the original variable in main().

// Analogous to: Handing someone a photocopy of a document. If they draw on it, your original document is untouched.